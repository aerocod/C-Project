#include <iostream>
using namespace std;

int main()
{
	int nilai;

	cout<<"Berapa Nilai Yang di dapat? ";
	cin>>nilai;
	
	if (nilai>=60 && nilai<=100){
		cout<<"Lulus";
	}else{
		cout<<"Tidak Lulus";
	}
	return 0;
}
