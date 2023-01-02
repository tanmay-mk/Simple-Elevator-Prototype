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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GND_UP_Pin GPIO_PIN_0
#define GND_UP_GPIO_Port GPIOC
#define GND_UP_EXTI_IRQn EXTI0_IRQn
#define FIRST_UP_Pin GPIO_PIN_1
#define FIRST_UP_GPIO_Port GPIOC
#define FIRST_UP_EXTI_IRQn EXTI1_IRQn
#define FIRST_DOWN_Pin GPIO_PIN_2
#define FIRST_DOWN_GPIO_Port GPIOC
#define FIRST_DOWN_EXTI_IRQn EXTI2_IRQn
#define SECOND_UP_Pin GPIO_PIN_3
#define SECOND_UP_GPIO_Port GPIOC
#define SECOND_UP_EXTI_IRQn EXTI3_IRQn
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SECOND_DOWN_Pin GPIO_PIN_4
#define SECOND_DOWN_GPIO_Port GPIOA
#define SECOND_DOWN_EXTI_IRQn EXTI4_IRQn
#define THIRD_UP_Pin GPIO_PIN_5
#define THIRD_UP_GPIO_Port GPIOA
#define THIRD_UP_EXTI_IRQn EXTI9_5_IRQn
#define THIRD_DOWN_Pin GPIO_PIN_6
#define THIRD_DOWN_GPIO_Port GPIOA
#define THIRD_DOWN_EXTI_IRQn EXTI9_5_IRQn
#define ELV_GND_Pin GPIO_PIN_7
#define ELV_GND_GPIO_Port GPIOA
#define ELV_GND_EXTI_IRQn EXTI9_5_IRQn
#define FAN_Pin GPIO_PIN_0
#define FAN_GPIO_Port GPIOB
#define LIGHT_Pin GPIO_PIN_1
#define LIGHT_GPIO_Port GPIOB
#define ELV_FIRST_Pin GPIO_PIN_8
#define ELV_FIRST_GPIO_Port GPIOC
#define ELV_FIRST_EXTI_IRQn EXTI9_5_IRQn
#define ELV_SECOND_Pin GPIO_PIN_9
#define ELV_SECOND_GPIO_Port GPIOC
#define ELV_SECOND_EXTI_IRQn EXTI9_5_IRQn
#define ELV_THIRD_Pin GPIO_PIN_10
#define ELV_THIRD_GPIO_Port GPIOA
#define ELV_THIRD_EXTI_IRQn EXTI15_10_IRQn
#define ELV_OPEN_Pin GPIO_PIN_11
#define ELV_OPEN_GPIO_Port GPIOA
#define ELV_OPEN_EXTI_IRQn EXTI15_10_IRQn
#define ELV_CLOSE_Pin GPIO_PIN_12
#define ELV_CLOSE_GPIO_Port GPIOA
#define ELV_CLOSE_EXTI_IRQn EXTI15_10_IRQn
#define ELV_LIGHT_Pin GPIO_PIN_13
#define ELV_LIGHT_GPIO_Port GPIOA
#define ELV_LIGHT_EXTI_IRQn EXTI15_10_IRQn
#define ELV_FAN_Pin GPIO_PIN_14
#define ELV_FAN_GPIO_Port GPIOA
#define ELV_FAN_EXTI_IRQn EXTI15_10_IRQn
#define ELV_EMGCY_Pin GPIO_PIN_15
#define ELV_EMGCY_GPIO_Port GPIOA
#define ELV_EMGCY_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
