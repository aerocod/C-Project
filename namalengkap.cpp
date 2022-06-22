#include <iostream>
using namespace std;

int main(){
	string nama, prodi;
	int usia;
	long int NIM;
	
	cout<<"Nama: ";
	cin>>nama;
	
	cout<<"Usia: ";
	cin>>usia;
	
	cout<<"NIM: ";
	cin>>NIM;
	
	cout<<"Prodi: ";
	cin>>prodi;
	
	cout<<endl;
	
	cout<<"Inilah Data Diri Saya !!! \n";
	cout<<"Nama saya adalah "<<nama;
	cout<<" usia saya "<<usia<<" tahun.\n";
	cout<<"Saya kuliah di Program Studi "<<prodi<<" dan NIM saya "<<NIM;
	return 0;
}
