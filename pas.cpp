#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int p,m,g,c;
char u;
int angka_1,angka_2,hasil;

void aplikasiKalkulator()
{		
	ulang: 
	
	system("cls");
	cout<<" ----------------------------- "<<endl;
	cout<<"|                             |"<<endl;
	cout<<"|        Selamat Datang       |"<<endl;
	cout<<"|    Di aplikasi kalkulator   |"<<endl;
	cout<<"|                             |"<<endl;
	cout<<" ----------------------------- "<<endl;
	
	cout<<"     -- Pilih Fiturnya --"<<endl;
	cout<<"-- Tekan Angka Pada Keyboard --"<<endl<<endl;
	cout<<"   1. Tambah"<<endl;
	cout<<"   2. Kurang"<<endl;
	cout<<"   3. Kali"<<endl;
	cout<<"   4. Bagi"<<endl;
	cout<<"   0. Exit"<<endl<<endl;
	
	//	Input nilai
	cout<<"Masukan angka pertama : "; cin>>angka_1;
	cout<<"Masukan angka kedua : "; cin>>angka_2;	
	
	if(p == 1)
	{
		hasil = angka_1 + angka_2;
		cout<<"Hasilnya adalah "<<hasil<<endl<<endl;
		cout<<"Apakah ingin menggunakan kembali (y/n) : "; cin>>u;
		if(u == 'y' || u == 'Y')
		{
			goto ulang;
		}
		else {
			cout<<"Terima kasih sudah menggunakan aplikasi ini !!!";
		}
	}
}

void gameGBK()
{
	ulangi:
	system("cls");
	cout<<" ----------------------------- "<<endl;
	cout<<"|                             |"<<endl;
	cout<<"|          Permainan          |"<<endl;
	cout<<"|     Gunting Batu Kertas     |"<<endl;
	cout<<"|                             |"<<endl;
	cout<<" ----------------------------- "<<endl;
	
	cout<<"Aturannya tekan 0/1/2"<<endl;
	cout<<"0 adalah batu"<<endl;
	cout<<"1 adalah gunting"<<endl;
	cout<<"2 adalah kertas"<<endl<<endl;
	
	c = rand() % 3;
	
	cout<<"Anda "; cin>>g;
	cout<<"Com "<<c<<endl<<endl;
	
	if((g == 0 && c == 1) || (g == 0 && c == 2) || (g == 2 && c == 0))
	{
		cout<<"Anda Menang"<<endl;
	}
	else if((g == 1 && c == 1) || (g == 2 && c == 2) || (g == 0 && c == 0))
	{
		cout<<"Draw"<<endl;
	}
	else if((g == 1 && c == 0) || (g == 2 && c == 1) || (g == 0 && c == 2))
	{
		cout<<"Anda Kalah"<<endl;
	}
	
	cout<<"Ulangi permainan (y/n) : "; cin>>u;
	if(u == 'y' || u == 'Y')
	{
		goto ulangi;
	}
	else if(p == 0)
	{
		main();
		return 0;
	}
	else {
		cout<<endl;
		cout<<"Terima kasih sudah bermain !!!";
	} 
}

int main()
{	
	ulang:
		
	system("mode con cols=31 lines=30");
	system("cls");	
	cout<<" ----------------------------- "<<endl;
	cout<<"|                             |"<<endl;
	cout<<"|     Aplikasi Pemilihan      |"<<endl;
	cout<<"|       SMK NUSNATARA 1       |"<<endl;
	cout<<"|          TANGERANG          |"<<endl;
	cout<<"|                             |"<<endl;
	cout<<" ----------------------------- "<<endl;
	
	cout<<"     -- Pilih Fiturnya --"<<endl;
	cout<<"-- Tekan Angka Pada Keyboard --"<<endl<<endl;
	cout<<"   1. Aplikasi Kalkulator"<<endl;
	cout<<"   2. Game Gunting Batu Kertas"<<endl;
	cout<<"   0. Exit"<<endl<<endl;
	
	//	Output dan Input Pilih
	cout<<"Pilih Fitur : "; cin>>p;
	cout<<endl;
	
	
	if(p == 1)
	{
		aplikasiKalkulator();
		return 0;
	}
	else if(p == 2)
	{
		gameGBK();
		return 0;
	}
	else if(p == 0)
	{
		cout<<"Terima kasih sudah menggunakan aplikasi ini !!!";
	}
	else {		
		cout<<"Pilihan Tidak Tersedia, apakah ingin mengulang(y/n) : "; cin>>u;
		if(u == 'y' || u == 'Y')
		{
			goto ulang;	
		}
		else {
			cout<<"Terima kasih sudah menggunakan aplikasi ini !!!";
		}
	}
}


