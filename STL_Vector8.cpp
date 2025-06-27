#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector <int>vec = { 1,2,3,4,5};
    vec.erase(vec.begin() +1 ,vec.begin()+3);   // 1 4 5   2 3 delete becoause range start add nhi hota but end add hota hai ek aage wale sedn karte hai 
    


    for (int val: vec) {
        cout<<val<<" ";
    }
    cout<<endl;
    


    return 0; 

}