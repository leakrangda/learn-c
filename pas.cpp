#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <time.h>

using namespace std;

// berbaha ini global variable!!, ganti jadi local aja
//int p,m,g,c;
//char u;
//int angka_1,angka_2,hasil;

void aplikasiKalkulator(){
	int angka_1,angka_2,hasil;
	int p,m,g,c;
	char u;

	bool running = true;
	
	while(running){
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
		cout<<"perintah:";
		cin>>p;

		//	Input nilai
		cout<<"Masukan angka pertama : "; cin>>angka_1;
		cout<<"Masukan angka kedua : "; cin>>angka_2;	

		swich(p){
			case 1:
				hasil = angka_1 + angka_2;
				cout<<"Hasilnya adalah "<<hasil<<endl<<endl;
				cout<<"Apakah ingin menggunakan kembali (y/n) : "; cin>>u;
				if(u == 'y' || u == 'Y'){
					//teruskan looping
					continue;
				}
				else {
					cout<<"Terima kasih sudah menggunakan aplikasi ini !!!";
					running = false;
				}
				break;
			case 2: // tambah sendiri
				break;
			case 3: // tambah sendiri
				break;
			case 4: // tambah sendiri
				break;
			default:
				cout<<"anda memasukan input yang salah!"<<endl;
		}
	}
}

void gameGBK(){
	int angka_1,angka_2,hasil;
	int p,m,g,c;
	bool running = false;
	
	while(running){
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
		if(u == 'y' || u == 'Y'){
			continue;
		}else{
			cout<<endl;
			cout<<"Terima kasih sudah bermain !!!";
		}
	}
	return 0;
}

int main()
{	
	bool runing = true;
	int input;
	
	while(running){
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
		cout<<"Pilih Fitur : "; cin>>input;
		cout<<endl;


		switch(input){
			case 0:
				cout<<"Terima kasih sudah menggunakan aplikasi ini !!!";
				running = false;
				break;
			case 1:
				aplikasiKalkulator();
				break;
			case 2:
				gameGBK();
				break;
			default:
				int u;
				cout<<"Pilihan Tidak Tersedia, apakah ingin mengulang(y/n) : "; cin>>u;
				if(u == 'y' || u == 'Y')
				{
					continue;	
				}else{
					cout<<"Terima kasih sudah menggunakan aplikasi ini !!!";
					running = false;
				}
		}
	}
	return 0;
}
