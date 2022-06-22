#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const char kata_kata[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int banyak_password = sizeof(kata_kata);

int main(){
    int panjang;
    cout<<"Enter the length of password: ";
    cin>>panjang;
    
    srand(time(0));
    
    cout<<"Generated password: ";
    
    for(int i = 0; i < panjang; i++)
    cout << kata_kata[rand() % banyak_password];
    return 0;
}
