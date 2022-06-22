#include <iostream>
using namespace std;

int main(){
	string x="H";
	int a=x.length();
	
	for (int i=a-1; i<4; i++){
		cout<<x+i;
	}
	return 0;
}
