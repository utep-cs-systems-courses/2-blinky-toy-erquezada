#ifndef buzzer_included
#define buzzer_included

// two octave chromatic scale from c3 to c5
#define C3  7645
#define C3Sharp 7216
#define D3Flat 7216
#define D3  6809
#define D3Sharp 6428
#define E3Flat 6428
#define E3  6061
#define F3  5727
#define F3Sharp 5405
#define G3Flat 5405
#define G3  5102
#define G3Sharp 4818
#define A3Flat 4818
#define A3  4545
#define A3Sharp 4285
#define B3Flat 4285
#define B3  4049
#define C4  3822
#define C4Sharp 3608
#define D4Flat 3608
#define D4  3405
#define D4Sharp 3214
#define E4Flat 3214
#define E4  3033
#define F4  2863
#define F4Sharp 2702
#define G4Flat 2702
#define G4  2551
#define G4Sharp 2408
#define A4Flat 2408
#define A4  2272
#define A4Sharp 2142
#define B4Flat 2142
#define B4  2028
#define C5  1911

typedef struct {
  short key;
  unsigned short duration;
  unsigned short delay;
} Note;

void buzzer_init();
void buzzer_set_period(short cycles);

#endif
