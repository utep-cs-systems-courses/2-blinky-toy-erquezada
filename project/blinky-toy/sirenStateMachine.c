#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"
#include "led.h"

static void update_blink()
{
  static unsigned char count = 0;
  
  if (count < 3) {
    toggle_green(1);
    toggle_red(0);
  } else if (count < 6) {
    toggle_green(0);
    toggle_red(1);
  } else {
    toggle_green(0);
    toggle_red(0);
  }
  
  count++;
  if (count >= 9) {
    count = 0;
  }
}
static void once_per_second()
{
  update_sound();
  update_blink();
}

void advance_siren()
{
  update_second();
}

void reset_siren()
{
  buzzer_set_period(0);
  toggle_green(0);
  toggle_red(0);
}
