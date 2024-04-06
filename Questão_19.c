// Questão 19
#include <stdio.h>

void soma_vetores(int *x, int *y, int *resultado, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = x[i] + y[i];
    }
}

int main() {
    int tamanho;
    // para soma de matrizes, as duas tem que ter mesma dimensão.
    printf("Qual o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int x[tamanho], y[tamanho], resultado[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &x[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &y[i]);
    }

    soma_vetores(x, y, resultado, tamanho);

    printf("Vetor de soma:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
