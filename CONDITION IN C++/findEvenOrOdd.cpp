#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number:";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is even number." << endl;
    }
    else
    {
        cout << num << " is not even number." << endl;
    }
    return 0;
}
