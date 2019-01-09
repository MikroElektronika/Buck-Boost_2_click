![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# BuckBoost2 Click

- **CIC Prefix**  : BUCKBOOST2
- **mikroSDK**    : YES
- **Author**      : Katarina Perendic

---

### Software Support

We provide a library for the BuckBoost2 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2327/buck-boost-2-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Key functions :

- ``` void buckboost2_powerON() ``` - Turn on device
- ``` void buckboost2_powerOFF() ``` - Turn off device 
- ``` void buckboost2_setMode(uint8_t mode) ``` - Set working mode

**Examples Description**

The application is composed of three sections :

- System Initialization - Initialization PWM and RST pin as OUTPUT
- Application Initialization - (code snippet) - Initializes Driver init and turn ON chip and settings mode with improvement current.
- Application Task - The click has a constant output voltage of 5V, no additional settings are required.


```.c
void applicationInit()
{
    buckboost2_gpioDriverInit( (T_BUCKBOOST2_P)&_MIKROBUS1_GPIO );
    buckboost2_powerON();
    buckboost2_setMode(_BUCKBOOST2_WITH_IMPROVEMENT);
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2327/buck-boost-2-click) page.


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
