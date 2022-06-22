#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

string bot(){
		srand(time(0));
		
		int num=rand()%3;
		
		if (num==0){
			cout<<"batu";
		}
		else if (num==1){
			cout<<"gunting";
		}
		else if (num==2){
			cout<<"kertas";
		}
}
int main(){
	
	int num,player,bot;
	string nama,nama1;
	string batu,gunting,kertas;
	
	cout<<"Selamat Datang Di Game Suit.\n";
	cout<<"Silahkan Masukan Nama Pemain Dan Lawan.\n";
	
	cout<<"Nama Pemain: ";
	getline(cin,nama);
	
	cout<<"Nama Lawan/Bot: ";
	getline(cin,nama1);
	
	cout<<"Player Silahkan Pilih Mode Dibawah Ini.\n";
	cout<<"0. Batu.\n";
	cout<<"1. Gunting.\n";
	cout<<"2. Kertas.\n";
	cout<<"Pililah Antara Batu/Gunting/Kertas, Dengan menginputkan nomor 0/1/2: ";
	cin>>player;
	
	if (player==bot){
		cout<<"Hasil "<<nama1<<" = "<<bot<<" dan "<<"hasil "<<nama<<" = "<<player<<" Hasil= Seri."<<endl;
		
	}else if (player==0){
		if (bot==1){
			cout<<"Selamat "<<nama<<" = "<<"Batu"<<" Mengalahkan "<<nama1<<"= "<<"Gunting";
			
		}else{
			cout<<"Selamat "<<nama1<<" = "<<"Kertas"<<" Mengalahkan "<<nama<<"= "<<"Batu";
		}
	}else if (player==1){
		if (bot==2){
			cout<<"Selamat "<<nama<<" = "<<"Gunting"<<" Mengalahkan "<<nama1<<"= "<<"Kertas";
			
		}else{
			cout<<"Selamat "<<nama1<<" = "<<"Batu"<<" Mengalahkan "<<nama<<"= "<<"Gunting";
		}
	}else if (player==2){
		if (bot==0){
			cout<<"Selamat "<<nama<<" = "<<"Kertas"<<" Mengalahkan "<<nama1<<"= "<<"Batu";
			
		}else{
			cout<<"Selamat "<<nama1<<" = "<<"Gunting"<<" Mengalahkan "<<nama<<"= "<<"Kertas";
		}
	}else{
		cout<<"Harap Masukan Angka Dengan Benar :D."<<endl;
	}
}
