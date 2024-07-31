#include <iostream>
using namespace std;

int main()
{
    const int maxRows = 10;
    const int maxCols = 10;
    int matrix[maxRows][maxCols];
    int transpose[maxCols][maxRows];

    int rows, cols;
    cout << "Enter the number of rows of the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns of the matrix: ";
    cin >> cols;
    // Input the matrix from the user
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Calculate the transpose of the matrix
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    // Display the transpose matrix
    cout << "Transpose of the Matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}