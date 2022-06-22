#include <iostream>
using namespace std;

string nama,prodi,nim,usia;
int main(){
	cout<<"Nama:";
	getline(cin,nama);
	
	cout<<"Usia: ";
	getline(cin,usia);
	
	cout<<"NIM: ";
	getline(cin,nim);
	
	cout<<"Prodi: ";
	getline(cin,prodi);
	
	cout<<endl;
	
	cout<<"Inilah Data Diri Saya!!!"<<endl;
	cout<<"Nama Saya Adalah "<<nama<<" Usia Saya "<<usia<<" Tahun."<<endl;
	cout<<"Saya Kuliah Di Program Studi "<<prodi<<" dan NIM Saya "<<nim;
	
	return 0;
}
