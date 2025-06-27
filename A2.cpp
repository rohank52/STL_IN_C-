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
    


    void changeDept(string newDept) {
        dept = newDept;
    }

};

int main() {
    Teacher t1;
    t1.name ="rohan";
    t1.subject = "c++";
    t1.dept = "computer ";
    

    cout<<t1.name<<endl;
}