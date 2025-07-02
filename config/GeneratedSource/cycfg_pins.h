/*******************************************************************************
 * File Name: cycfg_pins.h
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.50.0
 * device-db 4.26.0.8600
 * mtb-pdl-cat1 3.3.1.23506
 *
 *******************************************************************************
 * Copyright 2025 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define WCO_IN_ENABLED 1U
#define WCO_IN_PORT GPIO_PRT0
#define WCO_IN_PORT_NUM 0U
#define WCO_IN_PIN 0U
#define WCO_IN_NUM 0U
#define WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define WCO_IN_HAL_PORT_PIN P0_0
#define WCO_IN P0_0
#define WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define WCO_OUT_ENABLED 1U
#define WCO_OUT_PORT GPIO_PRT0
#define WCO_OUT_PORT_NUM 0U
#define WCO_OUT_PIN 1U
#define WCO_OUT_NUM 1U
#define WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define WCO_OUT_HAL_PORT_PIN P0_1
#define WCO_OUT P0_1
#define WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#define ARDU_RX (P0_2)
#define CYBSP_D6 ARDU_RX
#define ARDU_TX (P0_3)
#define CYBSP_D7 ARDU_TX
#define ARDU_IO7 (P0_4)
#define CYBSP_D8 ARDU_IO7
#define ARDU_IO8 (P0_5)
#define CYBSP_D9 ARDU_IO8
#define ARDU_ADC1 (P10_0)
#define CYBSP_A0 ARDU_ADC1
#define ARDU_ADC2 (P10_1)
#define CYBSP_A1 ARDU_ADC2
#define ARDU_ADC3 (P10_2)
#define CYBSP_A2 ARDU_ADC3
#define ARDU_ADC4 (P10_3)
#define CYBSP_A3 ARDU_ADC4
#define ARDU_ADC5 (P10_4)
#define CYBSP_A4 ARDU_ADC5
#define CYBSP_POT ARDU_ADC5
#define ARDU_ADC6 (P10_5)
#define CYBSP_A5 ARDU_ADC6
#define ARDU_IO5 (P10_6)
#define CYBSP_A6 ARDU_IO5
#define ARDU_IO6 (P11_0)
#define FLASH_SSEL (P11_1)
#define CYBSP_QSPI_SS FLASH_SSEL
#define CYBSP_QSPI_FLASH_SSEL FLASH_SSEL
#define PSRAM_SSEL (P11_2)
#define QSPI_IO3 (P11_3)
#define CYBSP_QSPI_D3 QSPI_IO3
#define QSPI_IO2 (P11_4)
#define CYBSP_QSPI_D2 QSPI_IO2
#define QSPI_IO1 (P11_5)
#define CYBSP_QSPI_D1 QSPI_IO1
#define QSPI_IO0 (P11_6)
#define CYBSP_QSPI_D0 QSPI_IO0
#define QSPI_CLK (P11_7)
#define CYBSP_QSPI_SCK QSPI_CLK
#define ARDU_SCL (P12_0)
#define CYBSP_I2C_SCL ARDU_SCL
#define ARDU_SDA (P12_1)
#define CYBSP_I2C_SDA ARDU_SDA
#define LOAD_EN (P12_2)
#define DIV_EN (P12_3)
#define CHR_DIS (P12_4)
#define BOOST_EN (P12_5)
#endif /* defined (CY_USING_HAL) */

#define ECO_IN_ENABLED 1U
#define ECO_IN_PORT GPIO_PRT12
#define ECO_IN_PORT_NUM 12U
#define ECO_IN_PIN 6U
#define ECO_IN_NUM 6U
#define ECO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_6_HSIOM
    #define ioss_0_port_12_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_IN_HSIOM ioss_0_port_12_pin_6_HSIOM
#define ECO_IN_IRQ ioss_interrupts_gpio_12_IRQn

#if defined (CY_USING_HAL)
#define ECO_IN_HAL_PORT_PIN P12_6
#define ECO_IN P12_6
#define ECO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define ECO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define ECO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define ECO_OUT_ENABLED 1U
#define ECO_OUT_PORT GPIO_PRT12
#define ECO_OUT_PORT_NUM 12U
#define ECO_OUT_PIN 7U
#define ECO_OUT_NUM 7U
#define ECO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_12_pin_7_HSIOM
    #define ioss_0_port_12_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_OUT_HSIOM ioss_0_port_12_pin_7_HSIOM
#define ECO_OUT_IRQ ioss_interrupts_gpio_12_IRQn

#if defined (CY_USING_HAL)
#define ECO_OUT_HAL_PORT_PIN P12_7
#define ECO_OUT P12_7
#define ECO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define ECO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define ECO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#define USER_BTN (P13_0)
#define CYBSP_USER_BTN USER_BTN
#define CYBSP_USER_BTN_DRIVE USER_BTN
#define LED1 (P13_1)
#define CYBSP_USER_LED1 LED1
#define LED2 (P13_6)
#define CYBSP_USER_LED LED2
#define CYBSP_USER_LED2 LED2
#define LED3 (P13_7)
#define CYBSP_USER_LED3 LED3
#define CYBSP_D14 (P1_0)
#define CYBSP_D16 (P1_1)
#define CYBSP_D0 (P5_0)
#define CYBSP_D1 (P5_1)
#define CYBSP_D2 (P5_2)
#define CYBSP_D3 (P5_3)
#define CYBSP_D4 (P5_4)
#define CYBSP_D5 (P5_5)
#define KITPROG_RX (P6_0)
#define CYBSP_DEBUG_UART_RX KITPROG_RX
#define KITPROG_TX (P6_1)
#define CYBSP_DEBUG_UART_TX KITPROG_TX
#endif /* defined (CY_USING_HAL) */

#define TDO_SWO_ENABLED 1U
#define CYBSP_SWO_ENABLED TDO_SWO_ENABLED
#define TDO_SWO_PORT GPIO_PRT6
#define CYBSP_SWO_PORT TDO_SWO_PORT
#define TDO_SWO_PORT_NUM 6U
#define CYBSP_SWO_PORT_NUM TDO_SWO_PORT_NUM
#define TDO_SWO_PIN 4U
#define CYBSP_SWO_PIN TDO_SWO_PIN
#define TDO_SWO_NUM 4U
#define CYBSP_SWO_NUM TDO_SWO_NUM
#define TDO_SWO_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_SWO_DRIVEMODE TDO_SWO_DRIVEMODE
#define TDO_SWO_INIT_DRIVESTATE 1
#define CYBSP_SWO_INIT_DRIVESTATE TDO_SWO_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_4_HSIOM
    #define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define TDO_SWO_HSIOM ioss_0_port_6_pin_4_HSIOM
#define CYBSP_SWO_HSIOM TDO_SWO_HSIOM
#define TDO_SWO_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWO_IRQ TDO_SWO_IRQ

#if defined (CY_USING_HAL)
#define TDO_SWO_HAL_PORT_PIN P6_4
#define CYBSP_SWO_HAL_PORT_PIN TDO_SWO_HAL_PORT_PIN
#define TDO_SWO P6_4
#define CYBSP_SWO TDO_SWO
#define TDO_SWO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWO_HAL_IRQ TDO_SWO_HAL_IRQ
#define TDO_SWO_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define CYBSP_SWO_HAL_DIR TDO_SWO_HAL_DIR
#define TDO_SWO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_SWO_HAL_DRIVEMODE TDO_SWO_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define TDI_ENABLED 1U
#define TDI_PORT GPIO_PRT6
#define TDI_PORT_NUM 6U
#define TDI_PIN 5U
#define TDI_NUM 5U
#define TDI_DRIVEMODE CY_GPIO_DM_ANALOG
#define TDI_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_5_HSIOM
    #define ioss_0_port_6_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define TDI_HSIOM ioss_0_port_6_pin_5_HSIOM
#define TDI_IRQ ioss_interrupts_gpio_6_IRQn

#if defined (CY_USING_HAL)
#define TDI_HAL_PORT_PIN P6_5
#define TDI P6_5
#define TDI_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define TDI_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define TDI_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define TMS_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_ENABLED TMS_SWDIO_ENABLED
#define TMS_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT TMS_SWDIO_PORT
#define TMS_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PORT_NUM TMS_SWDIO_PORT_NUM
#define TMS_SWDIO_PIN 6U
#define CYBSP_SWDIO_PIN TMS_SWDIO_PIN
#define TMS_SWDIO_NUM 6U
#define CYBSP_SWDIO_NUM TMS_SWDIO_NUM
#define TMS_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_DRIVEMODE TMS_SWDIO_DRIVEMODE
#define TMS_SWDIO_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE TMS_SWDIO_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define TMS_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_HSIOM TMS_SWDIO_HSIOM
#define TMS_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDIO_IRQ TMS_SWDIO_IRQ

#if defined (CY_USING_HAL)
#define TMS_SWDIO_HAL_PORT_PIN P6_6
#define CYBSP_SWDIO_HAL_PORT_PIN TMS_SWDIO_HAL_PORT_PIN
#define TMS_SWDIO P6_6
#define CYBSP_SWDIO TMS_SWDIO
#define TMS_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWDIO_HAL_IRQ TMS_SWDIO_HAL_IRQ
#define TMS_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWDIO_HAL_DIR TMS_SWDIO_HAL_DIR
#define TMS_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#define CYBSP_SWDIO_HAL_DRIVEMODE TMS_SWDIO_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define TCLK_SWCLK_ENABLED 1U
#define CYBSP_SWCLK_ENABLED TCLK_SWCLK_ENABLED
#define TCLK_SWCLK_PORT GPIO_PRT6
#define CYBSP_SWCLK_PORT TCLK_SWCLK_PORT
#define TCLK_SWCLK_PORT_NUM 6U
#define CYBSP_SWCLK_PORT_NUM TCLK_SWCLK_PORT_NUM
#define TCLK_SWCLK_PIN 7U
#define CYBSP_SWCLK_PIN TCLK_SWCLK_PIN
#define TCLK_SWCLK_NUM 7U
#define CYBSP_SWCLK_NUM TCLK_SWCLK_NUM
#define TCLK_SWCLK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWCLK_DRIVEMODE TCLK_SWCLK_DRIVEMODE
#define TCLK_SWCLK_INIT_DRIVESTATE 1
#define CYBSP_SWCLK_INIT_DRIVESTATE TCLK_SWCLK_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define TCLK_SWCLK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWCLK_HSIOM TCLK_SWCLK_HSIOM
#define TCLK_SWCLK_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWCLK_IRQ TCLK_SWCLK_IRQ

#if defined (CY_USING_HAL)
#define TCLK_SWCLK_HAL_PORT_PIN P6_7
#define CYBSP_SWCLK_HAL_PORT_PIN TCLK_SWCLK_HAL_PORT_PIN
#define TCLK_SWCLK P6_7
#define CYBSP_SWCLK TCLK_SWCLK
#define TCLK_SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWCLK_HAL_IRQ TCLK_SWCLK_HAL_IRQ
#define TCLK_SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWCLK_HAL_DIR TCLK_SWCLK_HAL_DIR
#define TCLK_SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
#define CYBSP_SWCLK_HAL_DRIVEMODE TCLK_SWCLK_HAL_DRIVEMODE
#define CS1 (P7_0)
#define CINTA (P7_1)
#define CYBSP_CINA CINTA
#define CYBSP_CMOD CINTA
#define CINTB (P7_2)
#define CYBSP_CINB CINTB
#define CS2 (P7_3)
#define CS3 (P7_4)
#define CS_TX (P7_5)
#define ARDU_MOSI (P8_0)
#define CYBSP_SPI_MOSI ARDU_MOSI
#define CYBSP_D11 ARDU_MOSI
#define ARDU_MISO (P8_1)
#define CYBSP_SPI_MISO ARDU_MISO
#define CYBSP_D12 ARDU_MISO
#define ARDU_CLK (P8_2)
#define CYBSP_SPI_CLK ARDU_CLK
#define CYBSP_D13 ARDU_CLK
#define ARDU_CS (P8_3)
#define CYBSP_SPI_CS ARDU_CS
#define CYBSP_D10 ARDU_CS
#define ARDU_IO1 (P8_4)
#define ARDU_IO2 (P8_5)
#define ARDU_IO3 (P8_6)
#define ARDU_IO4 (P8_7)
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t WCO_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t WCO_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t WCO_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t ECO_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t ECO_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t ECO_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t ECO_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TDO_SWO_config;

#define CYBSP_SWO_config TDO_SWO_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TDO_SWO_obj;
#define CYBSP_SWO_obj TDO_SWO_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TDI_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TDI_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TMS_SWDIO_config;

#define CYBSP_SWDIO_config TMS_SWDIO_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TMS_SWDIO_obj;
#define CYBSP_SWDIO_obj TMS_SWDIO_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t TCLK_SWCLK_config;

#define CYBSP_SWCLK_config TCLK_SWCLK_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t TCLK_SWCLK_obj;
#define CYBSP_SWCLK_obj TCLK_SWCLK_obj
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PINS_H */
