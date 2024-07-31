#include <iostream>
using namespace std;
int oddnumber(int a, int b)
{
    cout << "Odd number between " << a << " and " << b << " are :";
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int num1, num2;
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    oddnumber(num1, num2);
    return 0;
}