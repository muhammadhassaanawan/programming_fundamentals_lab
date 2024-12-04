#include <stdio.h>

int main() {
    const int size = 4;  // Define the matrix size as a constant integer
    int matrix[size][size];
    int transpose[size][size];

    // Input original matrix
    printf("Enter elements of the 4x4 matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
