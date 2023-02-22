/**
 * Faça um programa que receba tres notas e seus respectivos pesos, calcule e mostre a media ponderada desas notas.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota1,nota2,nota3,peso1,peso2,peso3 ;
    
    printf("Digite a 1° nota.\n");
    fflush(stdin);
    scanf("%f",&nota1);
    fflush(stdin);
    printf("Digite o peso da nota.\n");
    scanf("%f", &peso1);
    fflush(stdin);

    printf("Digite a 2° nota..\n");
    scanf("%f",&nota2);
    fflush(stdin);
    printf("Digite o peso da nota.\n");
    scanf("%f", &peso2);
    fflush(stdin);

    printf("Digite a 3° nota.\n");
    scanf("%f",&nota3);
    fflush(stdin);
    printf("Digite o peso da nota.\n");
    scanf("%f", &peso3);

  float mediaPoderada = (nota1 * peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
  
  printf("%3.f\n",mediaPoderada);

    printf("Media ponderada %.2f",mediaPoderada);
   
}


/*
n1=9 * p1=2 total ==18
n2=7 * p2=2 total ==14
n3=6 * p3=2 total ==12
n4=10 * p4=3 total ==30

total media n= n8
total media p= p 8,22


n1+n2+n3+n4 == 31 / 4 (n1,n2,n3,n4)
p1+p2+p3+p4 == 14

*/