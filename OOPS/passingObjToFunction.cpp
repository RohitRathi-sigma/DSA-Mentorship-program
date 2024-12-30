#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int rollno;
        string department;

};

void print(Student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.department<<endl;
}

void change(Student &s){
    s.name="Goli";
}
int main(){
    Student s1;
    s1.name="Vikash";
    s1.rollno=11232802;
    s1.department="CSE";

    Student s2;
    s2.name="Vikram";
    s2.rollno=11232803;
    s2.department="CSE";

    Student s3;
    s3.name="Vinay";
    s3.rollno=11232804;
    s3.department="CSE";

    // cout<<s1.name<<" "<<s1.rollno<<" "<<s1.department<<endl;
    // cout<<s2.name<<" "<<s2.rollno<<" "<<s2.department<<endl;
    // cout<<s3.name<<" "<<s3.rollno<<" "<<s3.department<<endl;

    // print(s1);
    // print(s2);
    // print(s3);

    print(s1);
    change(s1);
    print(s1);
    
}