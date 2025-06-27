#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <int> vec = {3,5,1,8,2};
    sort(vec.begin(),vec.end());
    for(int val : vec ) {
        cout<<val<<" ";

    }
    cout<<endl;
    return 0;

}
//1 2 3 5 8 