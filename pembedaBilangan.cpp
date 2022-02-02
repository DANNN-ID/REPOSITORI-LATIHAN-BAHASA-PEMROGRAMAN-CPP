#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int angka;
	cout << "Angka : ";
	cin >> angka;
	
	if (angka > 0) {
		cout << angka << " adalah bilangan positif";
	} 
	else if (angka < 0) {
		cout << angka << " adalah bilangan negatif";
	} 
	else if (angka == 0){
		cout << angka << " adalah bilangan pembeda";
	} 
	else {
		cout << "Maaf, " << angka << " bukan angka";
	}
	getch();
}
