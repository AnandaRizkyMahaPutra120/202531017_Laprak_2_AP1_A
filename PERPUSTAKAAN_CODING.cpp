#include <iostream>
using namespace std;

int main() {
	int HariTerlambat;
	int DendaPerHari = 0;
	int TotalDenda = 0;

    cout << "Berapa Hari anda terlambat mengumpulkan buku :";
    cin >> HariTerlambat;

    if (HariTerlambat == 0) {
	DendaPerHari = 0;
    } else if (HariTerlambat >= 1 && HariTerlambat <= 3)  {
        DendaPerHari = 2000;
    } else if (HariTerlambat >= 4 && HariTerlambat <= 7) {
    	 DendaPerHari = 5000;
    } else if (HariTerlambat >= 8 ) {
    	 DendaPerHari = 10000;
    } 
    //Hitung total denda yang didapatkan
    TotalDenda = HariTerlambat * DendaPerHari;

		cout << "\nBerapa hari anda terlambat mengumpulkan :" << HariTerlambat << " hari"<< endl;
		cout << "Denda yang anda dapatkan : " << "Rp. "<< TotalDenda << "-" << endl;
    	
    return 0;

}
    
