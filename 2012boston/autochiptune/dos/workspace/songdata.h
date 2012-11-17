; Title: Song Name
; Composer: Artist
; Maker: Maker
SOUND_GENERATOR	equ	$00
sound_data_table:
	dw	songdata_00
	dw	songdata_01
	dw	songdata_02
	dw	songdata_03
	dw	songdata_04
	dw	songdata_05
	dw	songdata_06
loop_point_table:
	dw	songdata_00_lp
	dw	songdata_01_lp
	dw	songdata_02_lp
	dw	songdata_03_lp
	dw	songdata_04_lp
	dw	songdata_05_lp
	dw	songdata_06_lp

songdata_00:
	db	$f9,$08,$fe,$83,$fd,$0f,$fd,$00
	db	$25,$2c,$fd,$02,$27,$1d,$fd,$00
	db	$27,$0f,$fd,$07,$22,$1e,$fd,$02
	db	$22,$1d,$fd,$08,$25,$1e,$fd,$03
	db	$27,$1d,$fd,$07,$25,$1e,$fd,$00
	db	$22,$07,$fd,$03,$22,$16,$fd,$09
	db	$25,$1e,$fd,$03,$27,$0e,$fd,$02
	db	$27,$08,$fd,$03,$22,$0e,$fd,$06
	db	$22,$1e,$fd,$01,$29,$07,$fd,$00
	db	$20,$0b,$fd,$03,$22,$0f,$fd,$08
	db	$25,$0f,$fd,$06,$22,$0f,$fd,$05
	db	$22,$0e,$fd,$07,$27,$17,$fd,$06
	db	$27,$16,$fd,$06,$27,$0e,$fd,$09
	db	$27,$17,$fd,$09,$29,$0e,$fd,$08
	db	$2a,$0f,$fd,$0b,$23,$3b,$fd,$06
	db	$25,$0f,$fd,$06,$25,$16,$fd,$05
	db	$27,$0f,$fd,$06,$29,$16,$fd,$07
	db	$22,$3b,$fd,$02,$23,$1d,$fd,$05
	db	$23,$0f,$fd,$05,$25,$0f,$fd,$04
	db	$27,$0b,$fd,$07,$29,$16,$fd,$00
	db	$20,$0b,$fd,$03,$23,$16,$fd,$03
	db	$22,$0f,$fd,$06,$22,$16,$fd,$00
	db	$24,$0f,$fd,$05,$29,$1d,$fd,$06
	db	$22,$17,$fd,$05,$22,$1d,$fd,$07
	db	$27,$0f,$fd,$07,$22,$1d,$fd,$07
	db	$22,$08,$fd,$0b,$20,$2c,$fd,$00
	db	$20,$07,$fd,$03,$23,$0f,$fd,$00
	db	$21,$08,$fd,$00,$20,$07,$fd,$0b
	db	$22,$0f,$fd,$07,$27,$1d,$fd,$0c
	db	$25,$16,$fd,$09,$2a,$16,$fd,$00
	db	$20,$08,$fd,$03,$25,$16,$fd,$02
	db	$25,$07,$fd,$08,$20,$0f,$fd,$07
	db	$2a,$16,$fd,$0a,$23,$1e,$fd,$08
	db	$20,$0b,$fd,$02,$29,$0f,$fd,$04
	db	$27,$0b,$fd,$0b,$22,$1d,$fd,$07
	db	$29,$1e,$fd,$00,$22,$0e,$fd,$07
	db	$20,$0b,$fd,$09,$27,$1e,$fd,$00
	db	$22,$07,$fd,$06,$22,$16,$fd,$02
	db	$20,$0f,$fd,$06,$27,$0f,$fd,$04
	db	$22,$07,$fd,$04,$23,$0f,$fd,$07
	db	$27,$0f,$fd,$00,$28,$07,$fd,$09
	db	$29,$0f,$fd,$01,$22,$0b,$fd,$03
	db	$29,$16,$fd,$05,$27,$1e,$fd,$01
	db	$20,$07,$fd,$00,$20,$0b,$fd,$00
	db	$22,$07,$fd,$05,$22,$0f,$fd,$00
	db	$20,$0b,$fd,$02,$29,$08,$fd,$09
	db	$2a,$07,$fd,$0a,$22,$0f,$fd,$07
	db	$27,$16,$fd,$00,$21,$07,$fd,$04
	db	$27,$16,$fd,$00,$20,$08,$fd,$0b
	db	$20,$16,$fd,$08,$20,$1d,$fd,$06
	db	$27,$0f,$fd,$04,$23,$0b,$fd,$05
	db	$22,$0f,$fd,$0a,$22,$07,$fd,$08
	db	$25,$0b,$fd,$03,$24,$08,$fd,$08
	db	$23,$07,$fd,$09,$22,$0b,$fd,$08
	db	$29,$0f,$fd,$06,$27,$0f,$fd,$07
	db	$25,$0b,$fd,$06,$29,$0f,$fd,$0a
	db	$20,$07,$fd,$09,$20,$0b,$fd,$0a
	db	$27,$0f,$fd,$0b,$2a,$0f,$fd,$0b
	db	$2a,$1d,$fd,$00,$20,$07,$fd,$00
	db	$27,$0f,$fd,$05,$20,$08,$fd,$0a
	db	$29,$16,$fd,$07,$20,$0e,$fd,$08
	db	$23,$0f,$fd,$00,$20,$08,$fd,$06
	db	$22,$16,$fd,$09,$22,$1d,$fd,$07
	db	$27,$16,$fd,$08,$20,$0b,$fd,$02
	db	$27,$08,$fd,$03,$22,$0f,$fd,$09
	db	$23,$0b,$fd,$04,$24,$07,$fd,$09
	db	$20,$0b,$fd,$0a,$22,$0f,$fd,$09
	db	$22,$1d,$fd,$05,$22,$1e,$fd,$00
	db	$21,$0b,$fd,$05,$2a,$0f,$fd,$0a
	db	$23,$0e,$fd,$0a,$29,$0f,$fd,$09
	db	$22,$16,$fd,$05,$22,$0f,$fd,$0a
	db	$27,$2c,$fd,$05,$2a,$0f,$fd,$00
	db	$29,$0b,$fd,$00,$26,$0f,$fd,$06
	db	$29,$16,$fd,$04,$27,$0b,$fd,$00
	db	$29,$0f,$fd,$08,$20,$07,$fd,$09
	db	$20,$0f,$fd,$06,$23,$07,$fd,$09
	db	$22,$08,$fd,$09,$23,$07,$fd,$0a
	db	$25,$0b,$fd,$08,$22,$08,$fd,$0a
	db	$23,$07,$fd,$06,$27,$07,$fd,$08
	db	$20,$08,$fd,$01,$20,$07,$fd,$05
	db	$24,$0b,$fd,$09,$25,$0b,$fd,$09
	db	$29,$16,$fd,$08,$22,$1e,$fd,$04
	db	$20,$07,$fd,$05,$22,$16,$fd,$03
	db	$23,$16,$fd,$03,$2a,$0f,$fd,$01
	db	$27,$08,$fd,$0a,$22,$1d,$fd,$07
	db	$20,$07,$fd,$08,$22,$08,$fd,$07
	db	$23,$07,$fd,$0a,$27,$08,$fd,$0a
	db	$27,$0b,$fd,$08,$29,$07,$fd,$0b
	db	$2a,$0b,$fd,$0a,$20,$08,$fd,$09
	db	$22,$1d,$fd,$04,$29,$07,$fd,$07
	db	$20,$08,$fd,$08,$22,$0f,$fd,$08
	db	$27,$0e,$fd,$09,$27,$16,$fd,$08
	db	$23,$17,$fd,$0b,$27,$1d,$fd,$0a
	db	$20,$0b,$fd,$0c,$2a,$0f,$fd,$0a
	db	$2a,$07,$fd,$0a,$27,$0b,$fd,$0c
	db	$20,$1e,$fd,$04,$27,$0f,$fd,$06
	db	$23,$16,$fd,$0c,$25,$16,$fd,$0c
	db	$27,$0f,$fd,$0a,$29,$0e,$fd,$09
	db	$29,$0f,$fd,$0a,$20,$0f,$fd,$0d
	db	$20,$16,$fd,$04,$22,$0f,$fd,$02
	db	$20,$0b,$fd,$05,$20,$07,$fd,$0c
	db	$23,$1e,$fd,$0b,$2a,$16,$fd,$09
	db	$29,$0f,$fd,$03,$22,$0e,$fd,$05
	db	$27,$0b,$fd,$04,$27,$08,$fd,$0b
	db	$29,$0f,$fd,$06,$24,$0b,$fd,$09
	db	$27,$07,$fd,$0a,$29,$0f,$fd,$02
	db	$20,$0b,$fd,$08,$22,$0b,$fd,$09
	db	$27,$07,$fd,$09,$22,$0f,$fd,$08
	db	$20,$0f,$fd,$0a,$29,$0e,$fd,$05
	db	$25,$17,$fd,$05,$20,$0b,$fd,$0a
	db	$27,$16,$fd,$07,$22,$2c,$fd,$0c
	db	$29,$0f,$fd,$03,$20,$0b,$fd,$04
	db	$29,$07,$fd,$09,$20,$0f,$fd,$0b
	db	$22,$2c,$fd,$0a,$29,$08,$fd,$0a
	db	$22,$0b,$fd,$0a,$22,$0e,$fd,$08
	db	$27,$0f,$fd,$09,$27,$0f,$fd,$0b
	db	$29,$1e,$fd,$0b,$22,$1d,$fd,$00
	db	$25,$07,$fd,$04,$22,$17,$fd,$0c
	db	$20,$16,$fd,$07,$20,$07,$fd,$0a
	db	$22,$07,$fd,$08,$27,$2d,$fd,$05
	db	$29,$0e,$fd,$09,$22,$08,$fd,$0b
	db	$25,$16,$fd,$07,$20,$0b,$fd,$0a
	db	$2a,$0f,$fd,$04,$27,$0b,$fd,$08
	db	$22,$0b,$fd,$09,$23,$07,$fd,$0b
	db	$25,$0b,$fd,$08,$22,$08,$fd,$09
	db	$23,$0e,$fd,$08,$22,$0f,$fd,$09
	db	$23,$04,$fd,$0c,$25,$0b,$fd,$0b
	db	$27,$0f,$fd,$06,$22,$16,$fd,$09
	db	$29,$16,$fd,$07,$20,$07
songdata_00_lp:
	db	$fc,$ff,$ff

songdata_01:
	db	$f9,$08,$fe,$87,$fd,$0a,$fd,$00
	db	$30,$2c,$fd,$00,$32,$1d,$fd,$00
	db	$36,$0f,$fd,$00,$35,$1e,$fd,$00
	db	$37,$1d,$fd,$00,$30,$1e,$fd,$00
	db	$35,$1d,$fd,$00,$32,$1e,$fd,$00
	db	$30,$07,$fd,$00,$37,$16,$fd,$00
	db	$32,$1e,$fd,$00,$35,$0e,$fd,$00
	db	$32,$08,$fd,$00,$30,$0e,$fd,$00
	db	$35,$1e,$fd,$00,$37,$07,$fd,$00
	db	$31,$0b,$fd,$00,$37,$0f,$fd,$00
	db	$32,$0f,$fd,$00,$30,$0f,$fd,$00
	db	$37,$0e,$fd,$00,$35,$17,$fd,$00
	db	$32,$16,$fd,$00,$35,$0e,$fd,$00
	db	$35,$17,$fd,$00,$37,$0e,$fd,$00
	db	$32,$0f,$fd,$00,$30,$3b,$fd,$00
	db	$33,$0f,$fd,$00,$32,$16,$fd,$00
	db	$36,$0f,$fd,$00,$3a,$16,$fd,$00
	db	$33,$3b,$fd,$00,$3a,$1d,$fd,$00
	db	$3a,$0f,$fd,$00,$33,$0f,$fd,$00
	db	$36,$0b,$fd,$00,$30,$16,$fd,$00
	db	$31,$0b,$fd,$00,$30,$16,$fd,$00
	db	$30,$0f,$fd,$00,$35,$16,$fd,$00
	db	$36,$0f,$fd,$00,$36,$1d,$fd,$00
	db	$37,$17,$fd,$00,$37,$1d,$fd,$00
	db	$39,$0f,$fd,$00,$33,$1d,$fd,$00
	db	$30,$08,$fd,$00,$33,$2c,$fd,$00
	db	$31,$07,$fd,$00,$34,$0f,$fd,$00
	db	$30,$08,$fd,$00,$31,$07,$fd,$00
	db	$35,$0f,$fd,$00,$39,$1d,$fd,$00
	db	$39,$16,$fd,$00,$39,$16,$fd,$00
	db	$31,$08,$fd,$00,$33,$16,$fd,$00
	db	$30,$07,$fd,$00,$37,$0f,$fd,$00
	db	$32,$16,$fd,$00,$32,$1e,$fd,$00
	db	$39,$0b,$fd,$00,$3a,$0f,$fd,$00
	db	$39,$0b,$fd,$00,$33,$1d,$fd,$00
	db	$32,$1e,$fd,$00,$39,$0e,$fd,$00
	db	$31,$0b,$fd,$00,$3a,$1e,$fd,$00
	db	$33,$07,$fd,$00,$33,$16,$fd,$00
	db	$37,$0f,$fd,$00,$32,$0f,$fd,$00
	db	$37,$07,$fd,$00,$34,$0f,$fd,$00
	db	$34,$0f,$fd,$00,$37,$07,$fd,$00
	db	$32,$0f,$fd,$00,$30,$0b,$fd,$00
	db	$36,$16,$fd,$00,$39,$1e,$fd,$00
	db	$39,$07,$fd,$00,$31,$0b,$fd,$00
	db	$30,$07,$fd,$00,$37,$0f,$fd,$00
	db	$31,$0b,$fd,$00,$30,$08,$fd,$00
	db	$37,$07,$fd,$00,$39,$0f,$fd,$00
	db	$3a,$16,$fd,$00,$30,$07,$fd,$00
	db	$30,$16,$fd,$00,$31,$08,$fd,$00
	db	$32,$16,$fd,$00,$32,$1d,$fd,$00
	db	$30,$0f,$fd,$00,$3a,$0b,$fd,$00
	db	$3a,$0f,$fd,$00,$39,$07,$fd,$00
	db	$30,$0b,$fd,$00,$33,$08,$fd,$00
	db	$3a,$07,$fd,$00,$39,$0b,$fd,$00
	db	$3a,$0f,$fd,$00,$36,$0f,$fd,$00
	db	$37,$0b,$fd,$00,$30,$0f,$fd,$00
	db	$31,$07,$fd,$00,$32,$0b,$fd,$00
	db	$35,$0f,$fd,$00,$32,$0f,$fd,$00
	db	$33,$1d,$fd,$00,$31,$07,$fd,$00
	db	$38,$0f,$fd,$00,$37,$08,$fd,$00
	db	$30,$16,$fd,$00,$37,$0e,$fd,$00
	db	$39,$0f,$fd,$00,$31,$08,$fd,$00
	db	$30,$16,$fd,$00,$39,$1d,$fd,$00
	db	$32,$16,$fd,$00,$37,$0b,$fd,$00
	db	$31,$08,$fd,$00,$39,$0f,$fd,$00
	db	$31,$0b,$fd,$00,$33,$07,$fd,$00
	db	$35,$0b,$fd,$00,$35,$0f,$fd,$00
	db	$33,$1d,$fd,$00,$33,$1e,$fd,$00
	db	$30,$0b,$fd,$00,$39,$0f,$fd,$00
	db	$30,$0e,$fd,$00,$30,$0f,$fd,$00
	db	$30,$16,$fd,$00,$31,$0f,$fd,$00
	db	$32,$2c,$fd,$00,$32,$0f,$fd,$00
	db	$30,$0b,$fd,$00,$35,$0f,$fd,$00
	db	$38,$16,$fd,$00,$36,$0b,$fd,$00
	db	$38,$0f,$fd,$00,$31,$07,$fd,$00
	db	$32,$0f,$fd,$00,$30,$07,$fd,$00
	db	$39,$08,$fd,$00,$32,$07,$fd,$00
	db	$33,$0b,$fd,$00,$30,$08,$fd,$00
	db	$37,$07,$fd,$00,$35,$07,$fd,$00
	db	$32,$08,$fd,$00,$3a,$07,$fd,$00
	db	$33,$0b,$fd,$00,$30,$0b,$fd,$00
	db	$35,$16,$fd,$00,$39,$1e,$fd,$00
	db	$3a,$07,$fd,$00,$37,$16,$fd,$00
	db	$32,$16,$fd,$00,$37,$0f,$fd,$00
	db	$30,$08,$fd,$00,$33,$1d,$fd,$00
	db	$39,$07,$fd,$00,$30,$08,$fd,$00
	db	$39,$07,$fd,$00,$35,$08,$fd,$00
	db	$33,$0b,$fd,$00,$33,$07,$fd,$00
	db	$33,$0b,$fd,$00,$37,$08,$fd,$00
	db	$37,$1d,$fd,$00,$38,$07,$fd,$00
	db	$35,$08,$fd,$00,$33,$0f,$fd,$00
	db	$3a,$0e,$fd,$00,$32,$16,$fd,$00
	db	$36,$17,$fd,$00,$35,$1d,$fd,$00
	db	$31,$0b,$fd,$00,$30,$0f,$fd,$00
	db	$30,$07,$fd,$00,$30,$0b,$fd,$00
	db	$33,$1e,$fd,$00,$32,$0f,$fd,$00
	db	$34,$16,$fd,$00,$37,$16,$fd,$00
	db	$3a,$0f,$fd,$00,$3a,$0e,$fd,$00
	db	$3a,$0f,$fd,$00,$35,$0f,$fd,$00
	db	$32,$16,$fd,$00,$31,$0f,$fd,$00
	db	$35,$0b,$fd,$00,$37,$07,$fd,$00
	db	$37,$1e,$fd,$00,$33,$16,$fd,$00
	db	$37,$0f,$fd,$00,$33,$0e,$fd,$00
	db	$30,$0b,$fd,$00,$38,$08,$fd,$00
	db	$34,$0f,$fd,$00,$32,$0b,$fd,$00
	db	$32,$07,$fd,$00,$35,$0f,$fd,$00
	db	$31,$0b,$fd,$00,$31,$0b,$fd,$00
	db	$33,$07,$fd,$00,$33,$0f,$fd,$00
	db	$3a,$0f,$fd,$00,$32,$0e,$fd,$00
	db	$3a,$17,$fd,$00,$32,$0b,$fd,$00
	db	$32,$16,$fd,$00,$39,$2c,$fd,$00
	db	$33,$0f,$fd,$00,$39,$0b,$fd,$00
	db	$30,$07,$fd,$00,$32,$0f,$fd,$00
	db	$39,$2c,$fd,$00,$30,$08,$fd,$00
	db	$35,$0b,$fd,$00,$33,$0e,$fd,$00
	db	$3a,$0f,$fd,$00,$32,$0f,$fd,$00
	db	$32,$1e,$fd,$00,$35,$1d,$fd,$00
	db	$34,$07,$fd,$00,$3a,$17,$fd,$00
	db	$33,$16,$fd,$00,$31,$07,$fd,$00
	db	$30,$07,$fd,$00,$39,$2d,$fd,$00
	db	$37,$0e,$fd,$00,$39,$08,$fd,$00
	db	$33,$16,$fd,$00,$35,$0b,$fd,$00
	db	$32,$0f,$fd,$00,$3a,$0b,$fd,$00
	db	$39,$0b,$fd,$00,$3a,$07,$fd,$00
	db	$37,$0b,$fd,$00,$31,$08,$fd,$00
	db	$37,$0e,$fd,$00,$33,$0f,$fd,$00
	db	$35,$04,$fd,$00,$3a,$0b,$fd,$00
	db	$33,$0f,$fd,$00,$33,$16,$fd,$00
	db	$33,$16,$fd,$00,$3a,$07
songdata_01_lp:
	db	$fc,$ff,$ff

songdata_02:
	db	$fe,$8f,$15,$21,$fc,$0b,$17,$15
	db	$fc,$08,$17,$0b,$fc,$04,$12,$16
	db	$fc,$08,$12,$15,$fc,$08,$15,$16
	db	$fc,$08,$17,$15,$fc,$08,$15,$16
	db	$fc,$08,$12,$05,$fc,$02,$12,$10
	db	$fc,$06,$15,$16,$fc,$08,$17,$0a
	db	$fc,$04,$17,$06,$fc,$02,$12,$0a
	db	$fc,$04,$12,$16,$fc,$08,$19,$05
	db	$fc,$02,$10,$08,$fc,$03,$12,$0b
	db	$fc,$04,$15,$0b,$fc,$04,$12,$0b
	db	$fc,$04,$12,$0a,$fc,$04,$17,$11
	db	$fc,$06,$17,$10,$fc,$06,$17,$0a
	db	$fc,$04,$17,$11,$fc,$06,$19,$0a
	db	$fc,$04,$1a,$0b,$fc,$04,$13,$2c
	db	$fc,$0f,$15,$0b,$fc,$04,$15,$10
	db	$fc,$06,$17,$0b,$fc,$04,$19,$10
	db	$fc,$06,$12,$2c,$fc,$0f,$13,$15
	db	$fc,$08,$13,$0b,$fc,$04,$15,$0b
	db	$fc,$04,$17,$08,$fc,$03,$19,$10
	db	$fc,$06,$10,$08,$fc,$03,$13,$10
	db	$fc,$06,$12,$0b,$fc,$04,$12,$10
	db	$fc,$06,$14,$0b,$fc,$04,$19,$15
	db	$fc,$08,$12,$11,$fc,$06,$12,$15
	db	$fc,$08,$17,$0b,$fc,$04,$12,$15
	db	$fc,$08,$12,$06,$fc,$02,$10,$21
	db	$fc,$0b,$10,$05,$fc,$02,$13,$0b
	db	$fc,$04,$11,$06,$fc,$02,$10,$05
	db	$fc,$02,$12,$0b,$fc,$04,$17,$15
	db	$fc,$08,$15,$10,$fc,$06,$1a,$10
	db	$fc,$06,$10,$06,$fc,$02,$15,$10
	db	$fc,$06,$15,$05,$fc,$02,$10,$0b
	db	$fc,$04,$1a,$10,$fc,$06,$13,$16
	db	$fc,$08,$10,$08,$fc,$03,$19,$0b
	db	$fc,$04,$17,$08,$fc,$03,$12,$15
	db	$fc,$08,$19,$16,$fc,$08,$12,$0a
	db	$fc,$04,$10,$08,$fc,$03,$17,$16
	db	$fc,$08,$12,$05,$fc,$02,$12,$10
	db	$fc,$06,$10,$0b,$fc,$04,$17,$0b
	db	$fc,$04,$12,$05,$fc,$02,$13,$0b
	db	$fc,$04,$17,$0b,$fc,$04,$18,$05
	db	$fc,$02,$19,$0b,$fc,$04,$12,$08
	db	$fc,$03,$19,$10,$fc,$06,$17,$16
	db	$fc,$08,$10,$05,$fc,$02,$10,$08
	db	$fc,$03,$12,$05,$fc,$02,$12,$0b
	db	$fc,$04,$10,$08,$fc,$03,$19,$06
	db	$fc,$02,$1a,$05,$fc,$02,$12,$0b
	db	$fc,$04,$17,$10,$fc,$06,$11,$05
	db	$fc,$02,$17,$10,$fc,$06,$10,$06
	db	$fc,$02,$10,$10,$fc,$06,$10,$15
	db	$fc,$08,$17,$0b,$fc,$04,$13,$08
	db	$fc,$03,$12,$0b,$fc,$04,$12,$05
	db	$fc,$02,$15,$08,$fc,$03,$14,$06
	db	$fc,$02,$13,$05,$fc,$02,$12,$08
	db	$fc,$03,$19,$0b,$fc,$04,$17,$0b
	db	$fc,$04,$15,$08,$fc,$03,$19,$0b
	db	$fc,$04,$10,$05,$fc,$02,$10,$08
	db	$fc,$03,$17,$0b,$fc,$04,$1a,$0b
	db	$fc,$04,$1a,$15,$fc,$08,$10,$05
	db	$fc,$02,$17,$0b,$fc,$04,$10,$06
	db	$fc,$02,$19,$10,$fc,$06,$10,$0a
	db	$fc,$04,$13,$0b,$fc,$04,$10,$06
	db	$fc,$02,$12,$10,$fc,$06,$12,$15
	db	$fc,$08,$17,$10,$fc,$06,$10,$08
	db	$fc,$03,$17,$06,$fc,$02,$12,$0b
	db	$fc,$04,$13,$08,$fc,$03,$14,$05
	db	$fc,$02,$10,$08,$fc,$03,$12,$0b
	db	$fc,$04,$12,$15,$fc,$08,$12,$16
	db	$fc,$08,$11,$08,$fc,$03,$1a,$0b
	db	$fc,$04,$13,$0a,$fc,$04,$19,$0b
	db	$fc,$04,$12,$10,$fc,$06,$12,$0b
	db	$fc,$04,$17,$21,$fc,$0b,$1a,$0b
	db	$fc,$04,$19,$08,$fc,$03,$16,$0b
	db	$fc,$04,$19,$10,$fc,$06,$17,$08
	db	$fc,$03,$19,$0b,$fc,$04,$10,$05
	db	$fc,$02,$10,$0b,$fc,$04,$13,$05
	db	$fc,$02,$12,$06,$fc,$02,$13,$05
	db	$fc,$02,$15,$08,$fc,$03,$12,$06
	db	$fc,$02,$13,$05,$fc,$02,$17,$05
	db	$fc,$02,$10,$06,$fc,$02,$10,$05
	db	$fc,$02,$14,$08,$fc,$03,$15,$08
	db	$fc,$03,$19,$10,$fc,$06,$12,$16
	db	$fc,$08,$10,$05,$fc,$02,$12,$10
	db	$fc,$06,$13,$10,$fc,$06,$1a,$0b
	db	$fc,$04,$17,$06,$fc,$02,$12,$15
	db	$fc,$08,$10,$05,$fc,$02,$12,$06
	db	$fc,$02,$13,$05,$fc,$02,$17,$06
	db	$fc,$02,$17,$08,$fc,$03,$19,$05
	db	$fc,$02,$1a,$08,$fc,$03,$10,$06
	db	$fc,$02,$12,$15,$fc,$08,$19,$05
	db	$fc,$02,$10,$06,$fc,$02,$12,$0b
	db	$fc,$04,$17,$0a,$fc,$04,$17,$10
	db	$fc,$06,$13,$11,$fc,$06,$17,$15
	db	$fc,$08,$10,$08,$fc,$03,$1a,$0b
	db	$fc,$04,$1a,$05,$fc,$02,$17,$08
	db	$fc,$03,$10,$16,$fc,$08,$17,$0b
	db	$fc,$04,$13,$10,$fc,$06,$15,$10
	db	$fc,$06,$17,$0b,$fc,$04,$19,$0a
	db	$fc,$04,$19,$0b,$fc,$04,$10,$0b
	db	$fc,$04,$10,$10,$fc,$06,$12,$0b
	db	$fc,$04,$10,$08,$fc,$03,$10,$05
	db	$fc,$02,$13,$16,$fc,$08,$1a,$10
	db	$fc,$06,$19,$0b,$fc,$04,$12,$0a
	db	$fc,$04,$17,$08,$fc,$03,$17,$06
	db	$fc,$02,$19,$0b,$fc,$04,$14,$08
	db	$fc,$03,$17,$05,$fc,$02,$19,$0b
	db	$fc,$04,$10,$08,$fc,$03,$12,$08
	db	$fc,$03,$17,$05,$fc,$02,$12,$0b
	db	$fc,$04,$10,$0b,$fc,$04,$19,$0a
	db	$fc,$04,$15,$11,$fc,$06,$10,$08
	db	$fc,$03,$17,$10,$fc,$06,$12,$21
	db	$fc,$0b,$19,$0b,$fc,$04,$10,$08
	db	$fc,$03,$19,$05,$fc,$02,$10,$0b
	db	$fc,$04,$12,$21,$fc,$0b,$19,$06
	db	$fc,$02,$12,$08,$fc,$03,$12,$0a
	db	$fc,$04,$17,$0b,$fc,$04,$17,$0b
	db	$fc,$04,$19,$16,$fc,$08,$12,$15
	db	$fc,$08,$15,$05,$fc,$02,$12,$11
	db	$fc,$06,$10,$10,$fc,$06,$10,$05
	db	$fc,$02,$12,$05,$fc,$02,$17,$21
	db	$fc,$0c,$19,$0a,$fc,$04,$12,$06
	db	$fc,$02,$15,$10,$fc,$06,$10,$08
	db	$fc,$03,$1a,$0b,$fc,$04,$17,$08
	db	$fc,$03,$12,$08,$fc,$03,$13,$05
	db	$fc,$02,$15,$08,$fc,$03,$12,$06
	db	$fc,$02,$13,$0a,$fc,$04,$12,$0b
	db	$fc,$04,$13,$03,$fc,$01,$15,$08
	db	$fc,$03,$17,$0b,$fc,$04,$12,$10
	db	$fc,$06,$19,$10,$fc,$06,$10,$05
	db	$fc,$02
songdata_02_lp:
	db	$fc,$ff,$ff

songdata_03:
	db	$fe,$8f,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$1e,$fd,$00,$fc,$0f,$fd,$00
	db	$00,$0e,$fd,$00,$fc,$1e,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$1d,$fd,$00
	db	$fc,$1e,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$1e,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$07,$fd,$00
	db	$00,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0e,$fd,$00,$fc,$0b,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0f,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0e,$fd,$00
	db	$fc,$17,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$3b,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$17,$fd,$00,$fc,$0e,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$3c,$fd,$00
	db	$fc,$1d,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$0f,$fd,$00
	db	$00,$0e,$fd,$00,$fc,$0f,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$1e,$fd,$00,$fc,$0e,$fd,$00
	db	$fc,$1e,$fd,$00,$fc,$07,$fd,$00
	db	$fc,$2c,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$07,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$1e,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$07,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$1e,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0e,$fd,$00
	db	$00,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$1d,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$16,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0f,$fd,$00,$00,$0e,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$07,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$1e,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0b,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$08,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$1e,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$0b,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$08,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$0b,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$07,$fd,$00
	db	$00,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0e,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$08,$fd,$00,$00,$0e,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$1e,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$07,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$0b,$fd,$00
	db	$00,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$1d,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$2c,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$07,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$07,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0e,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$08,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$16,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$07,$fd,$00
	db	$fc,$16,$fd,$00,$fc,$17,$fd,$00
	db	$fc,$0e,$fd,$00,$fc,$08,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$07,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$08,$fd,$00
	db	$00,$0e,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$08,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$07,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$07,$fd,$00,$fc,$07,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$16,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$1d,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$1e,$fd,$00
	db	$00,$0e,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$17,$fd,$00,$fc,$0e,$fd,$00
	db	$fc,$0f,$fd,$00,$fc,$0f,$fd,$03
	db	$00,$0f,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$0e,$fd,$00,$fc,$0c,$fd,$00
	db	$00,$0e,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$0e,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$08,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0c,$fd,$00,$fc,$07,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$07,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0e,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$2d,$fd,$00,$fc,$0e,$fd,$00
	db	$fc,$0b,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$00,$0e,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$1e,$fd,$00,$fc,$07,$fd,$00
	db	$00,$0f,$fd,$00,$fc,$16,$fd,$00
	db	$fc,$07,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$2c,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$08,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0f,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$08,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$07,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$0f,$fd,$00,$00,$0e,$fd,$00
	db	$fc,$0b,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$16,$fd,$00,$00,$0f,$fd,$00
	db	$fc,$07
songdata_03_lp:
	db	$fc,$ff,$ff

songdata_04:

songdata_04_lp:
	db	$fc,$ff,$ff

songdata_05:

songdata_05_lp:
	db	$fc,$ff,$ff

songdata_06:

songdata_06_lp:
	db	$fc,$ff,$ff
