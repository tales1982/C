/*
 Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.
 */

#include<stdio.h>

int recursiva(int n);

int main(int argc, char *argv[])
{
  int num, res;

  printf("Digite um numero..: ");
  scanf("%i",&num);
  setbuf(stdin,NULL);

  res = recursiva(num);

  printf("O resultado é %i\n",res);
  return 0;
}


int recursiva(int n)
{
int res;

if(n == 0){
res = n;
}else{
  res = n + recursiva(n-1);
}
return res;

}
