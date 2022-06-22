#include <iostream>
using namespace std;

int main(){
	int A;
	string ket,keterangan;
	
	cout<<"Masukan Nilai A: ";
	cin>>A;
	
	if (A>=10){
		ket="Anda Tidak Boleh Masuk";
	}else{
		ket="Anda Boleh Masuk";
	}
	//end if
	keterangan=ket+" Terima Kasih";
	cout<<keterangan<<endl;
	
	return 0;
}
