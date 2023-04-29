/*
        Modos de abertura de arquivos:
        w -> Escrita
        r -> leitura
        a -> anexar
        rb -> abre um arquivo binario pra leitrura
        wb -> cria um arquivo binario pra escrita
        ab -> acresenta dados a um arquivo binario
        r+ -> leitura e escrita
        w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
        a+ -> leitura e escrita (adiciona ao final do arquivo)
        r+b -> abre um arquivo binario pra leitura e escrita
        w+b -> cria um arquivo binario pra leitura e escrita
        a+b -> acresenta um arquivo binario pra leitura e escrita
--------------------------------------------------------------------------
                         Estrutura de dados 

Sabendo que a maior linha de um arquivo, denominado Tudor.txt (Apêndice A,)contem 29 caracteres,
incluindo o caracter de quebra de linha (\n), escreva um programa queue criar uma copia desse
arquivo num arquivo denominado BK.txt usando as funcoes fgets() e fprintf().
*/
/*--------------------------------- BIBLIOTECA --------------------------------*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*-------------------------- DECLARACAO DE PROTOTIPO --------------------------*/
void copiandoAquivo(FILE *file1, FILE *file2);


/*---------------------------------- MAIN -------------------------------------*/
void main() {

  FILE *file1;
  FILE *file2;


  file1 = fopen("arquivo.txt","r");
  file2 = fopen("arquivo2.txt","w");
  if(file1 == NULL && file2 == NULL){
    printf("[ERRO]");
  }

  copiandoAquivo(file1,file2);

  fclose(file1);
  fclose(file2);

  return 0;

}

/*------------------------ PROTOTIPO FUCAO  ESCREVER -----------------------*/

void copiandoAquivo(FILE *file1, FILE *file2)
{
  char leitor[29];
  while (fgets(leitor,29,file1) != NULL){
    fputs(leitor, file2);
  }    


}
