#define MICROPY_HW_BOARD_NAME       "STM32H750B_DK"
#define MICROPY_HW_MCU_NAME         "STM32H750"

#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_MMCARD    (0)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_FATFS_EXFAT         (0)
#define MICROPY_HW_USB_MSC          (0)

// The board has an 25MHz HSE, the following gives 400MHz CPU speed
#define MICROPY_HW_CLK_PLLM     (5)
#define MICROPY_HW_CLK_PLLN     (160)
#define MICROPY_HW_CLK_PLLP     (2)
#define MICROPY_HW_CLK_PLLQ     (4)
#define MICROPY_HW_CLK_PLLR     (2)
#define MICROPY_HW_CLK_PLLVCI   (RCC_PLL1VCIRANGE_1)
#define MICROPY_HW_CLK_PLLVCO   (RCC_PLL1VCOWIDE)
#define MICROPY_HW_CLK_PLLFRAC  (0)

// The USB clock is set using PLL3
#define MICROPY_HW_CLK_PLL3M    (5)
#define MICROPY_HW_CLK_PLL3N    (48)
#define MICROPY_HW_CLK_PLL3P    (2)
#define MICROPY_HW_CLK_PLL3Q    (5)
#define MICROPY_HW_CLK_PLL3R    (2)
#define MICROPY_HW_CLK_PLL3VCI  (RCC_PLL3VCIRANGE_1)
#define MICROPY_HW_CLK_PLL3VCO  (RCC_PLL3VCOWIDE)
#define MICROPY_HW_CLK_PLL3FRAC (0)

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_7

#define MICROPY_HW_UART_REPL        PYB_UART_3
#define MICROPY_HW_UART_REPL_BAUD   115200

// UART1 config
//#define MICROPY_HW_UART1_TX  (pin_A9)
//#define MICROPY_HW_UART1_RX  (pin_A10)

// UART3 config
#define MICROPY_HW_UART3_TX  (pin_B10)
#define MICROPY_HW_UART3_RX  (pin_B11)
//#define MICROPY_HW_UART3_RTS (pin_B14)
//#define MICROPY_HW_UART3_CTS (pin_B13)

// I2C buses 
// (I2C4 LCD Touch,Audio, Arduino, StMod)
#define MICROPY_HW_I2C4_SCL (pin_D12)
#define MICROPY_HW_I2C4_SDA (pin_D13)
// (I2C1 Arduino, StMod)
// #define MICROPY_HW_I2C4_SCL (pin_D12)
// #define MICROPY_HW_I2C4_SDA (pin_D13)

// SPI buses
#define MICROPY_HW_SPI2_NSS  (pin_B4)
#define MICROPY_HW_SPI2_SCK  (pin_D3)
#define MICROPY_HW_SPI2_MISO (pin_I2)
#define MICROPY_HW_SPI2_MOSI (pin_B15)

// FDCAN bus
#define MICROPY_HW_CAN1_NAME  "FDCAN1"
#define MICROPY_HW_CAN1_TX    (pin_H13)
#define MICROPY_HW_CAN1_RX    (pin_H14)

#define MICROPY_HW_CAN2_NAME  "FDCAN2"
#define MICROPY_HW_CAN2_TX    (pin_B13)
#define MICROPY_HW_CAN2_RX    (pin_B5)

// EMMC (no detect switch)
// #define MICROPY_HW_SDCARD_SDMMC             (1)
// #define MICROPY_HW_SDCARD_CK                (pin_C12)
// #define MICROPY_HW_SDCARD_CMD               (pin_D2)
// #define MICROPY_HW_SDCARD_D0                (pin_C8)
// #define MICROPY_HW_SDCARD_D1                (pin_C9)
// #define MICROPY_HW_SDCARD_D2                (pin_C10)
// #define MICROPY_HW_SDCARD_D3                (pin_C11)
// #define MICROPY_HW_SDCARD_D4                (pin_B8)
// #define MICROPY_HW_SDCARD_D5                (pin_B9)
// #define MICROPY_HW_SDCARD_D6                (pin_C6)
// #define MICROPY_HW_SDCARD_D7                (pin_C7)
//#define MICROPY_HW_SDCARD_DETECT_PIN        (pyb_pin_SD_SW)
//#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
//#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)
//#define MICROPY_HW_SDCARD_MOUNT_AT_BOOT     (1)

// USB config
#define MICROPY_HW_USB_FS                   (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN      (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN           (pin_A10)

// LEDs
#define MICROPY_HW_LED1             (pin_J2)  // green
#define MICROPY_HW_LED2             (pin_I13) // red

#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))

// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// Use part of external QSPI flash for storage in memory mapped mode
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE    (0)
//#define MICROPY_HW_ENABLE_STORAGE                   (1)
#if !BUILDING_MBOOT
#define MICROPY_HW_SPIFLASH_ENABLE_CACHE            (1)
#endif

// QSPI Flash 512MBits (bank 1)
#define MICROPY_HW_QSPIFLASH_SIZE_BITS      (512 * 1024 * 1024)
#define MICROPY_HW_QSPIFLASH_SIZE_BITS_LOG2 (29)
#define MICROPY_HW_QSPIFLASH_CS             (pin_B6)
#define MICROPY_HW_QSPIFLASH_SCK            (pin_F10)
#define MICROPY_HW_QSPIFLASH_IO0            (pin_D11)
#define MICROPY_HW_QSPIFLASH_IO1            (pin_F9)
#define MICROPY_HW_QSPIFLASH_IO2            (pin_F7)
#define MICROPY_HW_QSPIFLASH_IO3            (pin_F6)

#define MICROPY_HW_QSPI_PRESCALER           2

// QSPI flash, block device config
extern const struct _mp_spiflash_config_t spiflash_config;
extern struct _spi_bdev_t spi_bdev;

#define MICROPY_HW_BDEV_IOCTL(op, arg) ( \
    (op) == BDEV_IOCTL_NUM_BLOCKS ? (MICROPY_HW_QSPIFLASH_SIZE_BITS / 8 / FLASH_BLOCK_SIZE) : \
    (op) == BDEV_IOCTL_INIT ? spi_bdev_ioctl(&spi_bdev, (op), (uint32_t)&spiflash_config) : \
    spi_bdev_ioctl(&spi_bdev, (op), (arg)) \
)
#define MICROPY_HW_BDEV_READBLOCKS(dest, bl, n) spi_bdev_readblocks(&spi_bdev, (dest), (bl), (n))
#define MICROPY_HW_BDEV_WRITEBLOCKS(src, bl, n) spi_bdev_writeblocks(&spi_bdev, (src), (bl), (n))

// #define MICROPY_BOARD_EARLY_INIT    board_early_init
// void board_early_init(void);

/******************************************************************************/
// Bootloader configuration

//#define MBOOT_USB_AUTODETECT_PORT   (1)
#define MBOOT_FSLOAD                (1)
#define MBOOT_VFS_FAT               (1)

#define MBOOT_I2C_PERIPH_ID         4
#define MBOOT_I2C_SCL               (pin_D12)
#define MBOOT_I2C_SDA               (pin_D13)
#define MBOOT_I2C_ALTFUNC           (4)

#define MBOOT_SPIFLASH_ADDR        (0x90000000)
#define MBOOT_SPIFLASH_BYTE_SIZE   (512 * 128 * 1024)
#define MBOOT_SPIFLASH_LAYOUT      "/0x90000000/512*128Kg"
#define MBOOT_SPIFLASH_ERASE_BLOCKS_PER_PAGE (128 / 4) // 128k page, 4k erase block
#define MBOOT_SPIFLASH_SPIFLASH    (&spi_bdev.spiflash)
#define MBOOT_SPIFLASH_CONFIG      (&spiflash_config)

#define MBOOT_BOOTPIN_PIN           (pin_C13)
#define MBOOT_BOOTPIN_PULL          (MP_HAL_PIN_PULL_NONE)
#define MBOOT_BOOTPIN_ACTIVE        (1)

#define MBOOT_BOARD_EARLY_INIT(initial_r0) mboot_board_early_init()
void mboot_board_early_init(void);
