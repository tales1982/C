/*
 Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
 */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d%d", &a, &b);

    printf("\nAntes da troca: a = %d e b = %d", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nDepois da troca: a = %d e b = %d", a, b);

    return 0;
}

