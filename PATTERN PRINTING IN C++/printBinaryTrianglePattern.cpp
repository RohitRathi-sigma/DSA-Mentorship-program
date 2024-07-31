#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "enter the rows :";
    cin >> r;
    int num;
    for (int i = 1; i <= r; i++)
    {
        num = i % 2;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num = 1 - num;
        }
        cout << endl;
    }
    return 0;
}