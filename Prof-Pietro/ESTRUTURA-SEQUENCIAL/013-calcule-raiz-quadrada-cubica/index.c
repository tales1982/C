/*
*Faça um programa que receba um número positivo e maior que zero, calcule e mostre: o Quadrado -> Cubo -> Raiz quadrada -> Raiz cubica.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main (){
setlocale(LC_ALL,"Portuguese");
double num, qua, cub, quad, rcub;
printf("=============================\n");
printf("<<<<<Insira um numero:>>>>>>\n");
printf("=============================\n");
scanf("%lf",&num);
setbuf(stdin,NULL);
qua = pow(num,2);
printf("Quadrado: %.0f.\n",qua);
cub = pow(num,3);
printf("Cubo: %.0f\n",cub);
quad = sqrt(num);
printf("Raiz Quadrada: %.10lf \n",quad);
rcub = pow(num, 1.0/3.0); 
printf("Rais Cúbica: %.10lf\n",rcub);
}
