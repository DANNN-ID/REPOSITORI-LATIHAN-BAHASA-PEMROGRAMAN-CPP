#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int milih;
	int jumlahUang;
	int proses;
	
	cout << "KURS MATA UANG" << endl;
	cout << "==============" << endl;
	cout << "Pilih Kurs :" << endl;
	cout << "1. USD -> IDR" << endl;
	cout << "2. Ringgit -> IDR" << endl;
	cout << "3. Dollar Singapore -> IDR" << endl;
	cout << "==============" << endl;
	
	cout << "Masukkan Pilihan : ";
	cin >> milih;
	
	if(milih == 1){
		cout << "Masukkan Jumlah Dollarnya : ";
		cin >> jumlahUang;
		
		proses = jumlahUang * 14100;
		cout << "Hasilnya Adalah : " << proses;
	} else if(milih == 2){
		cout << "Masukkan Jumlah Ringgitnya : ";
		cin >> jumlahUang;
		
		proses = jumlahUang * 2000;
		cout << "Hasilnya Adalah : " << proses;
	} else if(milih == 3){
		cout << "Masukkan Jumlah Dollar Singaporenya : ";
		cin >> jumlahUang;
		
		proses = jumlahUang * 5000;
		cout << "Hasilnya Adalah : " << proses;
	} else {
		cout << "Hanya Bisa Memilih Angka 1 - 3 Saja";
	}
}
