#ifndef INIT_FROM_HAL_H_
#define INIT_FROM_HAL_H_

#include "main.h"
#include "stm32f1xx_hal.h"
#include "cmsis_os.h"

void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_USART3_UART_Init(void);


#endif /* INIT_FROM_HAL_H_ */
