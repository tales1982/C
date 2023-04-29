#include<stdio.h>
#include"valores.c"

int valores(int *a, int *b, int *c);

int main(int argc, char *argv[])
{

   int a, b, c;
    printf("Digite três valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    int iguais = valores(&a, &b, &c);
    printf("Valores ordenados: %d %d %d\n", a, b, c);
    if (iguais == 1) {
        printf("Os três valores são iguais.\n");
    } else {
        printf("Os três valores são diferentes.\n");
    }

    return 0;
}

/*
 * Explicação: o programa começa lendo três valores inteiros e passando seus endereços
 * como argumentos para a função ordena.
 * Essa função usa o algoritmo de ordenação "selection sort" para ordenar os valores e retorna 1
 * se eles são todos iguais ou 0 caso contrário.
 * De volta à função principal, o programa exibe os valores ordenados e uma mensagem indicando
 * se eles são iguais ou diferentes.
 */
