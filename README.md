# Menampilkan Text di LCD 16x2 I2C dengan Arduino UNO
> [!NOTE]
> Halo semuanya, kali ini kita akan belajar menampilkan text di LCD 16x2 I2C menggunakan Arduino UNO. Di sini saya menggunakan Arduino UNO R4, namun kalian bisa menggunakan yang versi sebelumnya R3. 

![IMG_9481 3 (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/1a4dbe98-996e-408d-8b85-d5447d4f5b11)

## 📃 Komponen yang Diperlukan
|No | Komponen | Deskripsi |
| --- | --- | --- |
| 1 | Arduino UNO | [link](https://shope.ee/2LA9ZZRSl4?share_channel_code=2) |
| 2 | Kabel JUmper Male to Female | [link](https://shope.ee/5V7BLyRKg1?share_channel_code=2) |
| 3 | LCD 16x2 I2C | [link](https://shope.ee/20XJBdpQrD?share_channel_code=2)

## 📃 Software dan Librari yang digunakan
|No | Komponen | Deskripsi |
| --- | --- | --- |
| 1 | Arduino IDE | [Download](https://www.arduino.cc/en/software) |
| 2 | Librari LiquidCrystal_I2C | [Download](https://downloads.arduino.cc/libraries/github.com/marcoschwartz/LiquidCrystal_I2C-1.1.2.zip?_gl=1*hwesa7*_ga*MjkyMTI4NTA4LjE2OTc5NDMyNjE.*_ga_NEXN8H46L5*MTcwODMxMjkyNy40NS4xLjE3MDgzMTMwNjguMC4wLjA.*_fplc*b3N1eGVMdnRIQSUyQlREUjV1YjVpQ1A5VXZsU3YweE1aWmlyU2h0MjhFOUNLZW9xaW01MkdHcVdpNGVOdVhWaGhPNnRFJTJCSlZKWHFwSzFMcjRzJTJGZ0FvZnNqNmVlWnlIQXpjSngxZGd0MUlnMXNWdzB6MndjcXRDUlBpWGhrWVZBJTNEJTNE) |

## 📥 Tahapan Pengerjaan


<details>
<summary>1️⃣ Rangkai Alat seperti gambar berikut</summary>



![Fantastic Jarv-Vihelmo (1)](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/f5e8e3f7-fded-4d0d-9084-83b9bb0939e9)
</details>

<details>
<summary>2️⃣ Mendapatkan Alamat i2c dari LCD</summary>

### Jalankan Kode berikut di Arduino IDE setelah merangkai alat

  ```C++
#include <Wire.h>
 
void setup() {
  Wire.begin();
  Serial.begin(115200);
  Serial.println("\nI2C Scanner");
}
 
void loop() {
  byte error, address;
  int nDevices;
  Serial.println("Scanning...");
  nDevices = 0;
  for(address = 1; address < 127; address++ ) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address<16) {
        Serial.print("0");
      }
      Serial.println(address,HEX);
      nDevices++;
    }
    else if (error==4) {
      Serial.print("Unknow error at address 0x");
      if (address<16) {
        Serial.print("0");
      }
      Serial.println(address,HEX);
    }    
  }
  if (nDevices == 0) {
    Serial.println("No I2C devices found\n");
  }
  else {
    Serial.println("done\n");
  }
  delay(5000);          
}
```
### Setelah berhasil upload, buka serial monitor untuk melihat hasil nya. 0x27 adakah alamat i2c nya. Copy dan paste alamat tersebut nanti di Kode Program Utama
![Screenshot 2024-02-19 at 12 25 22](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/bce8a980-e0d6-47a5-9916-db648087d6cc)

</details>


<details>
<summary>2️⃣ Install Library LiquidCrystal_i2c </summary>



  - Download Librari LiquidCrystal di atas
  - Masuk ke software Arduino IDE, pilih Sketch > Include Library > add .ZIP Library
  - 
![Screenshot 2024-02-19 at 11 28 19](https://github.com/altopacademy/Menampilkan-Text-di-LCD-16x2-I2C-dengan-Arduino-UNO/assets/48623013/8441bcdf-02bc-484c-887a-0226a1717a41)
  - Pilih File zip yang sudah kamu download di langkah 1
  - Klik Open dan jika berhasil akan muncul tulisan " Library installed "
</details>

<details>
<summary>3️⃣ Tulis Kode Utama berikut di Arduino IDE</summary>

  ```C++
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup(){
  lcd.init();                    
  lcd.backlight();
}

void loop(){
  lcd.setCursor(0, 0);
  lcd.print("Selamat pagii");
  delay(1000);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("Semangat senin !!");
  delay(1000);
  lcd.clear(); 
}
```

</details>

<details>
<summary>3️⃣ Upload Kode yang sudah kamu tulis di Arduino IDE</summary>

</details>


## 


## 4. Upload Source Code yang sudah kamu tulis di Arduino IDE


