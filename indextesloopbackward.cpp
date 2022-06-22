#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	for(int i=1; i<=6; i++){	//Bikin baris 1-6 Ke bawah, 
		for(int j=1; j<=i; j++){	//Setiap baris diisi kolom 1 sampai i++ max 6
			cout<<j<<" ";		//Hasul cout 123456 12345 1234 123 12 1
		}cout<<endl;
	}
	
	cout<<endl;
	
	for(int j=1; j<=6; j++){	//Bikin baris 1-6 Kebawah
		for(int i=6; i>=j; i--){	//Setiap baris diisi kolom dari Setiap Kolom= 6, diisi J=654321 yang dikurang i--
			cout<<i<<" ";	//Hasil Coyt 654321 65432 6543 654 65 6
		}cout<<endl;
	}
	
	cout<<endl;
	
	
	int nilai=6;
	for(int i=nilai; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}cout<<endl;
	}
}
