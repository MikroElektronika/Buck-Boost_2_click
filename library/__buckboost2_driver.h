/*
    __buckboost2_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __buckboost2_driver.h
@brief    BuckBoost2 Driver
@mainpage BuckBoost2 Click
@{

@image html sch.jpg

@}

@defgroup   BUCKBOOST2
@brief      BuckBoost2 Click Driver
@{

| Global Library Prefix | **BUCKBOOST2** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Jan 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BUCKBOOST2_H_
#define _BUCKBOOST2_H_

/** 
 * @macro T_BUCKBOOST2_P
 * @brief Driver Abstract type 
 */
#define T_BUCKBOOST2_P    const uint8_t*

/** @defgroup BUCKBOOST2_COMPILE Compilation Config */              /** @{ */

//  #define   __BUCKBOOST2_DRV_SPI__                            /**<     @macro __BUCKBOOST2_DRV_SPI__  @brief SPI driver selector */
//  #define   __BUCKBOOST2_DRV_I2C__                            /**<     @macro __BUCKBOOST2_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BUCKBOOST2_DRV_UART__                           /**<     @macro __BUCKBOOST2_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BUCKBOOST2_VAR Variables */                           /** @{ */

extern const uint8_t _BUCKBOOST2_WITH_IMPROVEMENT;
extern const uint8_t _BUCKBOOST2_WITHOUT_IMPROVEMENT;

                                                                       /** @} */

#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BUCKBOOST2_INIT Driver Initialization */              /** @{ */

#ifdef   __BUCKBOOST2_DRV_SPI__
void buckboost2_spiDriverInit(T_BUCKBOOST2_P gpioObj, T_BUCKBOOST2_P spiObj);
#endif
#ifdef   __BUCKBOOST2_DRV_I2C__
void buckboost2_i2cDriverInit(T_BUCKBOOST2_P gpioObj, T_BUCKBOOST2_P i2cObj, uint8_t slave);
#endif
#ifdef   __BUCKBOOST2_DRV_UART__
void buckboost2_uartDriverInit(T_BUCKBOOST2_P gpioObj, T_BUCKBOOST2_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void buckboost2_gpioDriverInit(T_BUCKBOOST2_P gpioObj);
                                                                       /** @} */
/** @defgroup BUCKBOOST2_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function for power ON chip
 */
void buckboost2_powerON();

/**
 * @brief Function for power OFF chip
 */
void buckboost2_powerOFF();

/**
 * @brief Function settings mode
 *
 * Options:
    mode with improvement current, 
	mode without improvement current
 */

void buckboost2_setMode(uint8_t mode);


                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_BuckBoost2_STM.c
    @example Click_BuckBoost2_TIVA.c
    @example Click_BuckBoost2_CEC.c
    @example Click_BuckBoost2_KINETIS.c
    @example Click_BuckBoost2_MSP.c
    @example Click_BuckBoost2_PIC.c
    @example Click_BuckBoost2_PIC32.c
    @example Click_BuckBoost2_DSPIC.c
    @example Click_BuckBoost2_AVR.c
    @example Click_BuckBoost2_FT90x.c
    @example Click_BuckBoost2_STM.mbas
    @example Click_BuckBoost2_TIVA.mbas
    @example Click_BuckBoost2_CEC.mbas
    @example Click_BuckBoost2_KINETIS.mbas
    @example Click_BuckBoost2_MSP.mbas
    @example Click_BuckBoost2_PIC.mbas
    @example Click_BuckBoost2_PIC32.mbas
    @example Click_BuckBoost2_DSPIC.mbas
    @example Click_BuckBoost2_AVR.mbas
    @example Click_BuckBoost2_FT90x.mbas
    @example Click_BuckBoost2_STM.mpas
    @example Click_BuckBoost2_TIVA.mpas
    @example Click_BuckBoost2_CEC.mpas
    @example Click_BuckBoost2_KINETIS.mpas
    @example Click_BuckBoost2_MSP.mpas
    @example Click_BuckBoost2_PIC.mpas
    @example Click_BuckBoost2_PIC32.mpas
    @example Click_BuckBoost2_DSPIC.mpas
    @example Click_BuckBoost2_AVR.mpas
    @example Click_BuckBoost2_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __buckboost2_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */