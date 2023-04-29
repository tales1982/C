/*
 Usando Passagem de Parametro por Valor, esse metodo e parecido com a passagem de parentro por referencia so parecido, porque a linguagem c nao aceita passagen por referencia.
 * */

#include <stdio.h>
#include <stdlib.h>


void descrobriValor(int *v,int *menor,int *maior,int tam);

int main(int argc, char *argv[])
{
  int vet[] = {50,10,250,500,25};
  int menor=0;
  int maior=0;
  int tam = 5;


descrobriValor(vet,&menor,&maior,tam);


  return 0;
}



void descrobriValor(int *v, int *menor, int *maior, int tam){
  int i;
  *menor = v[0];
  *maior = v[0];

  for (i = 0; i < tam; i++) {
    if(v[i] < *menor){
      *menor = v[i];
    }
    if(v[i] > *maior){
      *maior = v[i];
    }
  }
  printf("Maior..: %i\nMenor..: %i\n",*maior,*menor);
}
