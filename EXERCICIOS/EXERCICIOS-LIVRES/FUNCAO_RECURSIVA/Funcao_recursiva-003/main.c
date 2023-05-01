/*
 Faça uma fuçao recursivaue calcule e retorne o enésimo termo da sequêcia fibonacci.
 Alguns números desta sequência sao 0,1,1,2,3,5,8,13,21,34,55,89......
 Fórmula de Fibonacci

=========================================================================================
A sucessão de Fibonacci é uma sequência de números inteiros iniciados por zero e um,
no qual cada termo subsequente corresponde a soma dos dois números anteriores:
0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584...  
=========================================================================================
Fórmula:

F(0)=0; F(1)=1; F(n) = F(n-1) + F(n-2), n>1
*/

#include<stdio.h>

int fibonacci(int n);

int main(int argc, char *argv[])
{
  int n;
  printf("Digite um valor para calcula o enésimo termo de fibonacci..: ");
  scanf("%i",&n);
  setbuf(stdin,NULL);
  printf("Resultado..: %i\n",fibonacci(n));
  return 0;
}

int fibonacci(int n)
{
  if(n < 2){
    return n;
  }else{
    return fibonacci(n -1) + fibonacci(n - 2);
  }
}
