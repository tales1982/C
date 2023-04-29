/**
 * Desenvolva um algoritimo que simule um caixa eletronico. O usuário deve inserir o valor total a ser sacado da maquina e o algoritimo deve informar quantas notas de ->100 ->50 ->20 ->10 ->5 ->2 ->1 serao entregues. Deve-se escolher as notas para que o usuario receba o menor número de notas possivel. 
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cem = 100, cinquenta = 50, vinte = 20, deiz = 10, cinco = 5, dois = 2,um = 1, saque;
    printf("Insira um valor a sacar:\n");
    scanf("%d",&saque);
    setbuf(stdin,NULL);
    printf("--------------------------\n");
    cem = saque / 100;
    saque = saque % 100;
    cinquenta = saque / 50;
    saque = saque % 50;
    vinte = saque / 20;
    saque = saque % 20;
    deiz = saque / 10;
    saque = saque % 10;
    cinco = saque / 5;
    saque = saque % 5;
    dois = saque / 2;
    saque = saque % 2;
    um = saque / 1;
    
    printf("n° de notas R$: 100: %d\n",cem);
    printf("n° de notas R$: 50: %d\n",cinquenta);
    printf("n° de notas R$: 20: %d\n",vinte);
    printf("n° de notas R$: 10: %d\n",deiz);
    printf("n° de notas R$: 5: %d\n",cinco);
    printf("n° de notas R$: 2: %d\n",dois);
    printf("n° de notas R$: 1: %d\n",um);
    
}