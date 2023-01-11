#include <stdio.h>

void main(){
char nome[30];
int idade;
float peso;

    printf("Qual é seu nome?\n");
    fgets(nome,30,stdin);//usse fgets o gets ja nao exister
    printf("Quantos anos você tem? \n");
    scanf("%d",&idade);
    printf("Qual é o seu peso? \n");
    scanf("%f",&peso);
    printf("Muito prazer %s, voce tem %d anos, e pesa %.2f kilos.",nome,idade,peso);

}