#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the rows :";
    cin >> row;
    cout << "Enter the columns :";
    cin >> col;
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the roll number for student " << i + 1 << " : ";
        cin >> matrix[i][0];
        cout << "Enter the marks for student " << i + 1 << " : ";
        cin >> matrix[i][1];
        cout << endl;
    }
    cout << "Roll Number\tmarks :" << endl;
    cout<<""<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "\t\t";
        }
        cout << endl;
    }
    return 0;
}