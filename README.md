# SoalShift_modul3_F14

--1

Buatlah program C yang bisa menghitung faktorial secara parallel lalu menampilkan hasilnya secara berurutan

[soa1.c](https://github.com/sisop2019F14/SoalShift_modul3_F14/blob/master/no1/soal1.c)


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

# Menggunakan thread, socket, shared memory

[soal2](https://github.com/sisop2019F14/SoalShift_modul3_F14/tree/master/no2)


--3

Buatlah suatu program C untuk menggambarkan kehidupan agmal dan iraj

[soal3.c](https://github.com/sisop2019F14/SoalShift_modul3_F14/blob/master/no3/true3.c)

--4

Buatlah sebuah program C dimana dapat menyimpan list proses yang sedang berjalan (ps -aux) maksimal 10 list proses. Dimana awalnya list proses disimpan dalam di 2 file ekstensi .txt yaitu  SimpanProses1.txt di direktori /home/Document/FolderProses1 dan SimpanProses2.txt di direktori /home/Document/FolderProses2 , setelah itu masing2 file di  kompres zip dengan format nama file KompresProses1.zip dan KompresProses2.zip dan file SimpanProses1.txt dan SimpanProses2.txt akan otomatis terhapus, setelah itu program akan menunggu selama 15 detik lalu program akan mengekstrak kembali file KompresProses1.zip dan KompresProses2.zip. 

[soal4.c](https://github.com/sisop2019F14/SoalShift_modul3_F14/blob/master/no4/no4.c)

--5

Buatlah permainan untuk adik Jiwang menggunakan bahasa C

[soal5](https://github.com/sisop2019F14/SoalShift_modul3_F14/tree/master/no5)
