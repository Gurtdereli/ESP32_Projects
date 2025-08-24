# ESP32 Projeleri

Bu repository, ESP32 mikrodenetleyici ile geliştirilmiş çeşitli projeleri içermektedir. Her proje, ESP32'nin farklı özelliklerini ve yeteneklerini göstermektedir.

## 📁 Proje Listesi

### 🔌 Temel Projeler

#### [blink/](blink/)
**LED Yanıp Sönme Projesi**
- ESP32'nin GPIO pin 1'ini kullanarak basit LED yanıp sönme projesi
- 1 saniye aralıklarla LED'i açıp kapatır
- Arduino IDE ile programlanabilir

### 🌐 WiFi Projeleri

#### [Access_Point/](Access_Point/)
**WiFi Access Point Projesi**
- ESP32'yi WiFi erişim noktası olarak yapılandırır
- "Open Network" adında şifresiz ağ oluşturur
- Bağlı cihaz sayısını takip eder ve IP adresini gösterir

#### [Wifi_Network/](Wifi_Network/)
**WiFi Ağ Bağlantısı Projesi**
- ESP32'yi mevcut WiFi ağına bağlar
- Bağlantı durumunu kontrol eder
- IP adresini gösterir ve bağlantı durumunu izler

#### [Connecting_Networks/](Connecting_Networks/)
**Ağ Bağlantı Yönetimi**
- WiFi ağları arasında geçiş yapma
- Ağ bağlantı durumunu izleme

### 📡 Bluetooth Projeleri

#### [Bluetooth/](Bluetooth/)
**Bluetooth LED Kontrolü**
- ESP32'yi "Esp32-BT" adıyla Bluetooth cihazı olarak yapılandırır
- Bluetooth üzerinden gelen komutlarla LED'i kontrol eder
- '1' komutu LED'i açar, '0' komutu kapatır

#### [Bluetooth_Led_Control/](Bluetooth_Led_Control/)
**Gelişmiş Bluetooth LED Kontrolü**
- "ESP32-Bluetooth" adıyla Bluetooth cihazı
- GPIO pin 2'deki LED'i Bluetooth komutlarıyla kontrol eder
- Seri port ve Bluetooth arasında veri aktarımı

#### [ESP32_BLE/](ESP32_BLE/)
**Bluetooth Low Energy (BLE) Projesi**
- ESP32'nin BLE özelliklerini kullanır
- Düşük güç tüketimi ile Bluetooth iletişimi

### 🌡️ Sensör Projeleri

#### [DHT11/](DHT11/)
**Sıcaklık ve Nem Sensörü Projesi**
- DHT11 sensörü ile sıcaklık ve nem ölçümü
- RGB LED ile sıcaklık göstergesi (27°C üzeri kırmızı, altı yeşil)
- Seri port üzerinden veri gösterimi

#### [DHT11_with_RGB_LED/](DHT11_with_RGB_LED/)
**RGB LED ile DHT11 Sensör Projesi**
- DHT11 sensör verilerini RGB LED ile görsel olarak gösterir
- Sıcaklık ve nem değerlerine göre renk değişimi

#### [Touch_Sensor/](Touch_Sensor/)
**Dokunmatik Sensör Projesi**
- ESP32'nin dahili dokunmatik sensörünü kullanır
- T0 pinindeki dokunma algılandığında LED'i açar
- Dokunma değerlerini seri port üzerinden gösterir

### 🕐 Zaman ve Tarih Projeleri

#### [ESP32-RTC-NTP/](ESP32-RTC-NTP/)
**NTP ve RTC Zaman Senkronizasyonu**
- NTP sunucusundan internet üzerinden zaman bilgisi alır
- LCD ekranda tarih ve saat bilgilerini gösterir
- WiFi bağlantısı ile zaman senkronizasyonu
- Detaylı zaman bilgileri (gün, ay, yıl, saat, dakika, saniye)

### 💾 Depolama Projeleri

#### [SPIFFS_Read_and_Write/](SPIFFS_Read_and_Write/)
**SPIFFS Dosya Sistemi Projesi**
- ESP32'nin dahili SPIFFS dosya sistemini kullanır
- Dosya oluşturma, yazma ve okuma işlemleri
- Kalıcı veri depolama ve yönetimi

### 🖥️ Görüntü ve Ekran Projeleri

#### [ST7789/](ST7789/)
**ST7789 LCD Ekran Projesi**
- 240x240 piksel ST7789 LCD ekran kontrolü
- Ladybug görseli ile ekran testi
- LCD Image Converter aracı ile görsel dönüştürme

### 🌐 Web Sunucu Projeleri

#### [Web Server/](Web%20Server/)
**Basit Web Sunucu**
- ESP32 üzerinde çalışan web sunucu
- HTTP isteklerini işler ve HTML yanıtları döner

#### [Web_Server_mDNS_Protocol/](Web_Server_mDNS_Protocol/)
**mDNS Protokolü ile Web Sunucu**
- WiFi ağında "test" adıyla mDNS hizmeti
- Web sunucu üzerinden sistem durumu bilgileri
- Çalışma süresini gösteren web sayfası

### 🔐 Güvenlik Projeleri

#### [Bluetooth-Door-Lock/](Bluetooth-Door-Lock/)
**Bluetooth Şifreli Kilit Sistemi**
- Bluetooth üzerinden şifre ile kilit kontrolü
- Android uygulaması ile uzaktan kontrol
- Solenoid kilit mekanizması kontrolü
- HC-05 Bluetooth modülü entegrasyonu

## 🚀 Kullanım

1. **Arduino IDE Kurulumu**: ESP32 board manager'ı Arduino IDE'ye ekleyin
2. **Proje Seçimi**: İstediğiniz projeyi seçin ve Arduino IDE'de açın
3. **Bağlantı**: Gerekli sensörleri ve modülleri ESP32'ye bağlayın
4. **Yükleme**: Kodu ESP32'ye yükleyin ve test edin

## 📋 Gereksinimler

- ESP32 geliştirme kartı
- Arduino IDE
- ESP32 board paketi
- Projeye özel sensörler ve modüller (DHT11, ST7789 LCD, HC-05, vb.)

## 🔧 Özelleştirme

Her proje, kendi ihtiyaçlarınıza göre özelleştirilebilir:
- **WiFi bilgilerini güncelleyin**: Tüm projelerde "your ssid" ve "your password" olarak işaretlenen yerleri kendi WiFi bilgilerinizle değiştirin
- GPIO pin numaralarını değiştirin
- Sensör parametrelerini ayarlayın
- Ek özellikler ekleyin

## 📚 Kaynaklar

- [ESP32 Arduino Core](https://github.com/espressif/arduino-esp32)
- [ESP32 Dokümantasyonu](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/)
- [Arduino Referans](https://www.arduino.cc/reference/en/)

## 🤝 Katkıda Bulunma

Bu projelere katkıda bulunmak istiyorsanız:
1. Fork yapın
2. Yeni özellik ekleyin
3. Pull request gönderin

## 📄 Lisans

Bu projeler eğitim amaçlı geliştirilmiştir ve açık kaynak kodludur.
