#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char alphabet = 'A';
    for (int i = 1; i <= n; i++)
    {
        char temp = alphabet;

        for (int j = 1; j <= i; j++)
        {
            cout << temp;
            temp++;
        }

        cout << endl;
    }

    return 0;
}