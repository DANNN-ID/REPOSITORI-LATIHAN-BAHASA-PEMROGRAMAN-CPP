#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	//int n;
	//int u;
	//int bilangan[] = {};
	//int x;
	
	//cout << "Masukkan Banyak Nilai : ";
	//cin >> n;
	
	//for (int a = 1; a <= n; a++){
		//// int bilangan[n];
		
		//cout << "Masukkan nilai ke - " << a << " : ";
		//cin >> bilangan[u];
		//x = bilangan[u];
	//}
	//cout << "\n";
	//cout << "data nilai siswa : \n";
	//cout << bilangan[x];
	
	int banyak, b, a, tmp;
	cout << "Masukkan Banyak Nilai : ";
	cin >> banyak;
	int angka[banyak];
	
	//isi
	for(a=0; a<banyak; a++){
		cout << "Masukkan nilai ke - "<<a+1<<" : ";
		cin >> angka[a];
	}
	
	//data nilai
	cout << "\n";
	cout << "Data Nilai Siswa : \n";
	for(a=0; a<banyak; a++){
		cout << angka[a] << " ";
	}
	
	//proses pengurutan dari terkecil ke terbesar
	cout << "\ndata 3 nilai terendah : \n";
	for (a=0; a<banyak; a++){ //angka[0] > [1]
		for(b=a+1; b<banyak+1; b++){
			if(angka[a]>angka[b]){
				tmp = angka[a];
				angka[a] = angka[b];
				angka[b] = tmp;
			} else {
				
			}
		}
	}
}
