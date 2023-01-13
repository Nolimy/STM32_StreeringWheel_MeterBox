/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//#include "bsp_LCD.h"
#include "bsp_BC260Y.h"
//#include "bsp_WS2812B.h"
#include "lvgl.h"
#include "lv_port_disp.h"
#include "ui.h" 
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
osThreadId iotUploadTaskHandle;
osThreadId LVGL_TaskHandle;

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void startIotUploadTask(void const * argument);
void Start_LVGL_Task(void const * argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

/* USER CODE BEGIN GET_IDLE_TASK_MEMORY */
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];

void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
  /* place for user code */
}
/* USER CODE END GET_IDLE_TASK_MEMORY */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of iotUploadTask */
  osThreadDef(iotUploadTask, startIotUploadTask, osPriorityAboveNormal, 0, 512);
  iotUploadTaskHandle = osThreadCreate(osThread(iotUploadTask), NULL);

  /* definition and creation of LVGL_Task */
  osThreadDef(LVGL_Task, Start_LVGL_Task, osPriorityRealtime, 0, 1024);
  LVGL_TaskHandle = osThreadCreate(osThread(LVGL_Task), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_startIotUploadTask */
/**
  * @brief  Function implementing the iotUploadTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_startIotUploadTask */
void startIotUploadTask(void const * argument)
{
  /* USER CODE BEGIN startIotUploadTask */
  /* Infinite loop */
  for(;;)
  {
		usartTxFlag = 1;
		//printf("Here is Task 1\r\n");
		uploadCarData();
    osDelay(100);
  }
  /* USER CODE END startIotUploadTask */
}

/* USER CODE BEGIN Header_Start_LVGL_Task */
/**
* @brief Function implementing the LVGL_Task thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Start_LVGL_Task */
void Start_LVGL_Task(void const * argument)
{
  /* USER CODE BEGIN Start_LVGL_Task */
  /* Infinite loop */
  for(;;)
  {
		if(barFlag == 1)
			sendEventCode();		
		lv_task_handler(); // lvgl的事务处理	
    osDelay(1);
  }
  /* USER CODE END Start_LVGL_Task */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */
