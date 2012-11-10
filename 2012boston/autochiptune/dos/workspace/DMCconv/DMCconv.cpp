//
// WAVE-DMC�ϊ��v���O����
//
// �����\�[�X���c
//
#define WIN32_LEAN_AND_MEAN	// ���܂��Ȃ�
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#include "typedef.h"
#include "macro.h"
#include "wavefile.h"

INT	DMCtbl[] = {
	0xD60, 0xBE0, 0xAA0, 0xA00, 0x8F0, 0x7F0, 0x710, 0x6B0,
	0x5F0, 0x500, 0x470, 0x400, 0x350, 0x2A0, 0x240, 0x1B0,
};

void	main( INT argc, CHAR* argv[] )
{
FILE*	wfp = NULL;
FILE*	ofp = NULL;
LPBYTE	lpBuffer = NULL;
INT	i, j;
INT	DMCrate = 0x0F;
INT	nVolume = 100;
BOOL	bVolume = TRUE;
BOOL	bSize   = TRUE;
BOOL	bPadding = FALSE;
CHAR*	pInFile = NULL;
CHAR*	pOutFile = NULL;

	try {
		printf( "DMC sample converter v0.05 programmed by Norix\n" );

		if( argc < 2 ) {
			printf( "Usage: DMCconv wavefile outfile <option>\n" );
			printf( " Options\n" );
			printf( " -r?  DMC Sampling rate(0-F) (Default:F 33.14KHz)\n" );
			printf( "      0: 4.18KHz  1: 4.71KHz  2: 5.26KHz  3: 5.59KHz\n" );
			printf( "      4: 6.26KHz  5: 7.05KHz  6: 7.92KHz  7: 8.36KHz\n" );
			printf( "      8: 9.42KHz  9:11.18KHz  A:12.60KHz  B:13.98KHz\n" );
			printf( "      C:16.88KHz  D:21.30KHz  E:24.86KHz  F:33.14KHz\n" );
			printf( " -v?  Volume(Default:100) \n" );
			printf( " -n   Volume not adjust(Default:Adjust)\n" );
			printf( " -b   Bank size padding(Default:No padding)\n" );
			printf( " -s   Size correct(Default:Correct)\n" );

			return;
		}

		// �I�v�V�������
		for( i = 1; i < argc; i++ ) {
			if( argv[i][0] == '-' || argv[i][0] == '/' ) {
				switch( toupper(argv[i][1]) ) {
					case	'R':
						DMCrate = strtol( &argv[i][2], NULL, 16 );
						break;
					case	'V':
						nVolume = atoi( &argv[i][2] );
						bVolume = TRUE;
						break;
					case	'B':
						bPadding = TRUE;
						break;
					case	'N':
						bVolume = FALSE;
						break;
					case	'S':
						bSize = FALSE;
						break;
				}
			} else if( !pInFile ) {
				pInFile = argv[i];
			} else {
				pOutFile = argv[i];
			}
		}

		if( !pInFile ) {
			printf( "ERROR: require input file.\n" );
			return;
		}
		if( !pOutFile ) {
			printf( "ERROR: require output file.\n" );
			return;
		}

		if( DMCrate < 0 || DMCrate > 0x0F )
			throw	"rate��0-F�͈̔͂ł��B";

		CWaveFile	wavfile;
		WAVEFORMATEX*	pwfex;

		if( !wavfile.Open( pInFile ) )
			throw	"�t�@�C�����J���Ȃ���WAVE�t�@�C���ł͂���܂���B";

		pwfex = wavfile.GetFormat();

		WORD	nChannels       = pwfex->nChannels;
		DWORD	nSamplesPerSec  = pwfex->nSamplesPerSec;
		DWORD	nAvgBytesPerSec = pwfex->nAvgBytesPerSec;
		WORD	nBlockAlign     = pwfex->nBlockAlign;
		WORD	wBitsPerSample  = pwfex->wBitsPerSample;
		DWORD	nDataSize       = wavfile.GetSize();

		if( pwfex->nChannels > 1 )
			throw	"�X�e���I�t�H�[�}�b�g�̓T�|�[�g���Ă��܂���B";
		if( pwfex->wBitsPerSample != 16 )
			throw	"8bit�t�H�[�}�b�g�̓T�|�[�g���Ă��܂���B";

		if( !(lpBuffer = (LPBYTE)malloc( nDataSize )) )
			throw	"���������m�ۏo���܂���B";

		if( !wavfile.ResetFile() )
			throw	"�ǂݍ��݃G���[���������܂����B";

		DWORD	dwReadSize = 0;
		if( !wavfile.Read( lpBuffer, nDataSize, &dwReadSize ) )
			throw	"�ǂݍ��݃G���[���������܂����B";

		if( nDataSize != dwReadSize )
			throw	"�ǂݍ��݃G���[���������܂����B";

		wavfile.Close();

		LONG	nSampleSize = nDataSize/(wBitsPerSample/8);

		printf( "Wave File SamplingRate: %dHz\n", nSamplesPerSec );
		printf( "DMC       SamplingRate: %7.3fHz\n", ((1789772.5*8)/(double)DMCtbl[DMCrate]) );

		printf( "Smaple size: %d samples\n", nSampleSize );

		double	SampleStep, SampleCount;

		// �T���v�����O���[�g��DMC�T���v�����O���[�g�̃X�e�b�v�l
		SampleStep = ((1789772.5*8)/(double)DMCtbl[DMCrate])/(double)nSamplesPerSec;

//		if( SampleStep < 1.0 )
//			throw	"WAVE�t�@�C���̃T���v�����O���[�g���������܂��B\n";

		LPSHORT	pW;
		INT	Min, Max;
		INT	temp;

		// WAVE�t�@�C���̃f�[�^��MAX�l�����߂�
		pW = (SHORT*)lpBuffer;
		Min =  32767;
		Max = -32768;
		for( i = 0; i < nSampleSize; i++ ) {
			if( Min > (INT)*pW )
				Min = (INT)*pW;
			if( Max < (INT)*pW )
				Max = (INT)*pW;
			pW++;
		}

		// ���ϒl�̒��S�_
		INT	DivPoint = (Min+Max)/2;
		pW = (SHORT*)lpBuffer;

		// �ł����������ő�l�Ƃ��Ď��
		INT	Multi;
		if( abs( Min ) > abs( Max ) ) {
			Multi = abs(Min);
		} else {
			Multi = abs(Max);
		}

		// �ϊ�
		INT	Delta;
		if( bVolume && Multi ) {
			for( i = 0; i < nSampleSize; i++ ) {
				// ���S�_�Ɉړ����ă{�����[������
				temp = nVolume*((INT)pW[i]-(Min+Max)/2)/100;
				// �ő�l��0x1000�Ƃ���
				temp = 0x800*temp/Multi + 0x800;
				if( temp < 0 )
					temp = 0;
				if( temp > 0x0FFF )
					temp = 0xFFF;

				pW[i] = (SHORT)temp;
			}
			Delta = 0x3F;	// DPCM�����l
		} else {
			Delta = (pW[0]+0x8000)>>9;	// DPCM�����l
		}
		printf( "DMC start value: $%02X\n", Delta );

		// DMC�f�[�^�ւ̕ϊ�
		if( (ofp = fopen( pOutFile, "wb" )) == NULL )
			throw	"�t�@�C�����J���܂���B";

		i = 0;
		INT	DMCshift = 8;
		INT	DMCsize = 0;
		INT	DMCbits = 0;

		pW = (SHORT*)lpBuffer;

		SampleCount = SampleStep;

		do {
			DMCbits >>= 1;

			if( pW[i] > Delta*(0x1000/0x40) ) {
				if( ++Delta > 0x3F )
					Delta = 0x3F;
				DMCbits |= 0x80;
			} else {
				if( --Delta < 0 )
					Delta = 0;
			}

			if( --DMCshift == 0 ) {
				fputc( DMCbits, ofp );

				DMCshift = 8;
				DMCbits = 0;
				DMCsize++;

				if( bPadding ) {
					// �p�f�B���O
					if( (DMCsize & 0x0FFF) == 0x0FF1 ) {
						for( j = 0; j < 0xF; j++ ) {
							fputc( 0, ofp );
							DMCsize++;
						}
					}
				}
			}

			SampleCount -= 1.0;
			while( SampleCount < 0.0 ) {
				SampleCount += SampleStep;
				if( ++i >= nSampleSize )
					break;
			}
		} while( i < nSampleSize );

		if( bPadding ) {
			// �o���N�T�C�Y�ɂȂ�l�ɃP�c�Ƀf�[�^�𖄂߂�
			INT	nTotalSize = (DMCsize+16383)&~16383;

			do {
				fputc( 0, ofp );
				DMCsize++;
			} while( DMCsize < nTotalSize );

			printf( "Total: %dBanks(8K) $%02XBanks(16KHex) %dKBytes\n", DMCsize/8192, DMCsize/16384, DMCsize/1024 );
		} else if( bSize ) {
			// �Đ��T�C�Y�ɍ����悤�Ƀf�[�^�𖄂߂�
			if( DMCsize > 0xFF1 ) {
				printf( "Warning: DMC�̍ő�Đ��\�o�C�g���𒴂��Ă��܂��B\n" );
			}
			INT	nTotalSize = ((DMCsize+15)&0xFFFFFFF0)+1;
			do {
				fputc( 0x55, ofp );
				DMCsize++;
			} while( DMCsize < nTotalSize );

			printf( "Total: %d bytes\n", DMCsize );
			printf( "Len-reg value: %d ($%X)\n", nTotalSize>>4, nTotalSize>>4 );
		} else {
			printf( "Total: %d bytes\n", DMCsize );
		}

		FREE( lpBuffer );
		FCLOSE( ofp );

		printf( "Completed!!\n" );
	} catch( CHAR* pStr ) {
		printf( "ERROR: %s\n", pStr );

		FREE( lpBuffer );
		FCLOSE( wfp );
		FCLOSE( ofp );
		return;
#ifndef	_DEBUG
	} catch( ... ) {
		printf( "ERROR: �s���ȃG���[���������܂����B\n" );

		FREE( lpBuffer );
		FCLOSE( wfp );
		FCLOSE( ofp );
		return;
#endif
	}
}


