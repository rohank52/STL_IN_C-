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
    m.erase("tv");

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;

    }
    if(m.find("camera") != m.end()){
        cout<<"found\n";

    }else{
        cout<<"not found\n";
    }
    
    return 0;
}
//assending order mhade shot hoto auto matic ..
