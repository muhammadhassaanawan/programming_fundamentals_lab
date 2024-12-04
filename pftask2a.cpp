#include <iostream>
using namespace std;

int main() {
    const int size = 4;  // Define the matrix size as a constant integer
    int matrix[size][size];
    int transpose[size][size];

    // Input original matrix
    cout << "Enter elements of the 4x4 matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    cout << "\nOriginal matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Print transpose of the matrix
    cout << "\nTranspose of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
