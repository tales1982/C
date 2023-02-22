/*
Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A.
*/

#include <stdio.h>
#include "prototipo.c"

void trocar_valores(int *a, int *b);

int main() {
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Valores originais: %d e %d\n", valor1, valor2);

    trocar_valores(&valor1, &valor2);

    printf("Valores trocados: %d e %d\n", valor1, valor2);

    return 0;
}
/*=============================================================================*/
/*
int prototipo(int A, int B);

int main(void){
    int A, B;

   printf("Digite o valor de A.\n");
   scanf("%i",&A);
   setbuf(stdin,NULL);


   printf("Digite o valor de B.\n");
   scanf("%i",&B);
   setbuf(stdin,NULL);

prototipo(A,B);
    return 0;
}
==============================================================================
*/