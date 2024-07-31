#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    int a = 0;
    while (num != 0)
    {
        int reminder = num % 10;
        a = a * 10 + reminder;
        num /= 10;
    }
    cout << "Reversed number is :" <<a;
    return 0;
}