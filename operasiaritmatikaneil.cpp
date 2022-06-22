#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	string nama,email;
	int usia,nim,c,d;
	double a,b,rumus;
	
	cout<<"\t \t \t \tOperasi Aritmatika "<<endl;
	cout<<"\t \t \t \t=================== "<<endl;
	
	cout<<"Nama: ";
	getline(cin,nama);
	
	cout<<"Usia: ";
	cin>>usia;
	
	cout<<"NIM: ";
	cin>>nim;
	
	cout<<"Email: ";
	cin>>email;
	
	cout<<endl;
	
	cout<<"PENJUMLAHAN"<<endl;
	cout<<"============"<<endl;
	cout<<"Masukan Nilai A: ";
	cin>>a;
	cout<<"Masukan Nilai B: ";
	cin>>b;
	rumus=a+b;
	cout<<"Hasil Jumlah= A+B"<<endl;
	cout<<"Hasil Jumlah= "<<a<<"+"<<b<<endl;
	cout<<"Hasil Jumlah= "<<rumus<<endl;
	
	cout<<endl;
	
	cout<<"PENGURANGAN"<<endl;
	cout<<"============"<<endl;
	cout<<"Masukan Nilai A: ";
	cin>>a;
	cout<<"Masukan Nilai B: ";
	cin>>b;
	rumus=a-b;
	cout<<"Hasil Kurang= A-B"<<endl;
	cout<<"Hasil Kurang= "<<a<<"-"<<b<<endl;
	cout<<"Hasil Kurang= "<<rumus<<endl;
	
	cout<<endl;
	
	cout<<"PERKALIAN"<<endl;
	cout<<"============"<<endl;
	cout<<"Masukan Nilai A: ";
	cin>>a;
	cout<<"Masukan Nilai B: ";
	cin>>b;
	rumus=a*b;
	cout<<"Hasil Kali= A*B"<<endl;
	cout<<"Hasil Kali= "<<a<<"*"<<b<<endl;
	cout<<"Hasil Kali= "<<rumus<<endl;
	
	cout<<endl;
	
	cout<<"PEMBAGIAN"<<endl;
	cout<<"============"<<endl;
	cout<<"Masukan Nilai A: ";
	cin>>a;
	cout<<"Masukan Nilai B: ";
	cin>>b;
	rumus=a/b;
	cout<<"Hasil Bagi= A/B"<<endl;
	cout<<fixed;
	cout<<"Hasil Bagi= "<<setprecision(2)<<a<<"/"<<b<<endl;
	cout<<"Hasil Bagi= "<<setprecision(2)<<rumus<<endl;
	
	cout<<endl;
	
	cout<<"MODULUS"<<endl;
	cout<<"============"<<endl;
	cout<<"Masukan Nilai C: ";
	cin>>c;
	cout<<"Masukan Nilai D: ";
	cin>>d;
	rumus=c%d;
	cout<<"Hasil Modulus= C mod D"<<endl;
	cout<<"Hasil Modulus= "<<c<<" mod "<<d<<endl;
	cout<<"Hasil Modulus= "<<setprecision(0)<<rumus<<endl;
	return 0;
}
