/*
  2) Receber um nome, e imprimir as letras na posicao impar.
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  
char nome[30];

  printf("Digite seu nome.\n");
  fgets(nome,30,stdin);
  printf("%s",nome);
  for (int i = 0; i < nome[i]; ++i) {
    if(i % 2 == 0){
      printf("%c",nome[i]);
    }
  }




  return 0;
}

// outra maeira de fazer usando a biblioteca string.h
/*
int main(int argc, char *argv[])
{
   int i,tam,x;
   char nome[30];
printf("Informe um nome.");
fgets(nome,30,stdin);

tam = strlen(nome);//strlen informa o tamanho da da variavel exe= (tales tamanho 5)

for (i = 0; i <= tam -1 ;i = i+2) {
 //o tam - 1 e para eliminar o espaco no final da impresao do codigo.
  printf("%c\n",nome[i]);
}


  return 0;
}

*/
