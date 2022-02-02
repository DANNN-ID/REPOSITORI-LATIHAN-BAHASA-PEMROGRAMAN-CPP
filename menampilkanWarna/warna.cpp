#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int warna[] = {1,2,3,4};
	char code;
	cout << "Masukkan Kode Warna : ";
	cin >> code;
	
	if(code == 1){
		cout << "Merah";
	} else if (code == 2){
		cout << "Putih";
	} else if (code == 3){
		cout << "Biru";
	} else if (code == 4){
		cout << "Hijau";
	} else {
		cout << "Kode Hanya 1 - 4";
	}

//	int warna;
//	char tampil;
//	char kode2;
//	
//	tampil:
//		cout << "Pilih Nomor Warna \n";
//		cout << "================= \n";
//		cout << "0. Merah \n";
//		cout << "1. Putih \n";
//		cout << "2. Biru \n";
//		cout << "3. Hijau \n";
//		cout << "4. Kuning \n";
//		cout << "================= \n";
//		cout << "Pilih Warna : ";
//		cin >> warna;
//	if (warna == 0){
//		cout << "MERAH" << endl;
//	} else if (warna == 1){
//		cout << "PUTIH" << endl;
//	} else if (warna == 2){
//		cout << "BIRU" << endl;
//	} else if (warna == 3){
//		cout << "Hijau" << endl;
//	} else if (warna == 4){
//		cout << "Kuning" << endl;
//	} else {
//		cout << "Nomor yang anda masukkan salah" << endl;
//	}
//	return 0;
}
