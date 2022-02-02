#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int angka;
	int pilihProgram;
	
	cout << "|------------------------------------------------------------------| \n";
	cout << "|	 1. Program menentukan bilangan ganjil dan genap 	   | \n";
	cout << "|	 2. Program menentukan bilangan positif dan negatif 	   | \n";
	cout << "|	 3. Program menentukan bilangan prima 			   | \n";
	cout << "|------------------------------------------------------------------| \n\n";
	cout << " ! Pilih Program : ";
	
	cin >> pilihProgram;
	
	if(pilihProgram == 1) {
		cout << "\n #Masukan bilangan : ";
		cin >> angka;
		
		if(angka == 0) {
			cout << angka << " adalah bilangan pembeda !";
		}
		else if(angka % 2 == 0) {
			cout << angka << " adalah bilangan genap !";
		}
		else{
			cout << angka << " adalah bilangan ganjil!";
		}
	}
}
