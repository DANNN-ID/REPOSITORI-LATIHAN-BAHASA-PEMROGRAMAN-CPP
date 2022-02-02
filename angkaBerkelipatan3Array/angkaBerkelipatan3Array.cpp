#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
	int angka = 50;
	int angkas[angka];
	
	for(int x = 1; x<=angka; x++){
		if(x%3 == 0){
			cout << "Angkanya adalah : " << x << endl;
		}
	}
	
}
