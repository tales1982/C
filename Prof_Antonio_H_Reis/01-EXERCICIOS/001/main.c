/*
1° Exercicio
Escreva um programa que vai apresentar na tela as seguites informacoes,
--> O teu nome
--> na lina de baixo o nome da tua mae
--> na outra linha o nome da tua avó.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char nome[20], mae[20],avo[20];

    printf("Digite o seu nome.\n");
    gets(nome);

    printf("Digite o nome da sua mae.\n");
    gets(mae);

    printf("Digite o nome da tua avó\n");
    gets(avo);


    printf("Seu nome = %s\nNome da sua mae = %s\nNome da sua avó = %s\n",nome,mae,avo);
    /* code */
    return 0;
}
