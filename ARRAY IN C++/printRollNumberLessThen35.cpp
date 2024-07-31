#include <iostream>
using namespace std;
int main()
{
    int marks[] = {12, 40, 15, 36, 34, 30};
    for (int i = 0; i < 6; i++)//Iterate through the marks array
    {
        if (marks[i] < 35)//check if marks is less then 35
        {
            cout << "Roll number of student with mark less than 35 :" << i << endl;
        }
    }
    return 0;
}