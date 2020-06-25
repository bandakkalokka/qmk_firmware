#MCU name
MCU_FAMILY = STM32
MCU_SERIES = STM32L4xx
MCU_LDSCRIPT = STM32L432xC
MCU = cortex-m4
MCU_STARTUP = stm32l4xx
ARMV = 7
BOARD = ST_NUCLEO32_L432KC

# Build Options
#   comment out to disable the options.
#
BACKLIGHT_ENABLE = no              # Enable keyboard backlight functionality
BOOTMAGIC_ENABLE = lite            # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no              # Mouse keys
EXTRAKEY_ENABLE = no              # Audio control and System control
CONSOLE_ENABLE = no                # Console for debug
COMMAND_ENABLE = no                # Commands for debug and configuration
SLEEP_LED_ENABLE = no              # Breathing sleep LED during USB suspend
NKRO_ENABLE = no                  # USB Nkey Rollover
AUDIO_ENABLE = no                  # Audio output on port C6
NO_USB_STARTUP_CHECK = no          # Disable initialization only when usb is plugged in
#SERIAL_LINK_ENABLE = yes


