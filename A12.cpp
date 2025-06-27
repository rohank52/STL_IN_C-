#include<iostream>
#include<string>
using namespace std;
// all heap  memroy allocation  
class Student {
    public:

   string name;
   double * cgpaPtr;
   
   Student (string name, double cgpa) {
    this-> name = name;
    *cgpaPtr = cgpa;
   }

   Student (Student &obj){
    this->name=obj.name;
    this->cgpaPtr  = obj.cgpaPtr;
   }

   void getInfo() {
    cout<<"name :"<<name <<endl;
    cout<<"cgpa :"<<*cgpaPtr  <<endl;
   }
};
int main () {
    Student s1("rohan ",8.0);
    Student s2(s1);
    s2.getInfo();
    return 0;
}