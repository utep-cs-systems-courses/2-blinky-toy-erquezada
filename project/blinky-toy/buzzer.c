#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

void buzzer_init() {
  timerAUpmode(); // Used to drive the speaker

  // Configure pin P2.6 to be used as output for the buzzer
  P2SEL &= ~BIT7;
  P2SEL2 &= ~(BIT6 | BIT7);
  P2DIR |= BIT6;
}

void buzzer_set_period(short cycles) {
  // Set the period of the buzzer
  CCR0 = cycles;
  CCR1 = cycles >> 1; // One half cycle
}
