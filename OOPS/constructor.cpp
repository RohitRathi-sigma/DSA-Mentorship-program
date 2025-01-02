//A constructer is syntax just like a function but have no return type and the name is same of the class name.

#include<iostream>
using namespace std;
class Student {
    public:
       string name;
       int rollno;
       string department;
       Student(string n, int rno, string dep){
        name=n;
        rollno=rno;
        department=dep;
       }
};
void print(Student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.department<<endl;
}
int main(){
    // Student s;
    // s.name="Kaku";
    // s.rollno=11232885;
    // s.department="CSE";
    Student s1("Sumit", 11232768, "CSE");
    Student s2("Sunil", 11232468, "CSE");
    Student s3("Susil", 11232368, "CSE");
    print(s1);
    print(s2);
    print(s3);
}