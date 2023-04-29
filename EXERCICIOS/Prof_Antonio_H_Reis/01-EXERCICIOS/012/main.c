/*
 Escreva um programa que leia 10 valores inteiros do teclado e escra a soma deles no final.
 */


#include <stdio.h>
#define N 10


int escrever(int valores[]);
int imprimir(int valores[]);

int main(int argc, char *argv[])
{
int val[N];
 escrever(val);
 imprimir(val);


 return 0;
}


int escrever(int valores[]){

  int i = 0,res = 0;
  printf("Digite 10 valores.\n");

  for (i = 0; i < N; i++) {
  scanf("%i",&valores[i]);
  setbuf(stdin,NULL);

}

return valores[i];
}


int imprimir(int valores[]){

int i =0, res = 0;
  for (i = 0; i < N; i++) {
    printf("Valor...: %i\n",valores[i]);

    res += valores[i];
  }

    printf("Total da soma dos numeros...: %i\n",res);
}

