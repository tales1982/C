/*
 Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela. 
*/

#include<stdio.h>

void troca(int a,int b);

int main(int argc, char *argv[])
{
  int a,b,copia;
  printf("Digite 1° numero pra salvar na variavel A...: ");
  scanf("%i",&a);
  setbuf(stdin,NULL);
  printf("Digite 2° numero pra salvar na variavel B..: ");
  scanf("%i",&b);
  printf("Valor de A = %i \nValor de B = %i\n",a,b);
  troca(a,b);
  setbuf(stdin,NULL);
  return 0;
}

void troca(int a,int b)
{

 int copia = a;
  a = b;
  b = copia;
  printf("A = %i B = %i\n",a,b);
}

