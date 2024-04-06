// Questao 15:
 #include <stdio.h>
#include <stdlib.h>

// Função para trocar dois elementos de um array
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar um array de floats em ordem crescente
void selectionSort(float *array, int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o elemento atual com o menor elemento encontrado
        swap(&array[minIndex], &array[i]);
    }
}

// Função para ler n valores do tipo float e apresentá-los em ordem crescente
void readAndSort(float *array, int n) {
    // Ler n valores do tipo float
    printf("Digite %d valores float:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }

    // Ordenar os valores em ordem crescente usando selection sort
    selectionSort(array, n);

    // Apresentar os valores ordenados
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", array[i]);
    }
}

int main() {
    int n;
    printf("Digite o número de valores float a serem lidos: ");
    scanf("%d", &n);

    // Alocar memória dinamicamente para armazenar os valores
    float *array = (float *)malloc(n * sizeof(float));

    if (array == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    // Chamar a função para ler e ordenar os valores
    readAndSort(array, n);

    // Liberar a memória alocada
    free(array);

    return 0;
}

// Neste código, a função selectionSort() implementa o algoritmo de ordenação por seleção, que itera através do array, encontra o menor elemento e o move para a posição correta. Em seguida, a função readAndSort() chama essa função para ordenar os valores inseridos no código.
