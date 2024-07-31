#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {{4,5,7}, {5,8,15}, {1,2,3}};

    int largest = arr[0][0]; // Initialize largest with the first element of the array

    // Traverse the array to find the largest element
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    cout << "The largest element in the 2D array is: " << largest << endl;

    return 0;
}