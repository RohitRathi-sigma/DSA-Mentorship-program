#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    cout << "number of digits :" << count << endl;
    return 0;
}