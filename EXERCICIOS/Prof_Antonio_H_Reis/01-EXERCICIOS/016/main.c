/*
   Escreva um programa que leia numeros inteiros.

   No final apresentar:
   ====================
   --> A media dos números lidos
   obs.: O programa deve fazer a pergunta: "deseja digitar outro número?(s/n)"
   Se o usuário responder.:'s' fica dentro do laço de repeticao
   Se o usuario responder.:'n' ou qualquer outra letra diferente de 's', sai do laço
   e enato vai calcular a media e aprensentar o resultado da média dos números lidos.
   */

#include<stdio.h>

int main(int argc, char *argv[])
{
  int num, acomulador, contador = 1;
  char option =  's';

  printf("DIgite um numero..: ");
  scanf("%i",&num);
  setbuf(stdin,NULL);
  acomulador = num;

  printf("\nDeseja digitar outro número? (s/n)..: ");
  option = getchar();
  setbuf(stdin,NULL);
  do {

    printf("DIgite outro numero..: ");
    scanf("%i",&num);
    setbuf(stdin,NULL);

    printf("\nDeseja digitar outro número? (s/n)..: ");
    option = getchar();
    setbuf(stdin,NULL);

    acomulador += num;
    contador ++;
  }while (option == 's');
  printf("Soma dos números..= %i\n",acomulador);

  float res = (float)acomulador / contador;
  printf("A media  dos números digitados é..: %.2f\n",res);
  return 0;
}
