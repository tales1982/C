/*
 * Crie um algaritimo que pesa para um usuarioinsirir o número real e, em seguida,calcule
 * e mostre oque se pede no item, A e B.
 * A)--> a parte inteira desse número.
 * B)--> a parte fracionaria desse numero.
 * EXEMPLO == 3.14
 * A=3 parte inteira
 * B=0.14 parte fracionaria
 * */
#include<stdio.h>

int main()
{


  float a, *ptr = &a; 
  printf("Digite um numero REAL.\n");
  scanf("%f",ptr);


  printf("%.0f\n",*ptr);
  printf("%.2f\n",*ptr -((int)*ptr));
  return 0;
}

/*
int main(void)
{
  float a= 6.28 , *ptr = &a;
  
printf("Parte inteira : %.0f\n",*ptr);
printf("Parte fracionaria : %.2f\n",*ptr-((int)*ptr));
  return 0;
}
*/