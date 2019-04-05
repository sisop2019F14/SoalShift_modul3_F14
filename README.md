# SoalShift_modul3_F14

--1

Buatlah program C yang bisa menghitung faktorial secara parallel lalu menampilkan hasilnya secara berurutan

Jawaban:

[soal1.c](https://github.com/sisop2019F14/SoalShift_modul3_F14/blob/master/no1/soal1.c)

- Melakukan sorting input (Bubble sort)

- Membuat thread untuk menghitung factorial

- Menghitung factorial


--2

Buatlah program C dengan spesifikasi sebagai berikut:

-Terdapat 2 server: server penjual dan server pembeli

-1 server hanya bisa terkoneksi dengan 1 client

-Server penjual dan server pembeli memiliki stok barang yang selalu sama

-Client yang terkoneksi ke server penjual hanya bisa menambah stok

  +Cara menambah stok: client yang terkoneksi ke server penjual mengirim string “tambah” ke server lalu stok bertambah 1

Client yang terkoneksi ke server pembeli hanya bisa mengurangi stok

  +Cara mengurangi stok: client yang terkoneksi ke server pembeli mengirim string “beli” ke server lalu stok berkurang 1

-Server pembeli akan mengirimkan info ke client yang terhubung dengannya apakah transaksi berhasil atau tidak berdasarkan ketersediaan stok

-Jika stok habis maka client yang terkoneksi ke server pembeli akan mencetak “transaksi gagal”

-Jika stok masih ada maka client yang terkoneksi ke server pembeli akan mencetak “transaksi berhasil”

-Server penjual akan mencetak stok saat ini setiap 5 detik sekali

-Menggunakan thread, socket, shared memory

Jawaban:

[soal2](https://github.com/sisop2019F14/SoalShift_modul3_F14/tree/master/no2)

- Membuat source code server beli: membuat socket, membuat variabel shared memory stok, membuat thread untuk menjalankan transaksi beli.

- Membuat source code server jual: membuat socket, membuat variabel shared memory stok, membuat thread untuk menjalankan transaksi jual.

- Membuat source code client beli: membuat socket. lalu membuat koneksi ke server.

- Membuat source code client jaul: membuat socket. lalu membuat koneksi ke server.

--3

Buatlah suatu program C untuk menggambarkan kehidupan agmal dan iraj

Jawaban:

[soal3.c](https://github.com/sisop2019F14/SoalShift_modul3_F14/blob/master/no3/true3.c)

- Membuat thread untuk menjalankan gaya hidup Iraj

- Membuat thread untuk menjalankan gaya hidup Agmal


--4

Buatlah sebuah program C dimana dapat menyimpan list proses yang sedang berjalan (ps -aux) maksimal 10 list proses. Dimana awalnya list proses disimpan dalam di 2 file ekstensi .txt yaitu  SimpanProses1.txt di direktori /home/Document/FolderProses1 dan SimpanProses2.txt di direktori /home/Document/FolderProses2 , setelah itu masing2 file di  kompres zip dengan format nama file KompresProses1.zip dan KompresProses2.zip dan file SimpanProses1.txt dan SimpanProses2.txt akan otomatis terhapus, setelah itu program akan menunggu selama 15 detik lalu program akan mengekstrak kembali file KompresProses1.zip dan KompresProses2.zip. 

Jawaban:

[soal4.c](https://github.com/sisop2019F14/SoalShift_modul3_F14/blob/master/no4/no4.c)

- Buat thread untuk process 1 

- Buat thread untuk process 2

- lakukan pembuatan file Zip dan hapus file lama

- sleep

- Menampilkan pesan

- lakukan extract


--5

Buatlah permainan untuk adik Jiwang menggunakan bahasa C

Jawaban:

[soal5](https://github.com/sisop2019F14/SoalShift_modul3_F14/tree/master/no5)

- Buat shared memory shopstock

- melakukan input nama monster

- buat thread untuk menjalankan game: display game, hunger, hygiene, health dan bath

- Buat shared memory shopstock

- Buat thread untuk menjalankan shop

