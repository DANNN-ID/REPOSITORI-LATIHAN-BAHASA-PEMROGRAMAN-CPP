#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	int panjang;
	int lebar;
	int luas;
	
	cout << "Masukan panjang : ";
	cin >> panjang;
	cout << "Masukan lebar : ";
	cin >> lebar;
	cout << "luas : ";
	
	luas = panjang*lebar;
	
	cout << "\nHasil = " << luas;
}
