#include "sdk_project_config.h"
int main (void)
{
CLOCK_DRV_Init(&clockMan1_InitConfig0);
PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
PWM_Init(&pwm_pal_1_instance, &pwm_pal_1_configs);

while(1)
{
	for(int i=0;i<=1000;i+=100)
	{
	PWM_UpdateDuty(&pwm_pal_1_instance,0U,i);
	OSIF_TimeDelay(1000);
	}
	for(int i=1000;i>=0;i-=100)
	{
		PWM_UpdateDuty(&pwm_pal_1_instance,0U,i);
		OSIF_TimeDelay(1000);
	}
}


}
