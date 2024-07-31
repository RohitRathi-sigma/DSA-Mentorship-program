#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Please enter the odd number." << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i == (n / 2) + 1 || j == (n / 2) + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}