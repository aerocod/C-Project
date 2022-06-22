#include <iostream>
#include <cmath>
using namespace std;

int main(){ 
	//Algoritma Konversi Celcius ke Reamur
	cout<<"Membuat Program Konversi Celcius Ke Reamur \n";
	
	//Deklarasi
	float R=0.8;
	float rumus;
	float C;
	
	//Deskripsi
	cout<<"Masukan Celcius: "; 
	
	//Read C (Celcius)
	cin>>C; 
	
	//Rumus
	rumus=R*C; 
	
	cout<<"4/5 * "<<C<<endl; 
	
	//Write (Print) Hasil Celcius Ke Reamur
	cout<<"Celcius Ke Reamur = "<<rumus<<" R"<<endl; 
	cout<<endl;
	
	
		//Algoritma Konversi Celcius ke Farenheit
		cout<<"Membuat Program Konversi Celcius Ke Farenheit \n";
		
		//Deklarasi
		float F=1.8;
		float Rumus, rumus32;
		float c;
		
		//Deskripsi
		cout<<"Masukan Celcius: "; 
		
		//Read C (Celcius)
		cin>>C; 
		
		//Rumus
		Rumus=F*C; 
		rumus32=Rumus+32;
		
		cout<<"9/5 * "<<C<<" + 32"<<endl;
		
		//Write (Print) Hasil Celcius Ke Fahrenheit
		cout<<"Celcius Ke Fahremheit = "<<rumus32<<" F"<<endl; 
		cout<<endl;
		
	/* Algoritma Menghitung sisi miring dari suatu segitiga siku-siku, 
	jika diketahui panjang sisi yang membentuk sudut siku-siku.*/
	cout<<"Membuat Program Mencari Sisi Miring (Pythagoras)"<<endl;
	
	//Deklarasi
	float sisi_depan, sisi_samping;
	float hasil, rumus_akar, kuadrat1, kuadrat2;
	
	//Deskripsi
	cout<<"Masukan Sisi Depan: ";
	
	//Read Sisi Depan Dan Samping
	cin>>sisi_depan;
	
	//Deskripsi
	cout<<"Masukan Sisi Samping: ";
	
	//Read Sisi Depan Dan Samping
	cin>>sisi_samping;
	
	//Deskripsi
	cout<<"Akar (Sisi miring^2 + Sisi samping^2)"<<endl;
	
	//Rumus
	kuadrat1=sisi_depan*sisi_depan;
	kuadrat2=sisi_samping*sisi_samping;
	hasil=kuadrat1+kuadrat2;
	rumus_akar=sqrt(hasil);
	
	//Write (Print) Hasil Mencari Sisi Miring;
	cout<<"Sisi Miring Dari Segitiga Siku-siku= "<<rumus_akar<<" cm"<<endl;
	cout<<endl;
	
		//Algoritma Menghitung usia berdasarkan tahun lahir (tl) dan tahun sekarang (ts)
		cout<<"Menghitung Usia Berdasarkan Tahun Lahir dan Tahun Sekarang"<<endl;
		
		//Deklarasi
		int tl,ts,usia;
		
		//Deskripsi
		cout<<"Masukan Tahun Lahir: ";
		cin>>tl;
		
		cout<<"Masukan Tahun Sekarang: ";
		cin>>ts;
		
		//Rumus
		usia=ts-tl;
		
		//Write (Print) Hasil Usia 
		cout<<"Usia Anda Sekarang Adalah: "<<usia<<" Tahun"<<endl;
		cout<<endl;
		
	//Algoritma Menghitung Rata-Rata 5 Bilangan
	cout<<"Menghitung Rata-rata 5 Bilangan"<<endl;
	
	//Deklarasi
	float a,b,ce,d,e, sum, div;
	
	//Read ke-5 Bilangan Deskripsi
	cout<<"Masukan Bilangan Pertama: ";
	cin>>a;
	cout<<"Masukan Bilangan Kedua: ";
	cin>>b;
	cout<<"Masukan Bilangan ketiga: ";
	cin>>ce;
	cout<<"Masukan Bilangan keempat: ";
	cin>>d;
	cout<<"Masukan Bilangan kelima: ";
	cin>>e;
	
	//Rumus
	sum=a+b+ce+d+e;
	div=sum/5;
	
	//Write (print) Rata-rata ke 5 Bilangan
	cout<<"Rata-rata ke 5 Bilangan Adalah: "<<div<<endl;
	cout<<endl;
	
		//Algoritma Konversi Dari Rupiah Ke USD. USD= Rp*9408
		cout<<"Konversi Rupiah Ke USD; USD=Rp. 13000"<<endl;
		
		//Deklarasi
		float USD=13000,RP, Convert;
		
		//Read Rupiah Deskripsi
		cout<<"Masukan Nominal Rupiah: ";
		cin>>RP;
		
		//Rumus
		Convert=RP/USD;
		
		//Write (print) Rupiah To USD
		cout<<"Rp "<<RP<<" = "<<Convert<<" USD"<<endl;
		
		return 0;
}
