# Menampilkan Text di LCD 16x2 I2C dengan Arduino UNO
Halo semuanya, kali ini kita akan belajar menampilkan text di LCD 16x2 I2C menggunakan Arduino UNO. Di sini saya menggunakan Arduino UNO R4, namun kalian bisa menggunakan yang versi sebelumnya R3. 

## 📃 Komponen yang Diperlukan
1. [ Arduino UNO ](https://shope.ee/2LA9ZZRSl4?share_channel_code=2)
2. [Kabel Jumper Male to Female ](https://shope.ee/5V7BLyRKg1?share_channel_code=2)
4. [ LCD ](https://shope.ee/20XJBdpQrD?share_channel_code=2)

## 📃 Software yang Digunakan
1. [ Arduino IDE](https://www.arduino.cc/en/software)

## 🗺️ Skema Rangkaian

![Fantastic Jarv-Vihelmo (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/f5e8e3f7-fded-4d0d-9084-83b9bb0939e9)

![IMG_9481 3 (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/1a4dbe98-996e-408d-8b85-d5447d4f5b11)

![IMG_9480 (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/ff68bd1a-85d1-4cd0-8ab8-5bae5c07b902)

## 🗺️ Source Code
```C++
#include <LiquidCrystal_I2C.h>
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, 16, 2);  

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
```
