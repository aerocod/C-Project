#include <iostream>
using namespace std;

int main(){
	int max=6;
	for(int i=1; i<=max; i++){
		for(int j=max; j>=i; j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
