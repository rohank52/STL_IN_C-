#include<iostream>

#include<string>
using namespace std;

class Teacher {
    private: 
    double salary;

    public:
    string name;
    string dept;
    string subject;


    void changeDept(string newDept){
        dept = newDept;
    }
    //setter 
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};



class Account {
    private: 
    double balance;
    string password; //data hiding

    public:
    string accountId;
    string username;
};



int main () {
    Teacher t1;
    t1.name = "rohan";
    t1.subject = "m1";
    t1.dept="it";

    t1.setSalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary() <<endl;

    return 0;
}