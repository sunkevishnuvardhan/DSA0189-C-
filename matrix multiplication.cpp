#include <iostream>
using namespace std;
int main() 
{
    int row1, col1, row2, col2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;
    int matrix1[row1][col1];
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col1; ++j)
            cin >> matrix1[i][j];
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;
    if (col1 != row2) {
        cout << "Matrix multiplication not possible! Column of the first matrix should be equal to row of the second matrix." << endl;
        return 0;
    }
    int matrix2[row2][col2];
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < row2; ++i)
        for (int j = 0; j < col2; ++j)
            cin >> matrix2[i][j];
    int result[row1][col2] = {0};
    for (int i = 0; i < row1; ++i)
        for (int j = 0; j < col2; ++j)
            for (int k = 0; k < col1; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
    cout << "Resultant matrix (Multiplication):" << endl;
	    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}
