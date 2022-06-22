#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	for(int i=1; i<=3; i++){		//Deklarasi 1 2 3 Secara Vertikal * * *
		for(int j=1; j<=i; j++){	//Dari 1<1 1<2 1<3 Akan Ditambahkan * ** ***
			cout<<"*";
		}cout<<endl;     
	}
	
	cout<<endl;
	
	for(int a=3; a>=1; a--){	//Deklarasi 3 2 1 Secara Vertikal * * *
		for(int b=1; b<=a; b++){	//Dari 1<3 1<2 1<1 Akan ditambahkan *, Jadi *** ** *
			cout<<"*";
		}cout<<endl;
	}
	
	cout<<endl;
	
	int value;
	cout<<"Masukan Value: ";
	cin>>value;
	
	for(int x=1; x<=value; x++){
		for(int y=1; y<=x; y++){
			cout<<"*";
		}cout<<endl;
	}
	for(int p=value; p>=1; p--){
		for(int q=1; q<=p; q++){
			cout<<"*";
		}cout<<endl;
	}
}


