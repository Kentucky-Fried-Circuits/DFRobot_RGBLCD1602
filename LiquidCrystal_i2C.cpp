#include "LiquidCrystal_I2C.h"


// LiquidCrystal_I2C::LiquidCrystal_I2C(uint8_t lcd_Addr, uint8_t lcd_cols, uint8_t lcd_rows)
// {
//     DFRobot_RGBLCD1602(lcd_cols, lcd_rows, I2C_NUM_0, lcd_Addr, RGBLCD1602_RGB_ADDRESS);
// }

// inline void LiquidCrystal_I2C::begin(uint8_t cols, uint8_t rows, uint8_t charsize)
// {
//     DFRobot_RGBLCD1602::begin(rows, charsize);
// }// Allows us to fill the first 8 CGRAM locations
// // with custom characters
// inline void LiquidCrystal_I2C::createChar(uint8_t location, uint8_t charmap[])
// {
//     DFRobot_RGBLCD1602::customSymbol(location, charmap);
// }