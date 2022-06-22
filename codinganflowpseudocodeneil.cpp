#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//1.Konversi dari Celcius ke Reamur. R=(4/5)*C
	float reamur, celcius;
	cout<<"1. Konversi dari Celcius ke Reamur"<<endl;
	
	cout<<"Masukan Celcius: ";
	cin>>celcius;
	cout<<"R=(4/5)*C";
	
	reamur=0.8*celcius;
	
	cout<<"Reamur= "<<reamur<<endl;
	
	cout<<endl;
	
	//2.Konversi dari Celcius ke Farenheit. F=(9/5)*C+32
	float Celcius,Farenheit;
	cout<<"2. Konversi dari Celcius Ke Farenheit"<<endl;
	
	cout<<"Masukan Celcius: ";
	cin>>Celcius;
	cout<<"F=(9/5)*C+32";
	
	Farenheit=1.8*Celcius+32;
	
	cout<<"Celcius To Farenheit= "<<Farenheit<<endl;
	
	cout<<endl;
	
	//3.Menghitung sisi miring dari suatu segitiga siku-siku, jika diketahui panjang sisi yang membentuk sudut siku-siku. [clue : Phitagoras]
	float Sisi_Miring, Sisi_Depan, Sisi_Samping, Kuadratkan_SisiSamping, Kuadratkan_SisiDepan, Jumlah;
	cout<<"3. Menghitung sisi miring dari suatu segitiga siku-siku, jika diketahui panjang sisi yang membentuk sudut siku-siku. [clue : Phitagoras]"<<endl;
	
	cout<<"Masukan Sisi Miring: ";
	cin>>Sisi_Depan;
	
	cout<<"Masukan Sisi Samping";
	cin>>Sisi_Samping;
	
	Kuadratkan_SisiSamping=Sisi_Samping*Sisi_Samping;	
	Kuadratkan_SisiDepan=Sisi_Depan*Sisi_Depan;
	Jumlah= Kuadratkan_SisiSamping+Kuadratkan_SisiDepan;
	
	Sisi_Miring=sqrt(Jumlah);
	
	cout<<"Sisi Miring dari Suatu Segitiga Siku-siku: "<<Sisi_Miring<<endl;
	cout<<endl;

	//4.Menghitung usia berdasarkan tahun lahir (tl) dan tahun sekarang (ts)
	//5.Menghitung rata-rata 5 bilangan
	//6.Konversi dari Rupiah ke USD. [USD=Rp/13.000]
}
