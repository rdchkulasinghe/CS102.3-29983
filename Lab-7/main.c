#include <stdio.h>

// Function to input elements of a 3x3 matrix
void input_matrix(int matrix[3][3]) {
    printf("Enter 9 elements for the matrix (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two 3x3 matrices and store the result in a third matrix
void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a 3x3 matrix
void display_matrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Get user input for the first matrix
    printf("Enter the elements for the first matrix:\n");
    input_matrix(matrix1);

    // Get user input for the second matrix
    printf("Enter the elements for the second matrix:\n");
    input_matrix(matrix2);

    // Calculate the matrix sum
    add_matrices(matrix1, matrix2, result);

    // Display the resulting matrix
    printf("\nMatrix Sum:\n");
    display_matrix(result);

    return 0;
}
