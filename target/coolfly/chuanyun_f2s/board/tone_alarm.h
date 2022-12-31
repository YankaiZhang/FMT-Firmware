#ifndef _TONE_ALARM_H
#define _TONE_ALARM_H

#include <firmament.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    uint64_t timestamp;
    char buff[128];
} tone_alarm_t;

#define STARTUP              "MFT240L8 O4aO5dc O4aO5dc O4aO5dc L16dcdcdcdc"
#define ERROR_TUNE           "MBT200a8a8a8PaaaP"
#define NOTIFY_POSITIVE      "MFT200e8a8a"
#define NOTIFY_NEUTRAL       "MFT200e8e"
#define NOTIFY_NEGATIVE      "MFT200e8c8e8c8e8c8"
#define ARMING_WARNING       "MNT75L1O2G"
#define BATTERY_WARNING_SLOW "MBNT100a8"
#define BATTERY_WARNING_FAST "MBNT255a8a8a8a8a8a8a8a8a8a8a8a8a8a8a8a8"
#define GPS_WARNING          "MFT255L4AAAL1F#"
#define ARMING_FAILURE       "MFT255L4<<<BAP"
#define PARACHUTE_RELEASE    "MFT255L16agagagag"
#define SINGLE_BEEP          "MFT100a8"
#define HOME_SET             "MFT100L4>G#6A#6B#4"
#define SD_INIT              "MFAGPAG"
#define SD_ERROR             "MNBG"
#define PROG_PX4IO           "MLL32CP8MB"
#define PROG_PX4IO_OK        "MLL8CDE"
#define PROG_PX4IO_ERR       "ML<<CP4CP4CP4CP4CP4"
#define SINGLE_BEEP2         "MFT100a8g"
#define SINGLE_BEEP3         "MFT100a8gf"

#define TONE_STARTUP              1
#define TONE_ERROR_TUNE           2
#define TONE_NOTIFY_POSITIVE      3
#define TONE_NOTIFY_NEUTRAL       4
#define TONE_NOTIFY_NEGATIVE      5
#define TONE_ARMING_WARNING       6
#define TONE_BATTERY_WARNING_SLOW 7
#define TONE_BATTERY_WARNING_FAST 8
#define TONE_GPS_WARNING          9
#define TONE_ARMING_FAILURE       10
#define TONE_PARACHUTE_RELEASE    11
#define TONE_SINGLE_BEEP          12
#define TONE_HOME_SET             13
#define TONE_SD_INIT              14
#define TONE_SD_ERROR             15
#define TONE_PROG_PX4IO           16
#define TONE_PROG_PX4IO_OK        17
#define TONE_PROG_PX4IO_ERR       18
#define TONE_SINGLE_BEEP2         19
#define TONE_SINGLE_BEEP3         20

fmt_err_t tone_alarm_init(void);

#endif