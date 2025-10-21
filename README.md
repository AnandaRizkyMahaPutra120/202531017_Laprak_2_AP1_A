# 202531017_Laprak_2_AP1_A
#include <iostream>
•	Baris ini merupakan suatu pustaka untuk membaca data pengguna (cin) dan menampilkan hasil ke layar (cout)

using namespace std;
•	agar dapat memudahkan penulisan di depan cin, cout, dan elemen lain, kita menggunakan using namespace std;, tujuannya untuk tidak ditulis berulang kali setiap menginput elemen std.

int main() {
•	Ibaratnya pintu dimana program akan segera dimulai dari sini.

    int HariTerlambat;
    int DendaPerHari = 0;
    int TotalDenda = 0;
•	int merupakan sebuah tipe data yang berfungsi untuk menyimpan angka bulat, yang dideklarasikan sebagai berikut :
-	int HariTerlambat : merupakan sebuah variable yang tidak memiliki nilai awal. Variable ini digunakan untuk menyimpan berapa hari keterlambatannya mengumpulkan buku
-	int DendaPerHari : Merupakan sebuah variable yang nilai awalnya ialah 0. Variable ini digunakan untuk menyimpan denda dalam setiap hari terlambat mengumpulkan buku
-	int TotalDenda : Merupakan sebuah variable yang nilai awalnya 0. Variabel ini digunakan untuk menyimpan total denda yang akan dibayarkan dalam keterlambatannya mengumpulkan buku.

    cout << "Berapa Hari anda terlambat mengumpulkan buku :";
    cin >> HariTerlambat;
•	Program menampilkan sebuah pertanyaan kepada pengguna untuk menanyakan jumlah hari keterlambatan yang dituliskan dengan cout dan menggunakan (“ ”). Setelah pengguna memasukkan jawabannya, nilai tersebut akan dibaca dan disimpan ke dalam variabel bernama HariTerlambat yang dituliskan dalam cin

    if (HariTerlambat == 0) {
        DendaPerHari = 0;
    } else if (HariTerlambat >= 1 && HariTerlambat <= 3)  {
        DendaPerHari = 2000;
    } else if (HariTerlambat >= 4 && HariTerlambat <= 7) {
        DendaPerHari = 5000;
    } else if (HariTerlambat >= 8 ) {
        DendaPerHari = 10000;
    } 
•	Struktur percabangan (if-else) untuk dapat mengetahui total denda yang akan dibayarkan akibat keterlambatan pengumpulan, berikut rincian pembayaran dalam satuan hari:

0 hari = tidak didenda.
1–3 hari = Rp 2000/hari.
4–7 hari = Rp 5000/hari.
8 hari ke atas =   Rp 10000/hari.

    //Hitung total denda yang didapatkan
    TotalDenda = HariTerlambat * DendaPerHari;
•	Menghitung total denda dengan mengalikan jumlah hari keterlambatan dan denda per hari agar mengetahui total harga yang akan dibayarkan.

    cout << "\nBerapa hari anda terlambat mengumpulkan :" << HariTerlambat << " hari"<< endl;
    cout << "Denda yang anda dapatkan : " << "Rp. "<< TotalDenda << "-" << endl;
•	Menampilkan hasil akhir yang akan ditampilkan di layar jika sudah di run

    return 0;
}
•	Mengakhiri fungsi main() dan menandakan bahwa program selesai, jika berhasil di run dan hasil yang dihasilkan telah benar, Artinya program sudah selesai dan dapat digunakan.
