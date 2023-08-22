#include <stdio.h>

void vector_matrix_multiply(double *vector, double matrix[][3], double *result, int vector_size, int matrix_size) {
    for (int i = 0; i < matrix_size; i++) {
        result[i] = 0.0;
        for (int j = 0; j < vector_size; j++) {
            result[i] += vector[j] * matrix[j][i];
        }
    }
}

void square_matrix_multiply(double matrix1[][3], double matrix2[][3], double result[][3], int matrix_size) {
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            result[i][j] = 0.0;
            for (int k = 0; k < matrix_size; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void non_square_matrix_multiply(double matrix1[][3], double matrix2[][2], double result[][2], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0.0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void print_matrix(double matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    double vector[3] = {1.0, 2.0, 3.0};
    double matrix[3][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    double result[3];

    double square_matrix1[3][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    double square_matrix2[3][3] = {{9.0, 8.0, 7.0}, {6.0, 5.0, 4.0}, {3.0, 2.0, 1.0}};
    double square_result[3][3];

    double non_square_matrix1[2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};
    double non_square_matrix2[3][2] = {{9.0, 8.0}, {7.0, 6.0}, {5.0, 4.0}};
    double non_square_result[2][2];

    // Vector and matrix multiplication
    vector_matrix_multiply(vector, matrix, result, 3, 3);
    printf("Vector-Matrix Multiplication Result:\n");
    print_matrix(result, 1, 3);

    // Square matrix multiplication
    square_matrix_multiply(square_matrix1, square_matrix2, square_result, 3);
    printf("Square Matrix Multiplication Result:\n");
    print_matrix(square_result, 3, 3);

    // Non-square matrix multiplication
    non_square_matrix_multiply(non_square_matrix1, non_square_matrix2, non_square_result, 2, 3, 2);
    printf("Non-Square Matrix Multiplication Result:\n");
    print_matrix(non_square_result, 2, 2);

    return 0;
}
