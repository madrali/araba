# STM32F401RE IHM15A1 ESP32_S2_SOALA

## ST-Link ile Bağlı Pinler
| Pin Adı | STM32 Pin | Açıklama              |
|---------|-----------|-----------------------|
| CN3_13  | PA13      | SWDIO                 |
| CN3_15  | PA14      | SWCLK                 |
| CN3_1   | NRST      | Reset                 |

## IHM15A1 ile Bağlı Pinler

### Motor A

| Pin Adı | STM32 Pin | Açıklama              |
|---------|-----------|-----------------------|
| CN9_6   | PB4       | Motor A PWM           |
| CN5_4   | PA7       | Motor A ENABLE/FAULT  |
| CN5_10  | PB8       | Motor A AKIM LIMITI   |
| CN9_4   | PB3       | Motor A YON           |
|---------|-----------|-----------------------|
### Motor B
|---------|-----------|-----------------------|
| CN5_9   | PB9       | Motor B AKIM LIMITI   |
| CN9_3   | PA10      | Motor B ENABLE/FAULT  |
| CN9_5   | PB5       | Motor B PWM           |
| CN9_8   | PA8       | Motor B YON           |


## ESP32 ASENKRON UART Pinleri
| Pin Adı | STM32 Pin | Kullanım Amacı      |
|---------|-----------|---------------------|
| PA2     | PA2       | UART TX             |
| PA3     | PA3       | UART RX             |
