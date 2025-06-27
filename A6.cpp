#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
double salary;


public:

    Teacher() {
        dept = "computer sci ";//non parametririzes constrotor...
        
    };

    string name;
    string dept;
    string subject;
    


    void changeDept(string newDept) {
        dept = newDept;
    }

    //setter
    //private value ko set kart hai..
    void setSalary(double s ) {
        salary = s;
    }

    //getter
    //private valuse ki value ko get kart hai..
    double getSalary() {
        return salary;

    }

};



int main() {
    Teacher t1;
    t1.name ="rohan";
    t1.subject = "c++";
    t1.setSalary(25000);


    cout<<t1.dept<<endl;
    
}