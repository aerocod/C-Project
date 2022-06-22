#include <iostream>
using namespace std;

int main(){
	string nama,email;
	int usia,NIM;
	double a,b,c,d,rumus;
	
	cout<<"Nama: ";
	getline(cin,nama);
	
	cout<<"email: ";
	getline(cin,email);
	
	cout<<"umur: ";
	cin>>usia;
	
	cout<<"NIM: ";
	cin>>NIM;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Penjumlahan"<<endl;
	cout<<"============"<<endl;
	cout<<"Masukan Nilai A: ";
	cin>>a;
	cout<<"Masukan Nilai B: ";
	cin>>b;
	rumus=a+b;
	cout<<"Hasil Tambah= A+B"<<endl;
	cout<<"Hasil Tambah= "<<a<<"+"<<b<<endl;
	cout<<"Hasil Tambah= "<<rumus<<endl;
}
