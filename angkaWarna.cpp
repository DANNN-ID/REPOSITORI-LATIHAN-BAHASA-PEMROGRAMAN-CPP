#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int warna;
	cout << "Angka : ";
	cin >> warna;
	if (warna == 0) {
		cout << "Merah";
	} else if (warna == 1) {
		cout << "Putih";
	} else if (warna == 2) {
		cout << "Biru";
	} else if (warna == 3) {
		cout << "Hijau";
	} else if (warna == 4) {
		cout << "Kuning";
	} else {
		cout << "Angka yang anda masukkan salah";
	}
	getch();
}
