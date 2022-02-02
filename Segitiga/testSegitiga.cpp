#include <stdio.h> // scanF printF
#include <conio.h> // cin cout
#include <iostream> //menangani error

using namespace std; //ada beberapa library yang tidak ada di borland c++
int main()
{
	int alas, tinggi, hasil;
	
	cout<<"Masukkan Alas : ";
	cin>>alas;
	cout<<"Masukkan Tinggi : ";
	cin>>tinggi;
	hasil = 0.5 * alas * tinggi;
	cout<<"Luasnya adalah : " << hasil << endl;
}
