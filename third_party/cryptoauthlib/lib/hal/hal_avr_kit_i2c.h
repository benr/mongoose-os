/**
 * \file
 * \brief ATCA Hardware abstraction layer for I2C bit banging.
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \atmel_crypto_device_library_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel integrated circuit.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \atmel_crypto_device_library_license_stop
 */

#ifndef HAL_AVR_KIT_I2C_H_
#define HAL_AVR_KIT_I2C_H_

/**
 * \defgroup hal_ Hardware abstraction layer (hal_)
 *
 * \brief These methods define the hardware abstraction layer for
 *        communicating with a CryptoAuth device using I2C bit banging.
   @{ */

#define MAX_I2C_BUSES    1

/**
 * \brief This enumeration lists flags for I2C read or write addressing.
 */
enum i2c_read_write_flag {
	I2C_WRITE = (uint8_t)0x00,  //!< write command flag
	I2C_READ  = (uint8_t)0x01   //!< read command flag
};

/**
 * \brief This is the hal_data for ATCA HAL.
 */
typedef struct atcaI2Cmaster {
	uint32_t pin_sda;
	uint32_t pin_scl;
	int ref_ct;
	//! for conveniences during interface release phase
	int bus_index;
} ATCAI2CMaster_t;

/** @} */

#endif /* HAL_AVR_KIT_I2C_H_ */
