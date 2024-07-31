#include <iostream>
using namespace std;
int main()
{
    int arr[] = {15, 27, 32, 40, 58, 45};
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of all elements in array is:"<<sum  ;
    return 0;
}