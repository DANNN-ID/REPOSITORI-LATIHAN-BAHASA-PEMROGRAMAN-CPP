#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	int noRekening, pinRekening;
	int saldo = 10000;
	int tambahTabungan;
	int ambilTabungan;
	int simpananWajibBank;
	int pilihTransaksi;
	char backToLogin, backToTransaksi, backToTT, backToAT;
		
		backToLogin:
		cout << "|----------------|\n   BANK SYARIAH \n|----------------|\n\n";
		cout << "Selamat datang di Bank Syariah. Silahkan masukan No.Rekening dan PIN untu melakukan Transaksi !\n\n";
		cout << "O> No.Rekening 	:  ";
		cin >> noRekening;
		cout << "O> PIN		:  ";
		cin >> pinRekening;
		cout << "\n";
		system("CLS");
	
			if(noRekening == 15637981 and pinRekening == 1234) {
				backToTransaksi:
				cout << "Selamat datang !. Silahkan pilih Transaksi yang ingin anda proses.\n\n";
				
				cout << "Jumlah saldo anda : " << saldo;
				cout << "\n\n";
				
				cout << "O> 1. Tambah Tabungan\n";
				cout << "O> 2. Ambil Tabungan\n";
				cout << "O> 3. Keluar\n\n";
				
				cout << "Masukan kode transaksi : ";
				cin >> pilihTransaksi;
				cout << "\n";
				
					if(pilihTransaksi == 1) {
						backToTT:
						cout << "Masukan nominal tabungan anda : ";
						cin >> tambahTabungan;
						cout << "\n";
						
						if(tambahTabungan < 50000) {
							cout << "Mohon maaf anda tidak bisa menabung, Karena batas minimal menabung senilai Rp.50.000\n\n";
						
							cout << "Ingin mengulanginya ? (Y/N) : ";
							cin >> backToTT;
							cout << "\n";
							if(backToTT == 'y' || backToTT == 'Y') {
								goto backToTT;
							}	
						}
						else{
							saldo = saldo + tambahTabungan;
							cout << "Berhasil menambah tabungan, Saldo anda saat ini senilai Rp." << saldo;
							cout << "\n\n";	
						}
					}
					else if(pilihTransaksi == 2) {
						backToAT:
						cout << "Masukan nominal yang ingin anda ambil : ";
						cin >> ambilTabungan;
						cout << "\n";

						simpananWajibBank = saldo - ambilTabungan;
						
						if(ambilTabungan < 50000) {
							cout << "Mohon maaf anda tidak bisa mengambil uang tabungan anda. Karena minimal pengambilan uang sebesar Rp.50.000\n\n";
							
							cout << "Ingin mengulanginya ? (Y/N) : ";
							cin >> backToAT;
							cout << "\n";
								
							if(backToAT == 'y' || backToAT == 'Y') {
								goto backToAT;
							}
						}
						else{
							if(ambilTabungan > saldo) {
								cout << "Mohon maaf saldo anda tidak mencukupi !.\n\n";
								
								cout << "Ingin mengulanginya ? (Y/N) : ";
								cin >> backToAT;
								cout << "\n";
								
								if(backToAT == 'y' || backToAT == 'Y') {
									goto backToAT;
								}
							}
							else if(simpananWajibBank < 10000) {
								cout << "Mohon maaf anda tidak bisa mengambil uang tabungan anda, Karena harus ada simpanan wajib di bank sebesar Rp.10.000\n\n";
								
								cout << "Ingin mengulanginya ? (Y/N) : ";
								cin >> backToAT;
								cout << "\n";
								
								if(backToAT == 'y' || backToAT == 'Y') {
									goto backToAT;
								}
							}
							else{
								saldo = saldo - ambilTabungan;
								cout << "Berhasil mengambil uang, Sisa saldo anda saat ini : Rp." << saldo;
								cout << "\n\n";
							}
						}
						
					}
					else if(pilihTransaksi == 3) {
						cout << "Terimakasih telah melakukan Transaksi";
						exit(0);
					}
					
					cout << "Ingin melakukan transaksi lagi ? (Y/N) : ";
					cin >> backToTransaksi;
					if(backToTransaksi = 'y' || backToTransaksi == 'Y') {
						system("CLS");					
						goto backToTransaksi;
					}
			}
			else{
				cout << "Mohon maaf. Harap masukan kembali No.Rekening dan PIN dengan benar !\n\n";
				
				cout << "Ingin mengulang kembali ? (Y/N) : ";
				cin >> backToLogin;
				cout << "\n";
				if(backToLogin == 'y' || backToLogin == 'Y') {
					system("CLS");
					goto backToLogin;
				}
				else{
					system("CLS");
					cout << "Terimakasih telah datang di bank kami.";
					exit(0);
				}
			}
}
