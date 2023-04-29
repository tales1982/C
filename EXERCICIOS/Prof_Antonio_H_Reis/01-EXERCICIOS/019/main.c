/*
   Escreva um programa que controle o acesso de pessoas em um restorante.
   O restorante tem capacidade de 40 lugares, que nao poderá ser ultrapassada.
   O controle será feito atravéis de codigos, conforme a tabela abaixo:

   0- Encerrar o programa
   1- Entrar uma pessoa no restorante
   2- Sair uma pessoa no restorante
   3- Mostra quantos lugares estao disponiveis
   4- Mostra o total de pessoas que entram
   5- Mostra o total de pessoas que sairam
   */

#include <stdio.h>

#define TAM_MAX 40

void menu();
int entradaCliente();

int main(int argc, char *argv[])
{
  int opcao,op = 0,entrada = 0,saida = 0,E_total = 0,S_total,vaga,contado_E = 0,contado_S = 0;


  do {
    menu();
    printf("--> ");
    scanf("%i",&opcao);

    switch (opcao) {
      case 0:
        printf("Saindo......\n");
        break;
      case 1:
       entrada = entradaCliente();
        E_total += entrada;
        contado_E += entrada; 
        if(E_total > 40){
          printf("Desculpe nao temos lugares suficiente.\n");
          E_total -= entrada;
          contado_E -= entrada;
        }
        break;
      case 2:
        printf("Quantas pessoas vao sair?\n");
        scanf("%i",&saida);
        setbuf(stdin,NULL);
        E_total -= saida;  
        contado_S += saida;
        break; 
      case 3:
        vaga = TAM_MAX - E_total;
        printf("Temos [%i] vagas disponiveis.\n",vaga);
        break;
      case 4:
        printf("Digite 1- para ver as entradas\nDigite 2- para ver as saidas.\n");
        scanf("%i",&op);
        setbuf(stdin,NULL);
        if(op == 1){
          printf("Voce teve [%i] entradas.\n",contado_E);
        }else{
          printf("Voce teve [%i] saidas.\n",contado_S);
        }
        break;
      case 5:

        break;
      default:
        printf("[ERROR] Digite uma opçao valida!\n");

  }} while (opcao != 0);

  return 0;

}
/*------- Prototipo da Funçao -------*/
/*---------------------- MENU ------------------------*/
void menu()
{
  printf(" ______________________________________\n");
  printf("|                                     |\n");
  printf("|                MENU                 |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|    1 --> Entrada de cliente         |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");

  printf("|    2 --> Saida de cliente           |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|    3 --> Lugares dispovivel         |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|    4 --> Visualizar entrada e saida |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|         0 --> SAIR                  |\n");
  printf("|_____________________________________|\n");

}
int entradaCliente(){
 
          int entra = 0;
          printf("Messa pra quantas pessoas?\n");
          scanf("%i",&entra);
          setbuf(stdin,NULL);

          if(entra > 40){
            printf("Desculpe so temos lugares para no maximo 40 pessoas.\n");
          }
     return entra;   
  }


