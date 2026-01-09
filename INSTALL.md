# Installation Guide (Kurulum Rehberi)

Bu proje **Docker** tabanlı çalışacak şekilde tasarlanmıştır. En kolay kurulum yöntemi Docker kullanmaktır.

## 1. Docker Kurulumu (Önerilen)
Sistemi çalıştırmak için bilgisayarınızda Docker'ın kurulu olması yeterlidir.

- **Windows/Mac:** [Docker Desktop](https://www.docker.com/products/docker-desktop/) uygulamasını indirip kurun.
- **Linux:** Dağıtımınızın paket yöneticisinden `docker.io` ve `docker-compose` paketlerini kurun.

Kurulumdan sonra terminalde `docker --version` yazarak çalıştığını doğrulayın.

## 2. Proje Kurulumu
1. Bu repoyu bilgisayarınıza klonlayın:
   ```bash
   git clone https://github.com/mutluyumben/SP_SIS_project.git
   cd SP_SIS_project
   ```

2. Docker ile derleyin ve başlatın:
   ```bash
   docker-compose up --build
   ```

---

## (Opsiyonel) Yerel Geliştirme Ortamı Kurulumu
Eğer Docker kullanmadan, doğrudan kendi bilgisayarınızda (Linux/WSL) derlemek isterseniz aşağıdaki bağımlılıklara ihtiyacınız vardır:

### Bağımlılıklar (Ubuntu/Debian)
```bash
sudo apt-get update
sudo apt-get install git g++ cmake libpqxx-dev -y
```

### Derleme (Build)
```bash
mkdir build
cd build
cmake ..
make
```
### Çalıştırma
Yerel çalıştırmada PostgreSQL veritabanının `localhost:5432` adresinde çalıştığından ve kod içindeki kullanıcı adı/şifre ile eşleştiğinden emin olmalısınız.
