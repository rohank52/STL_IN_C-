#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <pair<int,int>> vec = {{3,1} ,{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end());

    for(auto p : vec  ) {
        cout<<p.first<<" "<<p.second<<endl;

    }
    
    return 0;

}
//8 5 3 2 1 ab data dsending order 