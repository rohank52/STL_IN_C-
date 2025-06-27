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
    
    Teacher(string n, string d, string s,double sal){
        name =n;
        dept =d;
        subject =s;
        salary = sal;
    };



    string name;
    string dept;
    string subject;
    


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


    cout<<t1.dept<<endl;
    return 0;
    
}