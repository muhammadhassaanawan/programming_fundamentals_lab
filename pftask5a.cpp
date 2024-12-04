#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions for matrix A
    cout << "Enter the number of rows and columns for Matrix A: ";
    cin >> rowsA >> colsA;

    // Input dimensions for matrix B
    cout << "Enter the number of rows and columns for Matrix B: ";
    cin >> rowsB >> colsB;

    // Check if multiplication is possible
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible. Columns of Matrix A must equal rows of Matrix B." << endl;
        return 0;
    }

    // Declare matrices
    int matrixA[rowsA][colsA];
    int matrixB[rowsB][colsB];
    int result[rowsA][colsB];

    // Input elements for matrix A
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    // Input elements for matrix B
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Print the result of the multiplication
    cout << "Result of Matrix Multiplication:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
