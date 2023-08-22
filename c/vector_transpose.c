#include <stdio.h>

void transpose_matrix(double matrix[][3], double result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
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
    double matrix[3][3] = 
    {{1.0, 2.0, 3.0}, 
     {4.0, 5.0, 6.0}, 
     {7.0, 8.0, 9.0}};

    
    double result[3][3];

    printf("Original Matrix:\n");
    print_matrix(matrix, 3, 3);

    transpose_matrix(matrix, result, 3, 3);

    printf("Transposed Matrix:\n");
    print_matrix(result, 3, 3);

    return 0;
}
