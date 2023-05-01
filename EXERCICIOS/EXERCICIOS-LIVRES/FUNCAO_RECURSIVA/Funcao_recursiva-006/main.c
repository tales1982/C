/*
 Desenvolvar uma funcao recursiva que calcule a soma dos números anteriores a n.
 */

#include<stdio.h>

int recursiva(int n);

int main(int argc, char *argv[])
{
  int n;
  printf("Digite um valor pra calcula com seus anteriores..: ");
  scanf("%i",&n);
  setbuf(stdin,NULL);
  
  printf("Resultado = %i\n",recursiva(n));

  return 0;
}

int recursiva(int n)
{
  if(n == 0){
    return 0;
  }else{
    return n + recursiva(n-1);
  }
}
