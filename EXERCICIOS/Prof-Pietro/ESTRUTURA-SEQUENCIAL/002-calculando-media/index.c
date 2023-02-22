/*
Faça um programa que receba tres notas, calcule e mostre a media aritimetica entre elas.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float notas[3];
    int i;
    float soma;
    float media; 

    for(i=0;i<3;i++){
    printf("Digite as trés notas:\n");
    scanf("%f", &notas[i]);
    soma += notas[i];    
    media = soma/3;
    }


    printf("A soma das nota é :%.2f e a media das notas é :%.2f \n",soma , media);
}