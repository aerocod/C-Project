#include <iostream>
using namespace std;


int main(){
	char Nama[25], Usia[3], Nim[1000], Prodi[25];
	
	printf("Nama: ");
	scanf("%s", &Nama);
	
	printf("Usia: ");
	scanf("%d", &Usia);
	
	printf("Prodi: ");
	scanf("%s", &Prodi);
	
	printf("Nim: ");
	scanf("%i", &Nim);
	
	printf("Nama Yang diinputkan: %s\n", Nama);
	return 0;
}
