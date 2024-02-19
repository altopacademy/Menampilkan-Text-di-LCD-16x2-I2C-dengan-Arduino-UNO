# Menampilkan Text di LCD 16x2 I2C dengan Arduino UNO
![IMG_9481 3 (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/1a4dbe98-996e-408d-8b85-d5447d4f5b11)
Halo semuanya, kali ini kita akan belajar menampilkan text di LCD 16x2 I2C menggunakan Arduino UNO. Di sini saya menggunakan Arduino UNO R4, namun kalian bisa menggunakan yang versi sebelumnya R3. 

## 📃 Komponen yang Diperlukan
1. [ Arduino UNO ](https://shope.ee/2LA9ZZRSl4?share_channel_code=2)
2. [Kabel Jumper Male to Female ](https://shope.ee/5V7BLyRKg1?share_channel_code=2)
4. [ LCD ](https://shope.ee/20XJBdpQrD?share_channel_code=2)

## 📃 Software yang Digunakan
1. [ Arduino IDE](https://www.arduino.cc/en/software)

## Tahapan Pengerjaan


<details>
<summary>Rangkai Alat seperti gambar berikut</summary>
### Rangkaian

![Fantastic Jarv-Vihelmo (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/f5e8e3f7-fded-4d0d-9084-83b9bb0939e9)
</details>

<details>
<summary>Install Library LiquidCrystal_i2c</summary>
  
1. Download librari nya di [sini](https://downloads.arduino.cc/libraries/github.com/marcoschwartz/LiquidCrystal_I2C-1.1.2.zip?_gl=1*hwesa7*_ga*MjkyMTI4NTA4LjE2OTc5NDMyNjE.*_ga_NEXN8H46L5*MTcwODMxMjkyNy40NS4xLjE3MDgzMTMwNjguMC4wLjA.*_fplc*b3N1eGVMdnRIQSUyQlREUjV1YjVpQ1A5VXZsU3YweE1aWmlyU2h0MjhFOUNLZW9xaW01MkdHcVdpNGVOdVhWaGhPNnRFJTJCSlZKWHFwSzFMcjRzJTJGZ0FvZnNqNmVlWnlIQXpjSngxZGd0MUlnMXNWdzB6MndjcXRDUlBpWGhrWVZBJTNEJTNE)
  
2. Masuk ke software Arduino IDE, pilih Sketch > Include Library > add .ZIP Library
3. Pilih File zip yang sudah kamu download di langkah 1
4. Klik Open dan jika berhasil akan muncul tulisan " Library installed "
</details>

<details>
<summary>3. Tulis Source Code nya di Arduino IDE</summary>

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

</details>


## 


## 4. Upload Source Code yang sudah kamu tulis di Arduino IDE

> [!NOTdE]
> Useful information that users should know, even when skimming content.

> [!TIP]
> Helpful advice for doing things better or more easily.

> [!IMPORTANT]
> Key information users need to know to achieve their goal.

> [!WARNING]
> Urgent info that needs immediate user attention to avoid problems.

> [!CAUTION]
> Advises about risks or negative outcomes of certain actions.

