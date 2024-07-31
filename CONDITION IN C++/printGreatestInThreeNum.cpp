#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "enter the first number :";
    cin >> num1;
    cout << "enter the second number :";
    cin >> num2;
    cout << "enter the third number :";
    cin >> num3;
    int greatest;
    if (num1 > num2)
    {
        greatest = num1;
    }
    if (num2 > num3)
    {
        greatest = num2;
    }
    if (num3 > num1)
    {
        greatest = num3;
    }
    cout << " The greatest number is : " << greatest;
    return 0;
}
