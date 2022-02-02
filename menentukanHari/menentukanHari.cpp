#include <conio.h>
#include <iostream>

using namespace std;
int main()
{	
	int pilihan;

	cout << "Pilih hari menggunakan angka : ";
	cin >> pilihan;
	
	string hari[] = {"", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
	if (pilihan > 7 || pilihan < 1){
		cout << "Raiso Bos";
	} else {
		cout << hari[pilihan] << endl;
	}
}
