/*
 * Desenvolva um algoritimo que receba dois números, calcule e mostre a multiplicaçao entre eles, 
 * se ambos forem iguais.
 * Caso o primeiro seja maior que o segundo,mostre a subtraçao do primeiro pelo segundo. 
 * Caso  contrario mostre a soma entre os dois. 
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  int a, b;

  printf("Digite o primeiro valor.\n");
  scanf("%i",&a);
  setbuf(stdin,NULL);

  printf("Digite o segundo valor.\n");
  scanf("%i",&b);
  setbuf(stdin,NULL);

  if(a == b){
    printf("A multiplicaçao de %i x %i = %i\n",a,b,(a*b));
  }else if(a > b){
    printf("A subtraçao de %i - %i = %i",a,b,(a-b));
  }else{
    printf("A soma de %i + %i = %i\n",a,b,(a+b));
  }

  return 0;
}
