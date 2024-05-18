# Date CLI

Date CLI adalah program sederhana berbasis terminal yang ditulis dalam bahasa C. Program ini menampilkan tanggal saat ini dan memungkinkan pengguna untuk beralih ke tanggal sebelumnya atau selanjutnya menggunakan pustaka `ncurses`.

## Fitur
- Menampilkan tanggal saat ini.
- Beralih ke tanggal sebelumnya atau selanjutnya dengan input dari pengguna.

## Prasyarat
Pastikan Anda telah menginstal paket-paket berikut sebelum mengompilasi program ini:
- `gcc` atau `clang`
- `ncurses`

### Instalasi di Termux
1. Update dan upgrade paket-paket yang ada:
    ```sh
    pkg update && pkg upgrade
    ```

2. Instal `ncurses`:
    ```sh
    pkg install ncurses
    ```

3. Instal `clang` (jika belum terinstal):
    ```sh
    pkg install clang
    ```

### Instalasi di Sistem Berbasis Debian (Ubuntu, Debian, dll.)
1. Update dan upgrade paket-paket yang ada:
    ```sh
    sudo apt-get update && sudo apt-get upgrade
    ```

2. Instal `ncurses`:
    ```sh
    sudo apt-get install libncurses5-dev libncursesw5-dev
    ```

3. Instal `gcc` (jika belum terinstal):
    ```sh
    sudo apt-get install gcc
    ```

## Kompilasi dan Menjalankan Program
1. Kloning repositori ini atau salin kode program ke file `date-cli.c`.
2. Kompilasi program menggunakan `clang` atau `gcc`:
    ```sh
    clang date-cli.c -o date -lncurses
    ```
    atau
    ```sh
    gcc date-cli.c -o date -lncurses
    ```

3. Jalankan program:
    ```sh
    ./date
    ```
## Penggunaan
- Tekan `n` untuk beralih ke tanggal selanjutnya.
- Tekan `p` untuk beralih ke tanggal sebelumnya.
- Tekan `q` untuk keluar dari program.

## Hasil Program 
[Alt Text](img.jpg)
