#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

int main () {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"top "<<s.top()<<endl;
    return 0;

}