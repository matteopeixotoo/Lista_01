// Questao 20:
#include <stdio.h>
#include <stdlib.h>

// Função para multiplicação de matrizes
void multiply_matrices(int *A, int *B, int *C, int rows_A, int cols_A, int cols_B) {
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            *(C + i*cols_B + j) = 0; // Inicializa o elemento de C[i][j] com 0
            for (int k = 0; k < cols_A; k++) {
                *(C + i*cols_B + j) += (*(A + i*cols_A + k)) * (*(B + k*cols_B + j));
            }
        }
    }
}

// Função para imprimir uma matriz
void print_matrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i*cols + j));
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Definição das dimensões das matrizes
    int rows_A = 2, cols_A = 3, cols_B = 4;

    // Alocação de memória para as matrizes A, B e C
    int *A = (int *)malloc(rows_A * cols_A * sizeof(int));
    int *B = (int *)malloc(cols_A * cols_B * sizeof(int));
    int *C = (int *)malloc(rows_A * cols_B * sizeof(int));

    // Preenchimento das matrizes A e B (exemplo)
    int elements_A[] = {1, 2, 3, 4, 5, 6};
    int elements_B[] = {7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};

    // Copiando elementos para as matrizes A e B
    for (int i = 0; i < rows_A * cols_A; i++) {
        *(A + i) = elements_A[i];
    }

    for (int i = 0; i < cols_A * cols_B; i++) {
        *(B + i) = elements_B[i];
    }

    // Multiplicação das matrizes
    multiply_matrices(A, B, C, rows_A, cols_A, cols_B);

    // Impressão das matrizes
    printf("Matriz A:\n");
    print_matrix(A, rows_A, cols_A);

    printf("Matriz B:\n");
    print_matrix(B, cols_A, cols_B);

    printf("Matriz Resultante C:\n");
    print_matrix(C, rows_A, cols_B);

    // Liberação de memória
    free(A);
    free(B);
    free(C);

    return 0;
}
