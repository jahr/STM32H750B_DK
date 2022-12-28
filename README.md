# STM32H750B_DK

STM32H750B_DK board definition for Micropython. It supports mboot.

Build steps:

- Go to the `ports/stm32` directory
- Go to the `mboot` subdir
- Run `make BOARD=STM32H750B_DK`
- Connect the board to the PC using `STLK` connector (CN14). Do not forget to set the power source jumper JP8 first
- Flash the `firmware.hex` or `firmware.bin` from the subdir `build-STM32H750B_DK` using a favorite flashig app (e.g. STM32CubeProgrammer)
- Disconnect the board from STLK
- Go back to the `ports/stm32` directory
- Run `make BOARD=STM32H750B_DK`
- Connect the board to the PC using `USB FS` connector (CN13). Do not forget to set the power source jumper JP8 first
- Press and hold the user button, press the reset button and release the user button
- Flash the `firmware.dfu` from the subdir `build-STM32H750B_DK` using any DFU flashing application, e.g. `dfu-util -D firmware.dfu`
- Reset the board


# This configuration doesn't work

It is work in progress. Mboot somehow works, however it is very slow downloading the firmware comparing other H750 based boards. The firmware itself compiles successfuly but after flashing it doesn't communicate, so it is not possible to verify, if it works at all :-(
