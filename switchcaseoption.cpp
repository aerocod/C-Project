#include <iostream>
using namespace std;

int main(){
	char option;
	
	cout<<"Silahkan Masukan Pilihan Channel (1/2/3/4/5): ";
	cin>>option;
	
	switch (toupper(option)){
		case '1':
			cout<<"RCTI"<<endl;
			break;
		case '2':
			cout<<"SCTV"<<endl;
			break;
		case '3':
			cout<<"Indosiar"<<endl;
			break;
		case '4':
			cout<<"Global TV"<<endl;
			break;
		case '5':
			cout<<"ANTV"<<endl;
			break;
		default:
			cout<<"Option Yang Dimasukan Salah"<<endl;
	}
	return 0;
}
