/**faça um programa que receba quatro números inteiros, e calcule e mostre a soma desse numeros.
 * 
*/
#include <stdio.h>

int main(){

float nota1, nota2, nota3, nota4;
    
printf("Digite a 1° nota\n");
scanf("%f", &nota1);

printf("Digite a 2° nota\n");
scanf("%f", &nota2);

printf("Digite a 3° nota\n");
scanf("%f", &nota3);
printf("Digite a 4° nota\n");
scanf("%f", &nota4);

float somaNota = nota1 + nota2 + nota3 + nota4 ;

printf("A soma das notas é.: %.2f\n",somaNota );
}