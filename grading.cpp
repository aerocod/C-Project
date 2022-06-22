#include <iostream>
#include <string>
using namespace std;

int main(){
	int grading;
	
	cout<<"Welcome To Score Grading.\n";
	cout<<"Please Input Your Score Between 0-100. \n";
	cin>>grading;
	
	switch (grading){
		case <=50:
			cout<<"Your Grade Is E";
			break;
	}
	
}
