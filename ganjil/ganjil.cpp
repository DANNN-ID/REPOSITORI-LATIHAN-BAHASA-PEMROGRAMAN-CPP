#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	//for (int a = 1; a < 30; a++){ //LOOPING FOR ASLI
	for (int a = 30; a > 0; a--){ //looping for urut besar
		if (a%2 != 0){
			cout << " "<<a<<" ";
		}		
	}
}
