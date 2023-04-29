// 2) Receber um nome, e imprimir as letras na posicao impar.
// outra maneira de fazer usando a biblioteca string.h

#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[])
{
   int i,tam,x;
   char nome[30];
printf("Informe um nome.\n");
fgets(nome,30,stdin);

tam = strlen(nome);//strlen informa o tamanho da da variavel exe= (tales tamanho 5)

for (i = 0; i <= tam -1 ;i = i+2) {
 //o tam - 1 e para eliminar o espaco no final da impresao do codigo.
  printf("%c\n",nome[i]);
}


  return 0;
}


