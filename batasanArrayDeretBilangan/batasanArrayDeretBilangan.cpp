#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
	int angka[7];
	int temp;
	for(int a=0; a<7; a++){
		cout << "Masukkan nilai ke-" << a+1 << " : ";
		cin >> angka[a];
	}
	cout << endl;
	
	for(int a=0; a<7; a++){
		cout << angka[a] << " ";
	}
	
	for (int x=0; x<7; x++ ){
		for (int j=7-1; j>=1; j--){
			if(angka[j-1] > angka[j]){
					temp = angka[j-1];
					angka[j-1] = angka[j];
					angka[j] = temp;
				}
		}
	}
	cout << endl << endl;
	cout << "Setelah Diurutkan : " << endl;
	for (int x=0; x<7; x++){
		cout << angka[x] << " ";
	}
	
//	int temp, data[5]={45, 11, 55, 27, 39};
//	cout << "Data Sebelum diurutkan : ";
//	for (int i=0; i<5; i++){
//		cout << data[i] << " ";
//		
//		for (int i=0; i<5; i++){
//			for (int j=4; j>=1; j--){
//				if(data[j-1] > data[j]){
//					temp = data[j-1];
//					data[j-1] = data[j];
//					data[j] = temp;
//				}
//			}
//		}		
//	}
//	cout << endl;
//	cout << "Setelah Diurutkan : ";
//	for (int i=0; i<5; i++){
//		cout << " " << data[i];
//	}
}
