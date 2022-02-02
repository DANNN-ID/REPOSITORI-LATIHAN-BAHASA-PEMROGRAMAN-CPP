#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

int main() {
	int ujianTengahSemester;
	int ujianAkhirSemester;
	int rataRata;
	
	while(cout << "Masukan nilai Ujian Tengah Semester 	:  " && !(cin >> ujianTengahSemester)) {
		cout << "tidak boleh huruf !\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	while(cout << "Masukan nilai Ujian Akhir Semester 	:  " && !(cin >> ujianAkhirSemester)){
		cout << "tidak boleh huruf !\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	{
		rataRata = (ujianTengahSemester + ujianAkhirSemester) / 2;
		cout << "O> (" << ujianTengahSemester << " + " << ujianAkhirSemester << ") / 2";
		cout << "\n\n";
		cout << "O> Hasil : " << rataRata;
		cout << "\n\n";
		
		if(rataRata >= 80) {
			cout << "Selamat anda mendapat Grade nilai A";
		}
		else if(rataRata < 80 && rataRata >= 70) {
			cout << "Selamat anda mendapat Grade nilai B";
		}
		else if(rataRata < 70) {
			cout << "Anda mendapatkan Grade nilai C, Tingkatkan lagi belajarnya !";
		}	
	}
}
