#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {{15,46,25}, {40, 15, 66}, {07, 48, 19}};

    int sum = 0;

    // Calculate the sum of all elements in the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }

    // Print the sum
    cout << "Sum of all elements in the matrix: " << sum << endl;

    return 0;
}