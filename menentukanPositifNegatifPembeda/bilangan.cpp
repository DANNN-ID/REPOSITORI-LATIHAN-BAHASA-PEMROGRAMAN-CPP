#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int angka;
	
	cout << "Masukkan Angka : ";
	cin >> angka;
	if (angka < 0){
		cout << angka << " Merupakan Bilangan Negatif";
	} else if (angka > 0){
		cout << angka << " Merupakan Bilangan Positif";
	} else {
		cout << angka << " Merupakan Bilangan Pembeda";
	}
}
