#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	string hari[] = {"", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
	int x, y;
	cout << "Masukkan angka : ";
	cin >> x;
	if (x == 0 || x > 7 ) {
		cout << "Masukan anda salah.";
	} else if (x != 0) {
		cout << hari[x];
	}
}
