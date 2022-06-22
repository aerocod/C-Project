#include <iostream>
using namespace std;

int main(){
	cout<<"Welcome To Asu Supermarket \n";
	cout<<"We Have Some Cheap Foods And Beverages \n";
	cout<<"Please Choose The Item By Number: \n";
	cout<<"1. Beverages \n";
	cout<<"2. Foods \n";
	cout<<"3. Foods And Beverages \n";
	while (true){
		int item;
		int Try;
		cout<<"Please Enter The Item Based On Number: ";
		cin>>item;
		
		if (item==1){
			cout<<"Beverages"<<endl;
		}else if(item==2){
			cout<<"Foods"<<endl;
		}else if(item==3){
			cout<<"Foods And Beverages"<<endl;
		}else{
			cout<<"You Should Enter The Number Between (1-3)"<<endl;
			cout<<"Wanna Try Again: (Type 1 to Continue, Type 2 To Exit)";
			cin>>Try;
			if (Try==1){
				continue;
			}else{
				cout<<"Thanks For Using This App"<<endl;
				break;
			}
		}

	}
	
}
