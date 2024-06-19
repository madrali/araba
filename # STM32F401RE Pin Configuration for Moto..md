# STM32F401RE Pin Configuration for Motor Control and UART Communication

## Overview

This document outlines the pin configuration for the STM32F401RE Nucleo board for controlling two motors using the IHM15A1 motor driver and UART communication with an ESP32 using USART6.

## Pin Configuration Table

| Function                  | IHM15A1 Pin | STM32 Pin  | Timer   | Channel       | Description                      |
|---------------------------|-------------|------------|---------|---------------|----------------------------------|
| **USART6 Communication**  |             |            |         |               |                                  |
| USART6 TX (ESP32)         | -           | PC6        | -       | -             | USART6 Transmit                  |
| USART6 RX (ESP32)         | -           | PC7        | -       | -             | USART6 Receive                   |
| **Motor A (Right Motor)** |             |            |         |               |                                  |
| PWM Signal (PWM_A)        | D5          | PA8        | TIM1    | Channel 1     | PWM signal for Motor A           |
| Enable Signal (EN_A)      | D9          | PA8        | -       | -             | Enable signal for Motor A        |
| Direction Signal (DIR_A)  | D2          | PA0        | -       | -             | Direction signal for Motor A     |
| Brake Signal (BRK_A)      | D1          | PB1        | -       | -             | Brake signal for Motor A         |
| **Motor B (Left Motor)**  |             |            |         |               |                                  |
| PWM Signal (PWM_B)        | D6          | PA1        | TIM5    | Channel 2     | PWM signal for Motor B           |
| Enable Signal (EN_B)      | D10         | PA9        | -       | -             | Enable signal for Motor B        |
| Direction Signal (DIR_B)  | D4          | PA10       | -       | -             | Direction signal for Motor B     |
| Brake Signal (BRK_B)      | D3          | PB2        | -       | -             | Brake signal for Motor B         |
| **Fault Signals**         |             |            |         |               |                                  |
| Fault Signal A (FAULT_A)  | D11         | PA10       | -       | -             | Fault signal for Motor A         |
| Fault Signal B (FAULT_B)  | D12         | PA11       | -       | -             | Fault signal for Motor B         |
| **Additional Peripherals**|             |            |         |               |                                  |
| Fault Indicator LED       | -           | PB0        | -       | -             | Indicator LED for faults         |
| **Current Sensing**       |             |            |         |               |                                  |
| Current Sense A           | A1          | PA4 (ADC1_IN4) | -   | -             | Current feedback for Motor A     |
| Current Sense B           | A2          | PA5 (ADC1_IN5) | -   | -             | Current feedback for Motor B     |

## Function Explanations

### USART6 Communication

**USART6** is used for UART communication with the ESP32.

- **TX (Transmit)**: PC6
- **RX (Receive)**: PC7

### Motor A (Right Motor)

Controlled using **TIM1**:

- **PWM Signal (PWM_A)**: PA8 (TIM1 Channel 1)
- **Enable Signal (EN_A)**: PA8
- **Direction Signal (DIR_A)**: PA0

### Motor B (Left Motor)

Controlled using **TIM5**:

- **PWM Signal (PWM_B)**: PA1 (TIM5 Channel 2)
- **Enable Signal (EN_B)**: PA9
- **Direction Signal (DIR_B)**: PA10

### Brake and Fault Signals

- **Brake Signal (BRK_A)**: PB1 for Motor A.
- **Brake Signal (BRK_B)**: PB2 for Motor B.
- **Fault Signal A (FAULT_A)**: PA10
- **Fault Signal B (FAULT_B)**: PA11

### Current Sensing

- **Current Sense A**: PA4 (ADC1_IN4) for Motor A.
- **Current Sense B**: PA5 (ADC1_IN5) for Motor B.
