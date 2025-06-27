#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
double salary;


public:

    string name;
    string dept;
    string subject;
    

    Teacher() {
        dept = "computer sci ";//non parametririzes constrotor...
        
    };
    //this pointer use for show object ki propery show kare kam aata hai,,
     
    Teacher(string name, string dept, string subject,double salary){
       this-> name =name;
        this->dept =dept;
       this-> subject =subject;
       this-> salary = salary;
    };





    void changeDept(string newDept) {
        dept = newDept;
    }
    void getInfo () {
        cout<<"name:"<<name <<endl;
        cout<<"subject :"<<subject<<endl;

    }

    

};



int main() {
    Teacher t1("rohan", "c++", "cpro",25000);
    t1.getInfo();


    Teacher t2(t1); //default copy constritor invoke,,,
    t2.getInfo();
    return 0;
    
}