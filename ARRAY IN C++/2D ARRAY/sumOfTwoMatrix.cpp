#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;
    int matrix1[rows][cols] = {{1, 2, 36}, {41, 5, 6}, {7, 80, 9}};
    int matrix2[rows][cols] = {{90, 82, 7}, {6, 58, 44}, {31, 2, 15}};
    int sumMatrix[rows][cols];

    // Add corresponding elements of matrix1 and matrix2 to sumMatrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Print the sumMatrix
    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}