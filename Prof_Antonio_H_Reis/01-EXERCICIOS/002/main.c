/*
Escreva um programa que leia tres notas de uma aluno e calcule sua media*/
#include<stdio.h>

int main()
{
    float a, b, c, res;

printf("Digite sua 1° nota.\n");
scanf("%f",&a);
setbuf(stdin,NULL);

printf("Digite sua 2° nota.\n");
scanf("%f",&b);
setbuf(stdin,NULL);

printf("Digite sua 3° nota.\n");
scanf("%f",&c);
setbuf(stdin,NULL);

res = (a+b+c)/3;

printf("Sua media final foi de %.1f\n",res);
}