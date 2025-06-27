#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>

using namespace std;

int main () {
    priority_queue<int>q;
    
 q.push(1);
 q.push(2) ;
 q.push(3) ;
 q.push(4);
 while(q.empty()){ 
    cout<<q.top()<<" ";  // output is 10 5 4 3 
    q.pop();
 }
 cout<<endl;
    
return 0;

}