#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character :";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " character is alphabet";
    }
    else
    {
        cout << ch << " character is not alphabet";
    }
    return 0;
}
