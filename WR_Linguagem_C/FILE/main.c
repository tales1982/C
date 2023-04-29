/*
   Existem vários modos de abertura de um arquivo:

   --> r - abre um arquivo no modo leitura
   --> w - abre ou cria um arquivo de texto no modo de escrita
   --> a - abre um arquivo no modo de inclusão (append)
   --> r+ - abre um arquivo nos modos de leitura e escrita
   --> a+ - abre um arquivo nos modos de leitura e escrita
   --> w+ - abre um arquivo nos modos de leitura e escrita
   --> rb	Abre um arquivo binário que já existe para leitura. Caso o arquivo não exista, 
   retorna um erro.
   --> w+b	Abre um novo arquivo binário para gravação. 
   Caso o arquivo já exista será sobrescrito na gravação.
   --> a+b	Abre um arquivo binário para adicionar dados.
   --> r+b	Abre um arquivo binário que já existe para leitura e gravação.
   Caso o arquivo não exista, retorna um erro.
   --> w+b	Abre um novo arquivo binário para leitura e gravação. Caso o arquivo já exista será sobrescrito na gravação.
   --> a+b	Abre um arquivo binário para adicionar dados. Caso o arquivo não exista, será criado um novo arquivo.

*/
#include<stdio.h>
#include<stdlib.h>



void escrever(char f[]);
void ler(char f[]);
void acresentar(char f[]);

int main(int argc, char *argv[])
{
  char nome[] = {"teste.txt"};
  escrever(nome);
  ler(nome);

   printf("\n");
  acresentar(nome);
  
  ler(nome);
  return 0;
}

/*-------------- FUNCAO ESCREVER ARQUIVO --------------------*/
void escrever(char f[])
{
  FILE *file = fopen(f, "w");
  char letra;
  if(file){
    printf("\nDigite um texto e presione entre!\n");
    scanf("%c",&letra);
    while(letra != '\n'){
      fputc(letra, file);
      scanf("%c", &letra);
    }
  
    fclose(file);
  }else{
    printf("\nERRO ao abri o arquivo");
  }
}
/*--------------- FUNCAO LER ARQUIVO -----------------------*/

void ler(char f[])
{
  FILE *file = fopen(f,"r");
  char letra;

  if(file){
    printf("Texto lido do arquivo!\n");
    while(!feof(file)){
      letra = fgetc(file);
      printf("%c",letra);
    }
    fclose(file);
  }else{
    printf("\nERRO ao abrir o arquivo!");
  }
}
/*------------------- FUNCAO ACRESENTA ----------------------*/
void acresentar(char f[])
{
  FILE *file = fopen(f, "a");
  char letra;
  if(file){
    printf("\nDigite outro contato e presione entre!\n");
    scanf("%c",&letra);
    while(letra != '\n'){
      fputc(letra, file);
      scanf("%c", &letra);
    }
    fclose(file);
  }else{
    printf("\nERRO ao abri o arquivo");
  }
}

