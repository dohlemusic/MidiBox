/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MIDI_IN5_Pin GPIO_PIN_11
#define MIDI_IN5_GPIO_Port GPIOC
#define BTN_IN6_Pin GPIO_PIN_12
#define BTN_IN6_GPIO_Port GPIOC
#define WS2812B_Pin GPIO_PIN_1
#define WS2812B_GPIO_Port GPIOC
#define BTN_OUT6_Pin GPIO_PIN_3
#define BTN_OUT6_GPIO_Port GPIOC
#define MIDI_OUT6_Pin GPIO_PIN_0
#define MIDI_OUT6_GPIO_Port GPIOA
#define MIDI_IN6_Pin GPIO_PIN_1
#define MIDI_IN6_GPIO_Port GPIOA
#define MIDI_OUT5_Pin GPIO_PIN_2
#define MIDI_OUT5_GPIO_Port GPIOA
#define BTN_OUT5_Pin GPIO_PIN_3
#define BTN_OUT5_GPIO_Port GPIOA
#define MIDI_OUT4_Pin GPIO_PIN_4
#define MIDI_OUT4_GPIO_Port GPIOA
#define DISP_BRI_Pin GPIO_PIN_5
#define DISP_BRI_GPIO_Port GPIOA
#define BTN_OUT4_Pin GPIO_PIN_6
#define BTN_OUT4_GPIO_Port GPIOA
#define MIDI_OUT3_Pin GPIO_PIN_4
#define MIDI_OUT3_GPIO_Port GPIOC
#define BTN_OUT3_Pin GPIO_PIN_5
#define BTN_OUT3_GPIO_Port GPIOC
#define MIDI_OUT2_Pin GPIO_PIN_0
#define MIDI_OUT2_GPIO_Port GPIOB
#define BTN_OUT2_Pin GPIO_PIN_1
#define BTN_OUT2_GPIO_Port GPIOB
#define MIDI_OUT1_Pin GPIO_PIN_10
#define MIDI_OUT1_GPIO_Port GPIOB
#define BTN_OUT1_Pin GPIO_PIN_11
#define BTN_OUT1_GPIO_Port GPIOB
#define DISP_SCK_Pin GPIO_PIN_13
#define DISP_SCK_GPIO_Port GPIOB
#define DISP_MOSI_Pin GPIO_PIN_15
#define DISP_MOSI_GPIO_Port GPIOB
#define DISP_A0_Pin GPIO_PIN_8
#define DISP_A0_GPIO_Port GPIOA
#define DISP_RST_Pin GPIO_PIN_6
#define DISP_RST_GPIO_Port GPIOC
#define DISP_CS_Pin GPIO_PIN_7
#define DISP_CS_GPIO_Port GPIOC
#define ENC_CH1_Pin GPIO_PIN_8
#define ENC_CH1_GPIO_Port GPIOC
#define ENC_CH2_Pin GPIO_PIN_9
#define ENC_CH2_GPIO_Port GPIOC
#define ENC_BTN_Pin GPIO_PIN_0
#define ENC_BTN_GPIO_Port GPIOD
#define BTN_IN1_Pin GPIO_PIN_1
#define BTN_IN1_GPIO_Port GPIOD
#define MIDI_IN1_Pin GPIO_PIN_2
#define MIDI_IN1_GPIO_Port GPIOD
#define BTN_IN2_Pin GPIO_PIN_5
#define BTN_IN2_GPIO_Port GPIOD
#define MIDI_IN2_Pin GPIO_PIN_6
#define MIDI_IN2_GPIO_Port GPIOD
#define BTN_IN3_Pin GPIO_PIN_6
#define BTN_IN3_GPIO_Port GPIOB
#define MIDI_IN3_Pin GPIO_PIN_7
#define MIDI_IN3_GPIO_Port GPIOB
#define BTN_IN4_Pin GPIO_PIN_8
#define BTN_IN4_GPIO_Port GPIOB
#define MIDI_IN4_Pin GPIO_PIN_9
#define MIDI_IN4_GPIO_Port GPIOB
#define BTN_IN5_Pin GPIO_PIN_10
#define BTN_IN5_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
