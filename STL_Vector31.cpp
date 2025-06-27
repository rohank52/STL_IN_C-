#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>

using namespace std;

int main () {
    priority_queue<int , vector<int> ,greater<int>>q ;
    
 q.push(1);
 q.push(2) ;
 q.push(3) ;
 q.push(4);
 while(q.empty()){ 
    cout<<q.top()<<" ";  // output is 3 4 5 10 
    q.pop();
 }
 cout<<endl;
    
return 0;

}