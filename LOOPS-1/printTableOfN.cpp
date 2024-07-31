#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "The table of :";
    cin >> n;
    for (int i = 1; i <11; i++)
    {
        cout << i * n << endl;
    }
    return 0;
}