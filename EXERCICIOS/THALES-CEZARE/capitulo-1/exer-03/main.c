/*
 Prepara um algoritimo para calcular a area de um triangulo de base B e uma altura H (estes valores devem ser fornesido pelo usuario);
 */



#include <stdio.h>

int main(){

  float base=0.0, altura= 0.0;

 printf("Digite a altura : ");
 scanf("%f",&altura);
 setbuf(stdin,NULL);

printf("Digite a base :");
scanf("%f",&base);
setbuf(stdin,NULL);

printf("O tamanho da area e de : %.2f metros.\n",base * altura);
}

