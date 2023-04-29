#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[15];
    int idade;
    float peso;

    printf("Qual é seu nome?\n");
    fgets(nome,10,stdin);//entrada para string

    printf("Quantos aos voce tem?\n");
    scanf("%d",&idade);

    printf("Qual é seu peso?\n");
    scanf("%f",&peso);
    
    printf("------<<<< PROCESSANDO >>>>------\n");
    printf("Muito prazer, %s. Voce tem %d anos e pesa %.2fkg, correto?\n",nome,idade,peso);

}