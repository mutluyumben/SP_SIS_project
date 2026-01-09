# Kullanım Kılavuzu (User Manual)

Bu proje, Docker konteynerleri üzerinde çalışan bir Öğrenci Bilgi Sistemi (SIS) simülasyonudur. Sistem, interaktif bir komut satırı arayüzü (CLI) sunar ve verileri PostgreSQL veritabanında saklar.

## Ön Gereksinimler
- Bilgisayarınızda **Docker Desktop** veya **Docker Engine** kurulu ve çalışıyor olmalıdır.

## Sistemi Başlatma
Proje dizininde (dosyaların bulunduğu klasör) bir terminal açın ve aşağıdaki komutu çalıştırın:

```bash
docker-compose up --build
```

**Not:** Eğer terminalde interaktif menüyü kullanamıyorsanız (tuşlara bastığınızda tepki vermiyorsa), uygulamayı şu şekilde çalıştırın:
1. Önce veritabanını başlatın: `docker-compose up -d db`
2. Uygulamayı interaktif modda açın: `docker-compose run --rm app`

## Menü Kullanımı
Uygulama başladığında ve veritabanına bağlandığında aşağıdaki gibi bir menü göreceksiniz:

```
--- SIS MENU ---
1. Ekle (Öğrenci Ekleme)
2. Sil (Öğrenci Silme)
3. Listele (Tüm Öğrencileri Listeleme)
4. Not Guncelle (Not Güncelleme)
5. Cikis
```

### 1. Öğrenci Ekleme
Menüden `1` seçeneğini seçin. Sırasıyla şu bilgileri girin:
- **Ad:** Öğrencinin adı (Tek kelime, boşluksuz giriniz)
- **Soyad:** Öğrencinin soyadı
- **No:** Öğrenci numarası (Tam sayı)
- **Not:** Öğrencinin not ortalaması (Ondalıklı sayı olabilir, örn: 85.5)

### 2. Öğrenci Silme
Menüden `2` seçeneğini seçin.
- **Silinecek No:** Silmek istediğiniz öğrencinin numarasını girin.

### 3. Öğrencileri Listeleme
Menüden `3` seçeneğini seçin.
- Veritabanındaki kayıtlı tüm öğrencilerin listesi ekrana yazdırılacaktır.

### 4. Not Güncelleme
Menüden `4` seçeneğini seçin.
- **No:** Notunu değiştirmek istediğiniz öğrencinin numarası.
- **Yeni Not:** Yeni not değeri.

### 5. Çıkış
Programdan ve konteynerden çıkmak için `5` tuşuna basın.

## Sorun Giderme
- **"Baglanti Basarisiz" Hatası:** Veritabanı henüz hazır olmayabilir. Uygulama otomatik olarak kapanırsa tekrar `docker-compose up` komutunu deneyin veya `docker-compose up -d db` ile veritabanını önden başlatıp 10 saniye bekleyin.
