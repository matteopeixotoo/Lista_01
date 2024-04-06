/*Questao 14:
  Um ponteiro para uma função em C é um ponteiro que aponta para o endereço de memória de uma função, permitindo que você armazene o endereço de uma função e, em seguida, invoque-a indiretamente através desse ponteiro. Esse recurso é útil em situações onde deseja-se passar uma função como argumento para outra função ou até mesmo criar tabelas de funções dinâmicas.

Código:*/

#include <stdio.h>

// Definição de duas funções simples
void hello() {
    printf("Olá, mundo!\n");
}

void goodbye() {
    printf("Xau, mundo!\n");
}

int main() {
    // Declaração de um ponteiro para uma função que não recebe argumentos e não retorna nada
    void (*function_ptr)();

    // Atribuição do endereço da função 'hello' ao ponteiro da função
    function_ptr = &hello;

    // Chamada da função 'hello' através do ponteiro da função
    (*function_ptr)();

    // Atribuição do endereço da função 'goodbye' ao ponteiro da função
    function_ptr = &goodbye;

    // Chamada da função 'goodbye' através do ponteiro da função
    (*function_ptr)();

    return 0;
}

/*Explicando um pouco mais sobre o código:

#include <stdio.h>: Inclui a biblioteca padrão de entrada e saída para usar a função printf().

int main(): É uma função que serve como ponto de entrada para um programa, pois ela é a função que é chamada quando o código é executado.

void hello() { ... } e void goodbye() { ... }: Definições de duas funções simples, hello() e goodbye().

void (*function_ptr)();: Declara um ponteiro para uma função que não recebe argumentos e não retorna nada.

function_ptr = &hello;: Atribui o endereço da função hello ao ponteiro da função.

(*function_ptr)();: Chama a função apontada pelo ponteiro da função, neste caso, hello().

function_ptr = &goodbye;: Atribui o endereço da função goodbye ao ponteiro da função.

(*function_ptr)();: Chama a função apontada pelo ponteiro da função, neste caso, goodbye().*/
