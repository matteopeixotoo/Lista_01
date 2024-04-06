// Questao 17:
#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenação ascendente
int compare_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função de comparação para ordenação descendente
int compare_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

// Função para ordenar um array de inteiros usando qsort() e uma função de comparação personalizada
void custom_sort(int *array, int size, int (*compare)(const void*, const void*)) {
    qsort(array, size, sizeof(int), compare);
}

// Função para imprimir um array
void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {5, 2, 8, 1, 3, 9, 4, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array original:\n");
    print_array(array, size);

    // Ordenação ascendente
    custom_sort(array, size, compare_asc);
    printf("Array ordenado (ascendente):\n");
    print_array(array, size);

    // Ordenação descendente
    custom_sort(array, size, compare_desc);
    printf("Array ordenado (descendente):\n");
    print_array(array, size);

    return 0;
}

// Neste código, compare_asc() e compare_desc() são funções de comparação que podem ser passadas para custom_sort() para especificar a ordem ascendente ou descendente, respectivamente. A função custom_sort() recebe um array de inteiros, seu tamanho e um ponteiro para a função de comparação, e usa a função qsort() para ordenar o array com base na função de comparação fornecida.
