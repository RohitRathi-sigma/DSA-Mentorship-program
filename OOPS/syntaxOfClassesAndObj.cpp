#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    string department;
    float cgpa;
};
int main(){
    Student s;
    s.name="Vikash";
    s.rollno=11232901;
    s.department="B.tech";
    s.cgpa=7.5;
    cout<<"Student name: "<<s.name<<endl;
    cout<<"Student rollno: "<<s.rollno<<endl;
    cout<<"Student department: "<<s.department<<endl;
    cout<<"Student cgpa: "<<s.cgpa<<endl;

}