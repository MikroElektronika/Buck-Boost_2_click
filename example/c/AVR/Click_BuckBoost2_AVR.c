/*
Example for BuckBoost2 Click

    Date          : Jan 2018.
    Author        : MikroE Team

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initialization PWM and RST pin as OUTPUT
- Application Initialization - Initializes Driver init and turn ON chip and settings mode with improvement current.
- Application Task - (code snippet) - The click has a constant output voltage of 5V, no additional settings are required.

*/

#include "Click_BuckBoost2_types.h"
#include "Click_BuckBoost2_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    Delay_ms( 100 );
}

void applicationInit()
{
    buckboost2_gpioDriverInit( (T_BUCKBOOST2_P)&_MIKROBUS1_GPIO );
    buckboost2_powerON();
    buckboost2_setMode(_BUCKBOOST2_WITH_IMPROVEMENT);
}

void applicationTask()
{
    Delay_1sec();
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}
