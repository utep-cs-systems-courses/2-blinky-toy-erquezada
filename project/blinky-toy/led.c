#include <msp430.h>
#include "led.h"

void led_init()
{
  P1DIR |= LEDS;	/* bits attached to leds are output */
  P1OUT &= ~LEDS;	/* leds initially off */
}

void toggle_green(unsigned char flag)
{
  P1OUT = (P1OUT & ~LED_GREEN) | (flag ? LED_GREEN : 0);
}

void toggle_red(unsigned char flag)
{
  P1OUT = (P1OUT & ~LED_RED) | (flag ? LED_RED : 0);
}
