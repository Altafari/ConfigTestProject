#include "stm32f4xx_hal.h"
#include "misc.h"

void Toggle_LED()
{
	GPIOA->ODR ^= GREEN_LED;
}
