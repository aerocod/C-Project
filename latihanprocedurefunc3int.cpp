#include <iostream>
using namespace std;

float kali(int a, int b, int c){
	float hasil=(float)a*(float)b*(float)c;
	return hasil;
}

int main(){
	cout<<"Hasil Dari 3 Perkalian Bilangan: "<<kali(3,3,3);
	return 0;
}
