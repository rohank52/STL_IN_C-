#include<iostream>
#include<string>
using namespace std;
// problme are shallow constrotot 
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
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr;
   }

   void getInfo() {
    cout<<"name :"<<name <<endl;
    cout<<"cgpa :"<<*cgpaPtr  <<endl;
   }
};
int main () {
    Student s1("rohan ",8.9);
    Student s2(s1);

    
    s1.getInfo(); 
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();

    s2.name="neha";
    s2.getInfo();


    return 0;
}