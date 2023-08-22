#include <stdio.h>
#include <stdlib.h>

// ベクトルの構造体の定義
typedef struct {
    double *data;
    size_t size;
} Vector;

// ベクトルの初期化
void init_vector(Vector *vec, size_t size) {
    vec->size = size;
    vec->data = (double *)malloc(size * sizeof(double));
    if (vec->data == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
}

// ベクトルの解放
void free_vector(Vector *vec) {
    free(vec->data);
}

// ベクトルの表示
void print_vector(Vector *vec) {
    printf("[ ");
    for (size_t i = 0; i < vec->size; i++) {
        printf("%.2f ", vec->data[i]);
    }
    printf("]\n");
}

int main() {
    Vector v;
    size_t size = 3;

    init_vector(&v, size);

    // ベクトルに値を設定
    for (size_t i = 0; i < size; i++) {
        v.data[i] = i + 1;
    }

    printf("Vector contents: ");
    print_vector(&v);

    free_vector(&v);

    return 0;
}
