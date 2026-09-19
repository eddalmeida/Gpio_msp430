# Atividade 2 - GPIO MSP430FR2355

Código desenvolvido para a disciplina de Microcontroladores no IFSC, utilizando o microcontrolador MSP430FR2355.

## 📌 Descrição do Projeto
O programa alterna o comportamento de um LED (P1.0) através do acionamento de um botão (P2.3):
- **1º Clique no botão:** Pisca o LED 2 vezes.
- **2º Clique no botão:** Pisca o LED 4 vezes (ou 5 vezes conforme a versão).
- **Tratamento de Debounce:** Filtro de ruído mecânico implementado via software.

## 📂 Arquivos do Projeto
- `main.c` / `botao.c` / `led.c`: Implementação das funções de controle.
- `board.h` / `macros.h`: Mapeamento de hardware e definições de pinos.
- `clock_config.c` / `clock_config.h`: Configurações de clock do microcontrolador.

## 🛠️ Requisitos de Hardware
- Microcontrolador **MSP430FR2355** (LaunchPad).
- **LED1:** Conectado ao pino `P1.0`.
- **Botão S1/S2:** Conectado ao pino `P2.3` (com resistor de Pull-up habilitado).
