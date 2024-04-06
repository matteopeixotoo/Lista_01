Questao 11:
/* e  - Se x for declarado como char, cada elemento ocupará 1 byte na memória.
    x+1 = 4092 + 1 = 4093
    x+2 = 4092 + 2 = 4094
    x+3 = 4092 + 3 = 4095

 - Se x for declarado como int, cada elemento ocupará 2 bytes na memória.
    x+1 = 4092 + 2 = 4094
    x+2 = 4092 + 4 = 4096
    x+3 = 4092 + 6 = 4098

 - Se x for declarado como float, cada elemento ocupará 4 bytes na memória.
    x+1 = 4092 + 4 = 4096
    x+2 = 4092 + 8 = 4100
    x+3 = 4092 + 12 = 4104

 - Se x for declarado como double, cada elemento ocupará 8 bytes na memória
    x+1 = 4092 + 8 = 4100
    x+2 = 4092 + 16 = 4108
    x+3 = 4092 + 24 = 4116

O código feito ficou assim (supondo que int ocupe 2 bytes, utilizei o short para simular): */

#include <stdio.h>

int main(void){

  printf("Tamanho do char: %lu\n", sizeof(char));
  printf("Tamanho do int: %lu\n", sizeof(short));
  printf("Tamanho do float: %lu\n", sizeof(float));
  printf("Tamanho do double: %lu\n", sizeof(double));
  
  char a, *x1;
  x1 = &a;
  printf("\nEndereço do char     = %p\n", x1);
  x1 = x1 + 1;
  printf("Endereço do char + 1 = %p\n", x1);
  x1 = x1 + 1;
  printf("Endereço do char + 2 = %p\n", x1);
  x1 = x1 + 1;
  printf("Endereço do char + 3 = %p\n", x1);

  short b, *x2;
  x2 = &b;
  printf("\nEndereço do int     = %p\n", x2);
  x2 = x2 + 1;
  printf("Endereço do int + 1 = %p\n", x2);
  x2 = x2 + 1;
  printf("Endereço do int + 2 = %p\n", x2);
  x2 = x2 + 1;
  printf("Endereço do int + 3 = %p\n", x2);
  
  float c, *x3;
  x3 = &c;
  printf("\nEndereço do float     = %p\n", x3);
  x3 = x3 + 1;
  printf("Endereço do float + 1 = %p\n", x3);
  x3 = x3 + 1;
  printf("Endereço do float + 2 = %p\n", x3);
  x3 = x3 + 1;
  printf("Endereço do float + 3 = %p\n", x3);

  double d, *x4;
  x4 = &d;
  printf("\nEndereço do double     = %p\n", x4);
  x4 = x4 + 1;
  printf("Endereço do double + 1 = %p\n", x4);
  x4 = x4 + 1;
  printf("Endereço do double + 2 = %p\n", x4);
  x4 = x4 + 1;
  printf("Endereço do double + 3 = %p\n", x4);

}

/* O resultado de saída encontrado foi:

Tamanho do char: 1
Tamanho do int: 2
Tamanho do float: 4
Tamanho do double: 8

Endereço do char     = 0x7ffe0c6399bf
Endereço do char + 1 = 0x7ffe0c6399c0
Endereço do char + 2 = 0x7ffe0c6399c1
Endereço do char + 3 = 0x7ffe0c6399c2

Endereço do int     = 0x7ffe0c6399bc
Endereço do int + 1 = 0x7ffe0c6399be
Endereço do int + 2 = 0x7ffe0c6399c0
Endereço do int + 3 = 0x7ffe0c6399c2

Endereço do float     = 0x7ffe0c6399b8
Endereço do float + 1 = 0x7ffe0c6399bc
Endereço do float + 2 = 0x7ffe0c6399c0
Endereço do float + 3 = 0x7ffe0c6399c4

Endereço do double     = 0x7ffe0c6399b0
Endereço do double + 1 = 0x7ffe0c6399b8
Endereço do double + 2 = 0x7ffe0c6399c0
Endereço do double + 3 = 0x7ffe0c6399c8

Observamos então que há um salto de 1 em 1 no endereço de char, de 2 em 2 no endereço de int (supondo que int ocupa 2 bytes), de 4 em 4 no endereço de float e de 8 em 8 para o endereço de double. */
