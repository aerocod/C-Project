#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout<<"Selamat Datang Di Program Value Grading. \n";
	cout<<"Mohon Masukan Angka Dari 0-100 Untuk Menentukan Grading. \n";
	
	cout<<"Mohon Masukan Nilai: ";
	cin>>nilai;
	
	if (nilai >=85 && nilai <100){
		cout<<"Grading Kamu Adalah: A";
		
	} else if (nilai >=70 && nilai <85){
		cout<<"Grading Kamu Adalah: B";
		
	} else if (nilai >=60 && nilai <70){
		cout<<"Grading Kamu Adalah: C";
		
	} else if (nilai >=40 && nilai <60){
		cout<<"Grading Kamu Adalah: D";
		
	} else if (nilai >=0 && nilai <40){
		cout<<"Grading Kamu Adalah: E";
		
	} else{
		cout<<"Harap Masukan Angka Dengan Benar Antara 0-100";
	}
	return 0;
}
