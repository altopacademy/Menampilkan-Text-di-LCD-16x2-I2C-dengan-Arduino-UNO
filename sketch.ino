/*
    Menampilkan Text du LCD 16x2 i2c dengan Arduino UNO

    Created 19 Februari 2024
    By altopacademy

    follow for more:
    instagram : @altopacademy
    tiktok    : @altopacademy

*/

#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
}

void loop(){
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  lcd.print("Selamat pagii");
  delay(1000);
  // clears the display to print new message
  lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(1,1);
  lcd.print("Semangat senin !!");
  delay(1000);
  lcd.clear(); 
}
