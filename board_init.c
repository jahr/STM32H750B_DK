/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "storage.h"
// #include STM32_HAL_H

// This init function is needed to memory map the QSPI flash early in the boot process

void mboot_board_early_init(void) {
    // Explicitly init SPI2 because it's not enabled as a block device
    spi_bdev_ioctl(&spi_bdev, BDEV_IOCTL_INIT, (uint32_t)&spiflash_config);
}

// void board_early_init(void) {
//     GPIO_InitTypeDef GPIO_InitStructure;

//     __HAL_RCC_GPIOK_CLK_ENABLE();

//     // Turn off the backlight. LCD_BL = PK0
//     GPIO_InitStructure.Pin = GPIO_PIN_0;
//     GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
//     GPIO_InitStructure.Pull = GPIO_PULLUP;
//     GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
//     HAL_GPIO_Init(GPIOK, &GPIO_InitStructure);
//     HAL_GPIO_WritePin(GPIOK, GPIO_PIN_0, GPIO_PIN_RESET);
// }
