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
	db	$f9,$08,$fe,$8b,$fd,$0f,$fd,$00
	db	$20,$10,$fd,$10,$27,$06,$fd,$10
	db	$27,$0b,$fd,$10,$29,$05,$fd,$10
	db	$20,$11,$fd,$10,$20,$21,$fd,$0f
	db	$27,$22,$fd,$0f,$27,$21,$fd,$10
	db	$27,$08,$fd,$10,$29,$0c,$fd,$10
	db	$27,$08,$fd,$10,$20,$11,$fd,$10
	db	$20,$0b,$fd,$10,$20,$16,$fd,$10
	db	$27,$21,$fd,$10,$27,$16,$fd,$10
	db	$27,$09,$fd,$10,$27,$0b,$fd,$0f
	db	$29,$05,$fd,$10,$20,$11,$fd,$10
	db	$20,$21,$fd,$10,$27,$11,$fd,$0a
	db	$20,$11,$fd,$10,$27,$21,$fd,$10
	db	$27,$08,$fd,$10,$29,$0b,$fd,$0f
	db	$22,$06,$fd,$10,$20,$11,$fd,$10
	db	$20,$21,$fd,$10,$27,$0b,$fd,$0f
	db	$27,$0b,$fd,$0d,$27,$06,$fd,$0e
	db	$27,$08,$fd,$10,$27,$0b,$fd,$0e
	db	$27,$09,$fd,$10,$20,$08,$fd,$10
	db	$20,$06,$fd,$10,$20,$08,$fd,$10
	db	$20,$0b,$fd,$10,$20,$11,$fd,$10
	db	$20,$08,$fd,$10,$20,$11,$fd,$10
	db	$20,$0b,$fd,$0f,$20,$05,$fd,$10
	db	$20,$0b,$fd,$10,$20,$17,$fd,$10
	db	$22,$08,$fd,$10,$29,$0b,$fd,$0f
	db	$20,$08,$fd,$10,$20,$0b,$fd,$10
	db	$20,$09,$fd,$10,$20,$0b,$fd,$10
	db	$24,$08,$fd,$10,$22,$11,$fd,$10
	db	$22,$11,$fd,$10,$22,$10,$fd,$10
	db	$20,$0b,$fd,$10,$20,$09,$fd,$10
	db	$20,$0b,$fd,$10,$27,$05,$fd,$10
	db	$20,$11,$fd,$10,$24,$16,$fd,$10
	db	$27,$11,$fd,$10,$20,$0b,$fd,$10
	db	$20,$06,$fd,$10,$20,$10,$fd,$10
	db	$20,$0b,$fd,$0f,$20,$09,$fd,$10
	db	$20,$0b,$fd,$10,$20,$08,$fd,$10
	db	$20,$11,$fd,$10,$20,$0b,$fd,$10
	db	$20,$08,$fd,$10,$2b,$11,$fd,$10
	db	$20,$0b,$fd,$10,$29,$06,$fd,$10
	db	$22,$10,$fd,$10,$22,$11,$fd,$10
	db	$22,$11,$fd,$10,$20,$16,$fd,$10
	db	$20,$0b,$fd,$10,$29,$08,$fd,$10
	db	$20,$0b,$fd,$10,$24,$11,$fd,$0f
	db	$20,$08,$fd,$10,$20,$0b,$fd,$10
	db	$20,$06,$fd,$10,$22,$11,$fd,$10
	db	$20,$10,$fd,$10,$22,$11,$fd,$10
	db	$22,$0b,$fd,$10,$20,$0b,$fd,$10
	db	$20,$09,$fd,$10,$2b,$0b,$fd,$10
	db	$24,$05,$fd,$10,$20,$0b,$fd,$10
	db	$24,$11,$fd,$10,$20,$08,$fd,$10
	db	$24,$0c,$fd,$10,$2b,$05,$fd,$10
	db	$25,$0b,$fd,$10,$25,$06,$fd,$10
	db	$20,$0b,$fd,$10,$25,$16,$fd,$10
	db	$20,$06,$fd,$10,$20,$0b,$fd,$10
	db	$20,$08,$fd,$10,$24,$0b,$fd,$10
	db	$20,$09,$fd,$10,$20,$0b,$fd,$10
	db	$29,$10,$fd,$10,$20,$09,$fd,$10
	db	$29,$0b,$fd,$10,$20,$05,$fd,$10
	db	$22,$11,$fd,$10,$20,$0b,$fd,$10
	db	$20,$11,$fd,$10,$20,$16,$fd,$10
	db	$24,$11,$fd,$10,$27,$05,$fd,$10
	db	$20,$0b,$fd,$10,$24,$17,$fd,$10
	db	$24,$10,$fd,$10,$25,$0b,$fd,$10
	db	$25,$09,$fd,$10,$20,$0b,$fd,$10
	db	$25,$10,$fd,$10,$20,$06,$fd,$10
	db	$29,$11,$fd,$10,$27,$10,$fd,$10
	db	$27,$11,$fd,$10,$27,$0b,$fd,$10
	db	$20,$08,$fd,$10,$20,$0c,$fd,$10
	db	$2b,$08,$fd,$10,$27,$11,$fd,$10
	db	$27,$10,$fd,$10,$25,$0b,$fd,$10
	db	$27,$0b,$fd,$10,$29,$17,$fd,$10
	db	$27,$08,$fd,$10,$29,$0b,$fd,$10
	db	$20,$08,$fd,$10,$20,$0c,$fd,$10
	db	$27,$08,$fd,$10,$29,$0b,$fd,$10
	db	$20,$08,$fd,$10,$20,$09,$fd,$10
	db	$27,$08,$fd,$10,$29,$0b,$fd,$10
	db	$20,$08,$fd,$10,$20,$09,$fd,$10
	db	$20,$08,$fd,$10,$20,$08,$fd,$10
	db	$25,$17,$fd,$10,$25,$08,$fd,$10
	db	$20,$0b,$fd,$10,$22,$06,$fd,$10
	db	$22,$16,$fd,$10,$29,$0b,$fd,$10
	db	$20,$11,$fd,$10,$20,$08,$fd,$10
	db	$29,$0b,$fd,$10,$20,$06,$fd,$10
	db	$24,$0b,$fd,$10,$27,$08,$fd,$10
	db	$20,$0b,$fd,$10,$20,$11,$fd,$0f
	db	$27,$05,$fd,$10,$20,$0c,$fd,$10
	db	$20,$08,$fd,$10,$20,$08,$fd,$10
	db	$27,$0b,$fd,$10,$20,$0b,$fd,$10
	db	$24,$11,$fd,$10,$20,$06,$fd,$10
	db	$20,$0b,$fd,$10,$20,$08,$fd,$10
	db	$20,$0b,$fd,$10,$20,$09,$fd,$10
	db	$29,$0b,$fd,$10,$24,$02,$fd,$10
	db	$22,$11,$fd,$10,$29,$06,$fd,$10
	db	$20,$10,$fd,$10,$22,$11,$fd,$10
	db	$20,$06,$fd,$10,$20,$0b,$fd,$10
	db	$20,$10,$fd,$0f,$24,$09,$fd,$10
	db	$24,$0b,$fd,$10,$20,$05,$fd,$10
	db	$25,$0b,$fd,$10,$20,$09,$fd,$10
	db	$27,$21,$fd,$0f,$22,$06,$fd,$10
	db	$20,$0b,$fd,$10,$20,$08,$fd,$10
	db	$20,$0b,$fd,$10,$27,$09
songdata_00_lp:
	db	$fc,$ff,$ff

songdata_01:
	db	$f9,$08,$fe,$87,$fd,$0a,$fd,$00
	db	$27,$10,$fd,$00,$24,$06,$fd,$00
	db	$29,$0b,$fd,$00,$27,$05,$fd,$00
	db	$27,$11,$fd,$00,$2b,$21,$fd,$00
	db	$20,$22,$fd,$00,$20,$21,$fd,$00
	db	$22,$08,$fd,$00,$24,$0c,$fd,$00
	db	$20,$08,$fd,$00,$2b,$11,$fd,$00
	db	$2b,$0b,$fd,$00,$2b,$16,$fd,$00
	db	$22,$21,$fd,$00,$29,$16,$fd,$00
	db	$20,$09,$fd,$00,$29,$0b,$fd,$00
	db	$27,$05,$fd,$00,$27,$11,$fd,$00
	db	$29,$21,$fd,$00,$20,$11,$fd,$00
	db	$27,$11,$fd,$00,$22,$21,$fd,$00
	db	$20,$08,$fd,$00,$27,$0b,$fd,$00
	db	$24,$06,$fd,$00,$27,$11,$fd,$00
	db	$29,$21,$fd,$00,$22,$0b,$fd,$00
	db	$22,$0b,$fd,$00,$22,$06,$fd,$00
	db	$22,$08,$fd,$00,$22,$0b,$fd,$00
	db	$22,$09,$fd,$00,$2b,$08,$fd,$00
	db	$2b,$06,$fd,$00,$25,$08,$fd,$00
	db	$2b,$0b,$fd,$00,$2b,$11,$fd,$00
	db	$21,$08,$fd,$00,$2b,$11,$fd,$00
	db	$2b,$0b,$fd,$00,$27,$05,$fd,$00
	db	$2b,$0b,$fd,$00,$2b,$17,$fd,$00
	db	$20,$08,$fd,$00,$20,$0b,$fd,$00
	db	$29,$08,$fd,$00,$2b,$0b,$fd,$00
	db	$21,$09,$fd,$00,$24,$0b,$fd,$00
	db	$27,$08,$fd,$00,$25,$11,$fd,$00
	db	$20,$11,$fd,$00,$29,$10,$fd,$00
	db	$22,$0b,$fd,$00,$29,$09,$fd,$00
	db	$2b,$0b,$fd,$00,$2b,$05,$fd,$00
	db	$29,$11,$fd,$00,$27,$16,$fd,$00
	db	$20,$11,$fd,$00,$2b,$0b,$fd,$00
	db	$22,$06,$fd,$00,$27,$10,$fd,$00
	db	$2b,$0b,$fd,$00,$27,$09,$fd,$00
	db	$2b,$0b,$fd,$00,$27,$08,$fd,$00
	db	$22,$11,$fd,$00,$29,$0b,$fd,$00
	db	$29,$08,$fd,$00,$20,$11,$fd,$00
	db	$24,$0b,$fd,$00,$24,$06,$fd,$00
	db	$20,$10,$fd,$00,$20,$11,$fd,$00
	db	$20,$11,$fd,$00,$2b,$16,$fd,$00
	db	$2b,$0b,$fd,$00,$27,$08,$fd,$00
	db	$29,$0b,$fd,$00,$27,$11,$fd,$00
	db	$21,$08,$fd,$00,$27,$0b,$fd,$00
	db	$29,$06,$fd,$00,$20,$11,$fd,$00
	db	$22,$10,$fd,$00,$20,$11,$fd,$00
	db	$20,$0b,$fd,$00,$29,$0b,$fd,$00
	db	$29,$09,$fd,$00,$20,$0b,$fd,$00
	db	$27,$05,$fd,$00,$25,$0b,$fd,$00
	db	$2b,$11,$fd,$00,$29,$08,$fd,$00
	db	$20,$0c,$fd,$00,$20,$05,$fd,$00
	db	$20,$0b,$fd,$00,$24,$06,$fd,$00
	db	$2b,$0b,$fd,$00,$20,$16,$fd,$00
	db	$25,$06,$fd,$00,$25,$0b,$fd,$00
	db	$22,$08,$fd,$00,$2b,$0b,$fd,$00
	db	$29,$09,$fd,$00,$24,$0b,$fd,$00
	db	$2b,$10,$fd,$00,$29,$09,$fd,$00
	db	$20,$0b,$fd,$00,$29,$05,$fd,$00
	db	$29,$11,$fd,$00,$22,$0b,$fd,$00
	db	$22,$11,$fd,$00,$22,$16,$fd,$00
	db	$2b,$11,$fd,$00,$20,$05,$fd,$00
	db	$2b,$0b,$fd,$00,$2b,$17,$fd,$00
	db	$20,$10,$fd,$00,$20,$0b,$fd,$00
	db	$20,$09,$fd,$00,$2b,$0b,$fd,$00
	db	$24,$10,$fd,$00,$29,$06,$fd,$00
	db	$20,$11,$fd,$00,$22,$10,$fd,$00
	db	$22,$11,$fd,$00,$22,$0b,$fd,$00
	db	$29,$08,$fd,$00,$29,$0c,$fd,$00
	db	$27,$08,$fd,$00,$22,$11,$fd,$00
	db	$22,$10,$fd,$00,$24,$0b,$fd,$00
	db	$22,$0b,$fd,$00,$20,$17,$fd,$00
	db	$22,$08,$fd,$00,$20,$0b,$fd,$00
	db	$27,$08,$fd,$00,$2b,$0c,$fd,$00
	db	$22,$08,$fd,$00,$20,$0b,$fd,$00
	db	$22,$08,$fd,$00,$29,$09,$fd,$00
	db	$20,$08,$fd,$00,$20,$0b,$fd,$00
	db	$29,$08,$fd,$00,$22,$09,$fd,$00
	db	$29,$08,$fd,$00,$29,$08,$fd,$00
	db	$20,$17,$fd,$00,$24,$08,$fd,$00
	db	$22,$0b,$fd,$00,$20,$06,$fd,$00
	db	$2b,$16,$fd,$00,$20,$0b,$fd,$00
	db	$25,$11,$fd,$00,$2b,$08,$fd,$00
	db	$20,$0b,$fd,$00,$29,$06,$fd,$00
	db	$27,$0b,$fd,$00,$20,$08,$fd,$00
	db	$27,$0b,$fd,$00,$2b,$11,$fd,$00
	db	$22,$05,$fd,$00,$29,$0c,$fd,$00
	db	$27,$08,$fd,$00,$29,$08,$fd,$00
	db	$22,$0b,$fd,$00,$29,$0b,$fd,$00
	db	$2b,$11,$fd,$00,$22,$06,$fd,$00
	db	$29,$0b,$fd,$00,$27,$08,$fd,$00
	db	$22,$0b,$fd,$00,$24,$09,$fd,$00
	db	$20,$0b,$fd,$00,$29,$02,$fd,$00
	db	$20,$11,$fd,$00,$27,$06,$fd,$00
	db	$2b,$10,$fd,$00,$20,$11,$fd,$00
	db	$2b,$06,$fd,$00,$27,$0b,$fd,$00
	db	$2b,$10,$fd,$00,$2b,$09,$fd,$00
	db	$20,$0b,$fd,$00,$29,$05,$fd,$00
	db	$24,$0b,$fd,$00,$21,$09,$fd,$00
	db	$29,$21,$fd,$00,$27,$06,$fd,$00
	db	$29,$0b,$fd,$00,$24,$08,$fd,$00
	db	$2b,$0b,$fd,$00,$22,$09
songdata_01_lp:
	db	$fc,$ff,$ff

songdata_02:
	db	$fe,$8f,$10,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$17,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$09,$fc,$03,$19,$08
	db	$fc,$03,$17,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$17,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$17,$09
	db	$fc,$03,$19,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$17,$08
	db	$fc,$03,$10,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$19,$08
	db	$fc,$03,$12,$08,$fc,$03,$10,$09
	db	$fc,$03,$10,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$09,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$09
	db	$fc,$03,$12,$08,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$14,$08,$fc,$03,$12,$08
	db	$fc,$03,$12,$09,$fc,$03,$12,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$17,$08
	db	$fc,$03,$10,$08,$fc,$03,$14,$08
	db	$fc,$03,$17,$08,$fc,$03,$10,$09
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$09,$fc,$03,$1b,$08
	db	$fc,$03,$10,$08,$fc,$03,$19,$08
	db	$fc,$03,$12,$08,$fc,$03,$12,$08
	db	$fc,$03,$12,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$19,$09
	db	$fc,$03,$10,$08,$fc,$03,$14,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$12,$08
	db	$fc,$03,$10,$08,$fc,$03,$12,$08
	db	$fc,$03,$12,$09,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$1b,$08
	db	$fc,$03,$14,$08,$fc,$03,$10,$08
	db	$fc,$03,$14,$08,$fc,$03,$10,$08
	db	$fc,$03,$14,$08,$fc,$03,$1b,$09
	db	$fc,$03,$15,$08,$fc,$03,$15,$08
	db	$fc,$03,$10,$08,$fc,$03,$15,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$14,$08
	db	$fc,$03,$10,$09,$fc,$03,$10,$08
	db	$fc,$03,$19,$08,$fc,$03,$10,$08
	db	$fc,$03,$19,$08,$fc,$03,$10,$08
	db	$fc,$03,$12,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$09
	db	$fc,$03,$14,$08,$fc,$03,$17,$08
	db	$fc,$03,$10,$08,$fc,$03,$14,$08
	db	$fc,$03,$14,$08,$fc,$03,$15,$08
	db	$fc,$03,$15,$08,$fc,$03,$10,$08
	db	$fc,$03,$15,$09,$fc,$03,$10,$08
	db	$fc,$03,$19,$08,$fc,$03,$17,$08
	db	$fc,$03,$17,$08,$fc,$03,$17,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$1b,$08,$fc,$03,$17,$09
	db	$fc,$03,$17,$08,$fc,$03,$15,$08
	db	$fc,$03,$17,$08,$fc,$03,$19,$08
	db	$fc,$03,$17,$08,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$17,$09,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$17,$08,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$09
	db	$fc,$03,$15,$08,$fc,$03,$15,$08
	db	$fc,$03,$10,$08,$fc,$03,$12,$08
	db	$fc,$03,$12,$08,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$19,$09,$fc,$03,$10,$08
	db	$fc,$03,$14,$08,$fc,$03,$17,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$17,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$09
	db	$fc,$03,$17,$08,$fc,$03,$10,$08
	db	$fc,$03,$14,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$19,$09,$fc,$03,$14,$08
	db	$fc,$03,$12,$08,$fc,$03,$19,$08
	db	$fc,$03,$10,$08,$fc,$03,$12,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$08,$fc,$03,$14,$09
	db	$fc,$03,$14,$08,$fc,$03,$10,$08
	db	$fc,$03,$15,$08,$fc,$03,$10,$08
	db	$fc,$03,$17,$08,$fc,$03,$12,$08
	db	$fc,$03,$10,$08,$fc,$03,$10,$08
	db	$fc,$03,$10,$09,$fc,$03,$17,$08
	db	$fc,$03
songdata_02_lp:
	db	$fc,$ff,$ff

songdata_03:
	db	$fe,$8f,$fd,$00,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$0f,$00,$0b,$fd,$0f
	db	$00,$0b,$fd,$10,$00,$0c,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0c,$fd,$0f,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$08,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$0f,$00,$0b,$fd,$00
	db	$fc,$0c,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0c,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0c,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0c,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0c,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0c,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0c,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$0f,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0c,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0c,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0c,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0c,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0c,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0c,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0c,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0c,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0c,$fd,$00
	db	$fc,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$0f,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0c,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0c,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$10
	db	$00,$0b,$fd,$00,$fc,$0b,$fd,$00
	db	$fc,$0c,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0b,$fd,$10
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$0f
	db	$00,$0b,$fd,$10,$00,$0b,$fd,$00
	db	$fc,$0b,$fd,$00,$fc,$0c,$fd,$10
	db	$00,$0b
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
