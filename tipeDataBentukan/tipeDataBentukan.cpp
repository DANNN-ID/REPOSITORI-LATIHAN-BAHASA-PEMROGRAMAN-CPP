#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int bulan;
	
	cout << "Masukkan Nomor Bulan (1 - 12) : ";
	cin >> bulan;
	if (bulan == 1){
		cout << "Januari";
	} else if (bulan == 2){
		cout << "Februari";	
	} else if (bulan == 3){
		cout << "Maret";	
	} else if (bulan == 4){
		cout << "April";	
	} else if (bulan == 5){
		cout << "Mei";
	} else if (bulan == 6){
		cout << "Juni";
	} else if (bulan == 7){
		cout << "Juli";
	} else if (bulan == 8){
		cout << "Agustus";
	} else if (bulan == 9){
		cout << "September";
	} else if (bulan == 10){
		cout << "Oktober";
	} else if (bulan == 11){
		cout << "November";
	} else if (bulan == 12){
		cout << "Desember";
	} else {
		cout << "Hanya Bisa angka (1 - 12)";
	}
	getch();
}
