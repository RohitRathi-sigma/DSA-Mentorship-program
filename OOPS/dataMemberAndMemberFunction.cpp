#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string model;
    int year;

    void start(){
    cout<<name<<" "<<model<<" "<<"Starting...."<<endl;
    }
    void stop(){
        cout<<name<<" "<<model<<" "<<"Stoping....";
    }
    
};

int main(){
    Car cr;
    cr.name="Thar";
    cr.model="civics";
    cr.year=2024;
    cr.start();
    cr.stop();
}