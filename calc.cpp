#include <iostream>
using namespace std;

int main(){
	cout<< "Welcome To C++ Calculator Program Made By Neil Christian Yang tentunya sangat tampan menawan dan selalu wangi juga optimis dalam menghadapi setiap persoalan hidu yang ada :p"<<endl;
	cout<< "Silahkan Pilih Mode di bawah ini: "<<endl;
	double x;
	double y;
	int mode;
	while (true){
		cout<< "1. Sum (+)"<<endl;
		cout<< "2. Minus (-)"<<endl;
		cout<< "3. Times (*)"<<endl;
		cout<< "4. Divide (/)"<<endl;
		cout<< "Silahkan Pilih Mode Berdasarkan Angka, contoh '1':";
		cin>> mode;
		
		if (mode==1){
			cout<<"Harap Masukan Angka pertama: ";
			cin>> x;
			cout<<"Harap Masukan Angka kedua: ";
			cin>> y;
			cout<< "Hasilnya Adalah: " << x+y<<endl;
			
		} else if (mode==2){
			cout<<"Harap Masukan Angka pertama: ";
			cin>> x;
			cout<<"Harap Masukan Angka kedua: ";
			cin>> y;
			cout<< "Hasilnya Adalah: " << x-y<<endl;
			
		} else if (mode==3){
			cout<<"Harap Masukan Angka pertama: ";
			cin>> x;
			cout<<"Harap Masukan Angka kedua: ";
			cin>> y;
			cout<< "Hasilnya Adalah: " << x*y<<endl;
			
		} else if (mode==4){
			cout<<"Harap Masukan Angka pertama: ";
			cin>> x;
			cout<<"Harap Masukan Angka kedua: ";
			cin>> y;
			cout<< "Hasilnya Adalah: " << x/y<<endl;
			
		} else{
			cout<<"Harap Masukan Angka/Keyword Yang Telah Diberikan :D"<<endl;
		}
		cout<<"Ingin Mencoba Lagi?"<<endl;
		cout<<"Tekan 1 Untuk Lanjut"<<endl;
		cout<<"Tekan Keyword Apa Saja Untuk Berhenti"<<endl;
		cout<<"Silahkan Masukan Keyword: ";
		cin>> x;
		if (x==1){
			continue;
		}else{
			cout<<"Terima Kasih Sudah Menggunakan Program Ku :D";
			break;
		}
		return 0;
	}
	
	
}
