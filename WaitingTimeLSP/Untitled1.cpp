#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

int main() {
	
	int owo;
	
	while (cout << "Input : " && !(cin >> owo)) {
		system("CLS");
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}	
	
	cout << "Hehe";
	
}
