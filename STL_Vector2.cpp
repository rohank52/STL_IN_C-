#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector <int>vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5); 

    vec.pop_back(); // last elelemtn in array
    

    for (int val: vec) {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;

}