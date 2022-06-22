#include <iostream>
using namespace std;

int main()
{
	//Latihan 1 Percabangan Pertemuan 4. Nomor 1 sampai 3.
	int A,B; //Deklarasi
	
	cout<<"Masukan Nilai A: ";
	cin>>A; //Input A
	
	if (A>=20){
		A=A+5; //Proses
		cout<<"Nilai A Jika Lebih dari 20= "<<A<<endl; //Output setelah angka terpenuhi
	}
	//End If
	cout<<"B= "<<A<<"+"<<A<<endl;
	B=A+A; //Proses
	cout<<"Nilai B = "<<B; //Output Akhir
	
	return 0;
}
