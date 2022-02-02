#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int hasil=1, faktor;
	
	cout << "Angka : ";
	cin >> faktor;
	
	for (int a = faktor; a >= 1; a--) {
		
		hasil = hasil * a;
		
	}
	
	cout << hasil;
	
}
