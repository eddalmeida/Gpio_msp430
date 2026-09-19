/*
 * board.h
 *
 *  Created on: 28 de ago de 2026
 *      Author: Edson Almeida
 *
 *  Descrição do software:
 *  Código que pisca LED em 2 estados de forma alternada a cada clique no botão:
 * 
 *  Fluxo de Execução:
 *  1. Aguarda o botão em P2.3 ser pressionado.
 *  2. Aguarda 1000 ciclos (tempo de debounce do botão).
 *  3. Pisca o LED em P1.0 duas vezes.
 *  4. Aguarda novamente o botão ser pressionado.
 *  5. Aguarda 1000 ciclos (tempo de debounce do botão).
 *  6. Pisca o LED em P1.0 quatro vezes.
 *  7. Volta ao item 1 (loop infinito).
 *
 *
 *         ---------Mapeamento de Hardware---------
 *              
 *                 MSP430FR2355
 *              -----------------
 *          /|\|                 |
 *           | |             XIN |-
 *           --|RST              |
 *             |            XOUT |-
 *             |                 |
 *             |             P2.3|<----- Botão
 *             |                 | 
 *             |             P1.0|-----[LED]
 *             |             P1.1|
 *             |             P1.2|
 *             |             P1.3|
 */

#ifndef BOARD_H_
#define BOARD_H_

//-------------LED----------------------

#define LED_PORT_OUT P1OUT
#define LED_PORT_DIR P1DIR
#define LED_PIN      BIT0

//--------------------------------------


//-------------BOTAO----------------------

#define BOTAO_PORT_DIR P2DIR
#define BOTAO_PORT_IN  P2IN
#define BOTAO_PIN      BIT3
#define BOTAO_PORT_OUT P2OUT
#define BOTAO_PORT_REN P2REN

//--------------------------------------


//----DELAY (Calculados para 24 MHz)----

#define DELAY_DEBOUCE  1000    
#define DELAY_250MS    6000000  // 250ms 
#define DELAY_125MS    3000000  // 125ms 

//--------------------------------------

#endif /* BOARD_H_ */