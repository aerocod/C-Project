#include <iostream>
using namespace std;

void urus_paspor(){
	cout<<"Urus Paspor"<<endl;
	cout<<"formulir permintaan paspor dengan Lampiran fotocopy KTP, Kartu Keluarga dan Pas Foto."<<endl;
	cout<<"Serahkan formulir yang sudah diisi beserta biaya pembuatan paspor."<<endl;
	cout<<"Wawancara dengan petugas imigrasi"<<endl;
	cout<<"Terima paspor"<<endl;
}

void urus_visa(){
	cout<<"Isi formulir permohonan visa dengan lampiran fotocopy KTP, paspor, pas foto, tiket pesawat terbang."<<endl;
	cout<<"Serahkan formulir yang diisi beserta biaya pengurusan visa."<<endl;
	cout<<"Terima Visa."<<endl;
}

void berangkat_bandara(){
	cout<<"Datang ke bandara satu jam sebelum keberangkatan."<<endl;
	cout<<"Jika sudah disuruh naik ke pesawat, tunjukkan tiket, paspor, dan visa anda ke petugas."<<endl;
	cout<<"Naik ke pesawat."<<endl;
	cout<<"Selamat Jalan."<<endl;
}

int main(){
	urus_paspor();
	cout<<endl;
	urus_visa();
	cout<<endl;
	berangkat_bandara();
}
