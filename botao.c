#include <msp430.h>
#include "macros.h"
#include "board.h"
#include "botao.h"


void botao_init()
{
    CLR_BIT(BOTAO_PORT_DIR, BOTAO_PIN);   
    SET_BIT(BOTAO_PORT_REN, BOTAO_PIN);   
    SET_BIT(BOTAO_PORT_OUT, BOTAO_PIN);  
}

bool ler_botao(void)
{
    if (!(TST_BIT(BOTAO_PORT_IN, BOTAO_PIN)))
    {
        __delay_cycles(DELAY_DEBOUCE);
        if (!(TST_BIT(BOTAO_PORT_IN, BOTAO_PIN)))
        {
            while (!(TST_BIT(BOTAO_PORT_IN, BOTAO_PIN)));           //So retorna true quando usuario soltar o botão
            return true;
        }
    }
    return false;
}
