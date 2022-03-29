RGBLIGHT_ENABLE = yes # Enable WS2812 RGB underlight.
OLED_ENABLE     = yes
OLED_DRIVER     = SSD1306
LTO_ENABLE      = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
WPM_ENABLE      = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = yes
BOOTMAGIC_ENABLE = no

OCEAN_DREAM_ENABLE = no

ifeq ($(strip $(OLED_ENABLE)), yes)
    #... your code here...

    ifdef OCEAN_DREAM_ENABLE
        ifeq ($(strip $(OCEAN_DREAM_ENABLE)), yes)
            SRC += ocean_dream.c
            OPT_DEFS += -DOCEAN_DREAM_ENABLE
        endif
    endif
    ifndef OCEAN_DREAM_ENABLE
        SRC += ocean_dream.c
        OPT_DEFS += -DOCEAN_DREAM_ENABLE
    endif
endif
#TAP_DANCE_ENABLE= yes
