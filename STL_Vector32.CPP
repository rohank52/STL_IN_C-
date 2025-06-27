#include<iostream>
#include<map>
using namespace std;

int main () {
    map<string,int>m;
    m["tv"] = 100;
    m["laptop"]=100;
    m["headphone"] =50;
    m["tablet"]= 120;
    m["watch"]=50;

    for(auto p: m) {
        cout<<p.first<< " "<<p.second<<endl;
    }
    return 0;
}
//assending order mhade shot hoto auto matic ..
