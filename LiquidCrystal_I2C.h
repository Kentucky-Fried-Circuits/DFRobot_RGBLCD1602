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
//     void begin(uint8_t cols = 16, uint8_t rows = 2, uint8_t charsize = RGBLCD1602_5x8DOTS);
//     void clear();
//     void home();
//     void noDisplay();
//     void display();
//     void noBlink();
//     void blink();
//     void noCursor();
//     void cursor();
//     void scrollDisplayLeft();
//     void scrollDisplayRight();
//     void printLeft();
//     void printRight();
//     void leftToRight();
//     void rightToLeft();
//     void shiftIncrement();
//     void shiftDecrement();
//     void noBacklight();
//     void backlight();
//     void autoscroll();
//     void noAutoscroll();
//     void createChar(uint8_t location, const char *charmap);
//     // Example: 	const char bell[8] PROGMEM = {B00100,B01110,B01110,B01110,B11111,B00000,B00100,B00000};

//     void setCursor(uint8_t, uint8_t);
//     virtual size_t write(uint8_t);
//     void command(uint8_t);
//     void init();
//     void oled_init();

//     ////compatibility API function aliases
//     void blink_on();                                             // alias for blink()
//     void blink_off();                                            // alias for noBlink()
//     void cursor_on();                                            // alias for cursor()
//     void cursor_off();                                           // alias for noCursor()
//     void setBacklight(uint8_t new_val);                          // alias for backlight() and nobacklight()
//     void load_custom_character(uint8_t char_num, uint8_t *rows); // alias for createChar()
//     void printstr(const char[]);

//     ////Unsupported API functions (not implemented in this library)
//     uint8_t status();
//     void setContrast(uint8_t new_val);
//     uint8_t keypad();
//     void setDelay(int, int);
//     void on();
//     void off();
//     uint8_t init_bargraph(uint8_t graphtype);
//     void draw_horizontal_graph(uint8_t row, uint8_t column, uint8_t len, uint8_t pixel_col_end);
//     void draw_vertical_graph(uint8_t row, uint8_t column, uint8_t len, uint8_t pixel_col_end);

// private:
//     void init_priv();
//     void send(uint8_t, uint8_t);
//     void write4bits(uint8_t);
//     void expanderWrite(uint8_t);
//     void pulseEnable(uint8_t);
//     uint8_t _Addr;
//     uint8_t _displayfunction;
//     uint8_t _displaycontrol;
//     uint8_t _displaymode;
//     uint8_t _numlines;
//     bool _oled = false;
//     uint8_t _cols;
//     uint8_t _rows;
//     uint8_t _backlightval;
};
#ifdef __cplusplus
}
#endif