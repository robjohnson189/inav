/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "EX7P"

#define USBD_PRODUCT_STRING     "EXF722DUAL"

#define LED0                    PC4

#define BEEPER                  PC15
#define BEEPER_INVERTED

// *************** SPI1 Gyro & ACC **********************
#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS ///IDKKKKKK

#define USE_SPI
#define USE_SPI_DEVICE_1 // 2 x MPU
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_DUAL_GYRO

#define USE_IMU_MPU6500
#define IMU_0_ALIGN             CW0_DEG
#define IMU_1_ALIGN             CW90_DEG

#define MPU6500_0_CS_PIN        PA15
#define MPU6500_0_SPI_BUS       BUS_SPI1
#define MPU6500_0_EXTI_PIN      PA8

#define MPU6500_1_CS_PIN        PC3
#define MPU6500_1_SPI_BUS       BUS_SPI1
#define MPU6500_1_EXTI_PIN      PB2

#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL
// *************** I2C/Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_BMP280

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C2
#define USE_MAG_AK8975
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define TEMPERATURE_I2C_BUS     BUS_I2C2

#define PITOT_I2C_BUS           BUS_I2C2

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C2

#define PCA9685_I2C_BUS         BUS_I2C2
// *************** OSD *****************************
#define USE_SPI_DEVICE_2 // MAX7456
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PB12
// *************** FLASH **************************
#define USE_SPI_DEVICE_3 // FLASH
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define M25P16_SPI_BUS          BUS_SPI3
#define M25P16_CS_PIN           PB9

#define USE_FLASHFS
#define USE_FLASH_M25P16
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
// *************** UART *****************************
#define USE_VCP
#define VBUS_SENSING_PIN        PC5
#define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

// PB10 and PB11 reserved for I2C
//#define USE_UART3
//#define UART3_TX_PIN            PB10
//#define UART3_RX_PIN            PB11

#define USE_UART4
#define UART4_TX_PIN            PC10
#define UART4_RX_PIN            PC11

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define SERIAL_PORT_COUNT       5
// *************** PINIO ***************************
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN              PC13 // activate/deactivate Bluetooth When disarmed/armed using PINIO_BOX
#define PINIO2_PIN              PC14 // 2xCamera switcher
#define PINIO3_PIN              PB8  // VTX power switcher

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE            ADC3
#define ADC1_DMA_STREAM         DMA2_Stream0

#define ADC_CHANNEL_1_PIN           PC2
#define ADC_CHANNEL_2_PIN           PC1
#define ADC_CHANNEL_3_PIN           PC0

#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_1
#define VBAT_ADC_CHANNEL            ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3
// *************** OTHERS *****************************
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_UART           SERIAL_PORT_USART2

#define DEFAULT_FEATURES        (FEATURE_TRANSPONDER | FEATURE_RSSI_ADC | FEATURE_TELEMETRY | FEATURE_OSD | FEATURE_LED_STRIP)

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))


#define MAX_PWM_OUTPUT_PORTS        8

#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIALSHOT
#define USE_TRANSPONDER
#define USE_ESCSERIAL
