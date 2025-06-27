#include<iostream>
#include<string>
using namespace std;
// all static memroy allocation  
class Student {
    public:

   string name;
   double cgpa;
   
   Student (string name, double cgpa) {
    this-> name = name;
    this-> cgpa = cgpa;
   }
   Student (Student &obj){
    this->name=obj.name;
    this->cgpa = obj.cgpa;
   }

   void getInfo() {
    cout<<"name :"<<name <<endl;
    cout<<"cgpa :"<<cgpa <<endl;
   }
};