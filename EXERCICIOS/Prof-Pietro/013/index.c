/*
*Faça um programa que receba um número positivo e maior que zero, calcule e mostre: o Quadrado -> Cubo -> Raiz quadrada -> Raiz cubica.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main (){
setlocale(LC_ALL,"Portuguese");
double num = 2, qua = 0, cub = 0, quad = 0, rcub = 0;
//Ja tentei com float nao deu na mesma
//Ja declarei minhas variáveis com e sem valores.
printf("============================\n");
printf("<<<<<Insira um numero:>>>>>>\n");
printf("============================\n");
//scanf("%lf",&num);
setbuf(stdin,NULL);
qua = pow(num,2);
printf("Quadrado: %f.\n",qua);
cub = pow(num,3);
printf("Cubo: %f\n",cub);
quad = sqrt(num);
printf("Raiz Quadrada: %f\n",quad);
//folta calcular a rais cubica.
//rcub = 
//printf("Rais Cúbica: %f\n",rcub);
}