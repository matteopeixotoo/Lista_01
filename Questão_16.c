//Questao 16:
#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int compare(const void *a, const void *b) {
    float float_a = *((float *)a);
    float float_b = *((float *)b);

    if (float_a < float_b) return -1; // Indica que o primeiro elemento é considerado menor que o segundo elemento na ordem desejada.
    if (float_a > float_b) return 1;  // Indica que o primeiro elemento é considerado maior que o segundo elemento na ordem desejada.
    return 0;
}

// Função para ler n valores do tipo float e apresentá-los em ordem crescente
void readAndSort(float *array, int n) {
    // Ler n valores do tipo float
    printf("Digite %d valores float:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }

    // Ordenar os valores em ordem crescente
    qsort(array, n, sizeof(float), compare);

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

// Neste programa, a função readAndSort() é responsável por ler os valores float, armazená-los em um array alocado dinamicamente e ordená-los em ordem crescente usando a função qsort() "da biblioteca padrão stdlib.h.", a função compare() é uma função de comparação utilizada pela qsort() para determinar a ordem dos elementos.
