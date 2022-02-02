#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(){
	int pin=1234 , cekPin , saldoTambah , Total=50000 , pilih , ambil , saldoAmbil;
	char a, b , c , d , go;
	a:
		system("CLS");
	cout<<"Masukkan Pin : ";
	cin>>cekPin;
	
	if(cekPin==pin){
		b:
		system("CLS");
		cout<<"Saldo Anda "<<Total<<"\n";
		cout<<"1. Ambil Uang \n";
		cout<<"2. Setor Uang \n";
		cout<<"3. Keluar \n";
		cout<<"Pilih Menu ";
		cin>>pilih;
		
		switch(pilih){
			case 1:
			d:
			system("CLS");
			cout<<"Masukkan Nominal : ";
			cin>>ambil;
			
			saldoAmbil = Total - ambil;
			if(ambil<50000){
				cout<<"Minimal Penarikan Rp. 50.000 \n \n";
				cout<<"Transaksi Lain? [Y/N] "; cin>>go;
				if(go=='y' || go=='Y'){
					goto b;
				}
			}else{
				if(ambil>Total){
					cout<<"Saldo Tidak Cukup \n \n";
					cout<<"Transaksi Lain? [Y/N] "; cin>>go;
					if(go=='y' || go=='Y'){
						goto b;
					}
				}else if(saldoAmbil<50000){
					cout<<"Saldo Tidak Cukup \n \n";
					cout<<"Transaksi Lain? [Y/N] "; cin>>go;
					if(go=='y' || go=='Y'){
						goto b;
					}
				}else{
					Total -= ambil;
					cout<<Total<<"\n";
					cout<<"Transaksi Lain? [Y/N] "; cin>>go;
					if(go=='y' || go=='Y'){
						goto b;
					}
				}
			}
				cout<<"Transaksi Lain? [Y/N] "; cin>>go;
				if(go=='y' || go=='Y'){
					goto b;
				}
			break;
			
			case 2:
			c:
			system("CLS");
			cout<<"Masukkan Nominal : ";
			cin>>saldoTambah;
			if(saldoTambah<10000){
				cout<<"Minimal 10k \n \n";
				cout<<"Ulangi? [Y/N] "; cin>>go;
				if(go=='y' || go=='Y'){
					goto c;
				}
			}else{
				Total += saldoTambah;
				cout<<"Saldo Anda Sekarang "<<Total<<"\n";
				cout<<"Transaksi Lain?? [Y/N] \n"; cin>>go;
				if(go=='y' || go=='Y'){
					goto b;
				}else{
					cout<<"Terima Kasih";
				}
			}
			break;
			
			case 3:
			cout<<"TerimaKasih";
			break;
		default:
			cout<<"Maaf Pilihan Tidak Ada";
		}
		
	}else{
		cout<<"Pin Anda Salah \n";
		cout<<"Ulangi? [Y/N]"; cin>>go;
		if(go=='y' || go=='Y'){
			goto a;
		}
	}
}
