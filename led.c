#include <msp430.h>
#include <stdint.h>
#include "board.h"
#include "macros.h"
#include "led.h"

void led_init()
{
    SET_BIT(LED_PORT_DIR, LED_PIN);
    CLR_BIT(LED_PORT_OUT, LED_PIN);
}

void led_blink(uint8_t n)
{
    for(uint8_t i = 0; i < (n * 2); i++)
    {
        CPL_BIT(LED_PORT_OUT, LED_PIN);
        __delay_cycles(DELAY_125MS);
    }
}

