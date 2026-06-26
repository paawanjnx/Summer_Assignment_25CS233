// wap to find column wise sum 
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[10][10];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Column-wise sum:\n";

    for (int j = 0; j < cols; j++) {
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }

        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}