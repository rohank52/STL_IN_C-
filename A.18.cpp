#include<iostream>
#include<string>
using namespace std;
//this using pointer not a alice 

void changeA(int *ptr ) { //pass by reference using pointers 

    *ptr = 20;

}
int main() {
    int a = 10;
    changeA(&a);

    cout<<"inside main fnx : "<<a<<endl; 
    return 0; 

}