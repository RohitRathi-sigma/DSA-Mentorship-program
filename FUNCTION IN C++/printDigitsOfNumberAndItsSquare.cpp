#include <iostream>
using namespace std;
void countdigitsandsquare(int num)
{
    int count = 0;
    int number = num;
    // count the digit of number
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    // square of number
    int square = num * num;
    cout << "number of digits in " << num << " is :" << count << endl;
    cout << "square of " << num << " is :" << square << endl;
}

int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    countdigitsandsquare(n);
    return 0;
}