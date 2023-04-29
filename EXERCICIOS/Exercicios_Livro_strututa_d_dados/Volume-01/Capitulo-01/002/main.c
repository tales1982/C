 /*---------------------EXERCICIOS DE PROGRAMAÇAO----------------------

  Escreva um programa que apresente na tela uma tabela de conversao de Fahrenheit para Celsius
  como mostrado abaixo

    Fahrenheit              Celsius
  ==============          ==========
      0                      -17.8
      10                     -12.2
      40                     -4.4
      80                     26.7

SUGESTAO = Utilize a formula c = (F -32)/1.8 sendo (C) a temperatura em celsius e f a temperatura em fahrenheit.
*/

/*---------- Bibliotecas ----------*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

/*----------- Diretivas ----------*/
#define F 32


/*------------- MAIN -------------*/

int main(int argc, char *argv[])
{
  float c, fah;

  printf("Digite o valor da temeratura em Fahrenheit para converter em Celsius.\n");
  scanf("%f",&fah);
  setbuf(stdin,NULL);
  c = (fah - F)/1.8;
  printf("%.1f° Celsius\n",c);
  return 0;
}
