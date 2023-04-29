/*
Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço...
*/

#include <stdio.h>

int main(int A, int B)
{
    printf("Digite 1° numero.\n");
    scanf("%i",&A);
    setbuf(stdin,NULL);

     printf("Digite 2° numero.\n");
    scanf("%i",&B);
    setbuf(stdin,NULL);

    printf("Os numeros digitado é : %i e %i\nE seu endereço na memoria é A :%X e B :%X\n",A,B,&A,&B);

    if(&A > &B)printf("Conteúdo do maior endereço: %d -> A\n",A);else printf("Conteúdo do maior endereço: %d -> B\n",B);

    return 0;
}
