#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter the rows :";
    cin >> r;
    cout << "enter the column :";
    cin >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}