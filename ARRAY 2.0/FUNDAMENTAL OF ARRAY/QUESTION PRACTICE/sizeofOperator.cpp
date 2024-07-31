// How can we use it to find the Length of array? Memory allocation in array//

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "The length of the array is: " << length << endl;

    return 0;
}