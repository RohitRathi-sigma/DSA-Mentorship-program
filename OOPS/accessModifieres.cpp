#include<iostream>
using namespace std;
class Bankaccount{
    private:
       double bankbalance;

    public:
        void setbalance(double balance){
            bankbalance=balance;
        }

        double getbalance(){
            return bankbalance;
        }   

};
int main(){
    Bankaccount myaccount;
    myaccount.setbalance(5000);
    cout<<"Bank balance is: "<<myaccount.getbalance();
}