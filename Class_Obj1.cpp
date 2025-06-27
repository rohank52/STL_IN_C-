#include<iostream>

#include<string>
using namespace std;

class Teacher {
    private: 
    double salary;


    Teacher (string n,string d, string s, double sal){
        name =n;
        dept=d;
        subject = s;
        salary = sal;


    }

    public:
    string name;
    string dept;
    string subject;

    void getinfo() {
        cout<<"name"<<name <<endl;
        cout<<"subject"<<subject<<endl;

    }


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
    Teacher t1('shiddd', "roo","ccc",3444);
    t1.getinfo();

    cout<<t1.dept<<endl;

    return 0;
} 