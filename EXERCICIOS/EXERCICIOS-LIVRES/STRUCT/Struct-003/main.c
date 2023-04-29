/*
 Escreva um programa que simule contas bancárias, com as seguintes especificações:

-Ao iniciar o programa vamos criar contas bancárias para três clientes.

-Cada conta cliente terá o nome, CPF.

-Cada conta terá número da conta, cpf do cliente e saldo;

-No ato da criação da conta o cliente precisará fazer um depósito inicial.

-Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas. 
OBS: Crie um menu com essas opções.

-Para fazer qualquer operação, o cliente deverá informar o número da conta e o valor.

-Sempre que uma operação de saque ou depósito for realizada, 
o sistema deverá imprimir o nome do titular e o saldo final da conta.
*/
/*---------- Bibliotecas ------------*/
#include<stdio.h>
#include"cadastro.c"

/*------ Declaracao de funcao -------*/
void menu();
Dados cadastro();
void imprimirDados(Dados pessoa);
/*------------Diretiva----------------*/
#define N 1
/*-------------- MAIN ---------------*/

int main(int argc, char *argv[])
{
  

  int opcao,i;
  float deposito, saque;
  do {
   
  menu();
  scanf("%i",&opcao);
  Dados pessoa[N];

  if(opcao == 1){
     for (i = 0; i < N; ++i) {
     pessoa[i] = cadastro();
   }
  }else if(opcao == 2){
  for (i = 0; i < N; ++i) {
     imprimirDados(pessoa[i]);
     printf("\n");
   }
  }else if(opcao == 3){

    for (i = 0; i < N; ++i) {
      printf("Qual o valor do deposito para %s\n",pessoa[i].nome);
      scanf("%f",&deposito);
      pessoa[i].saldo += deposito;
    }
  }else if(opcao == 4){
    for (i = 0; i < N; ++i) {
     
    printf("Qual o valor do seu saque %s.\n",pessoa[i].nome);
    scanf("%f",&saque);
    if(saque > pessoa[i].saldo){
    printf("Saldo Insuficiente.\n");
    }else{
    pessoa[i].saldo -= saque; 
      }
    }
  }

   
  } while (opcao != 0);



  return 0;
}
