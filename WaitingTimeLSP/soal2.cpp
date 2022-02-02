#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int uts , uas , hasil;
	
	cout<<"Masukkan Nilai UTS : ";
	cin>>uts;
	
	cout<<"\nMasukkan Nilai UAS : ";
	cin>>uas;
	
	hasil = (uts+uas)/2;
	
	cout<<"\n"<<hasil<<"\n";
	
	if(hasil>=80){
		cout<<"Selamat Kamu Dapat A";
	}else if(hasil<80 && hasil>=70){
		cout<<"Selamat Kamu Dapat B";
	}else if(hasil<70){
		cout<<"Selamat Kamu Dapat C";
	}
	
	getch();
}
