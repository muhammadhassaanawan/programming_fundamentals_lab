
#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions for matrix A
    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    // Input dimensions for matrix B
    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. Columns of Matrix A must equal rows of Matrix B.\n");
        return 0;
    }

    int matrixA[rowsA][colsA];
    int matrixB[rowsB][colsB];
    int result[rowsA][colsB];

    // Input elements for matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input elements for matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
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
    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

