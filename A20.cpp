#include<iostream>
#include<string>
using namespace std;
//this using  a alice 

void changeA(int &b) { //pass by reference using alice 

    b = 20;

}
int main() {
    int a = 10;
    changeA(a);

    cout<<"inside main fnx : "<<a<<endl; 
    return 0; 

}