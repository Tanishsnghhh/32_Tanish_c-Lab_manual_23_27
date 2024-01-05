#include <iostream>
using namespace std; 
int main() 
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    if (rows <= 0 || cols <= 0) 
    {
        cout << "Invalid input. Rows and columns should be positive integers." << endl;
        return 1; 
    }
    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    
    cout << "Sum of elements in each row:" << endl;
    for (int i = 0; i < rows; ++i) 
    {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) 
        {
            rowSum = rowSum+matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}