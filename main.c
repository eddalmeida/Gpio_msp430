#include <msp430.h>
#include <stdint.h>
#include "clock_config.h"
#include "led.h"
#include "botao.h"

enum estado {
    ESTADO_IDLE,
    BLINK_2,
    BLINK_4
};

void system_init(void);

void main(void)
{   
    system_init();
    enum estado estado_atual = ESTADO_IDLE;
    uint8_t controle = 0;

    while(1)
    {
       switch (estado_atual)
       {
           case ESTADO_IDLE:    
               if(ler_botao())
               {
                   controle++;
                   if(controle > 2)
                   {
                       controle = 1;
                   }
                   estado_atual = (enum estado)controle;
               }
               break;

           case BLINK_2:
               led_blink(2);
               estado_atual = ESTADO_IDLE;
               break;

           case BLINK_4:
               led_blink(4);              
               estado_atual = ESTADO_IDLE;
               break;

           default:
               estado_atual = ESTADO_IDLE;
               controle = 0;
               break;
       }
    }
}

void system_init(void)
{
    WDTCTL = WDTPW | WDTHOLD;
    PM5CTL0 &= ~LOCKLPM5;
    
	init_clock_system();
    led_init();
    botao_init();
}