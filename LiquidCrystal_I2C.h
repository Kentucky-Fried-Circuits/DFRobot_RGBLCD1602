#pragma once
#include "DFRobot_RGBLCD1602.h"
// #ifdef ARDUINO
// #warning LC ARDIUNO defined
// #if (ARDUINO >= 100)
// #warning LC ARDIUNO >= 100
// #include "Arduino.h"
// #else
// #include "WProgram.h"
// #endif
// #endif

#ifdef __cplusplus
extern "C" {
#endif
class LiquidCrystal_I2C : public DFRobot_RGBLCD1602
{
public:
    LiquidCrystal_I2C(uint8_t lcd_Addr, uint8_t lcd_cols, uint8_t lcd_rows): DFRobot_RGBLCD1602(lcd_cols, lcd_rows, I2C_NUM_0, lcd_Addr, LCD_RGB_ADDRESS) {}

};
#ifdef __cplusplus
}
#endif