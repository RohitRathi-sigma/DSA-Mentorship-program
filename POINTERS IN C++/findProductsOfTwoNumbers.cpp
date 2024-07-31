#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int product = (*ptr1) * (*ptr2);
    cout << "product is :" << product << endl;
    return 0;
}