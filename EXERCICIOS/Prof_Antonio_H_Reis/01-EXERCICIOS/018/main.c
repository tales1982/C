/*
   Escreva um programa que leia a idade e o código do estado civil de um grupo de pessoas.
   A quantidade de pessoas nao esta definida, portanto o sistema devera fazer uma pergunta
   para o usuário decidir se vai ou nao digitar dados de outra pessoa.
   No final apresentar a média das idades dos solteiros, a media das idades dos casados,
   e a media das idads do divirciados.
   codigo do estado civil estao listado abaixo:

   --> Solteiro.
   --> Casado.
   --> Divorciado.
   */
/*-------------- BIBLIOTECA -----------*/
#include <stdio.h>
#include <string.h>

/*------------ Diretivas -------------*/
#define TAM 50 
/*------------ STRUCT ----------------*/
typedef struct{
  char nome[30];
  int idade;
}Pessoas;


/*------- Declaraçao da funçao -------*/

void menu();
Pessoas cadastro();
/*--------------- MAIN --------------*/
int main(int argc, char *argv[])
{
  int opcao,N = 0;
  int cont_Sol = 0;
  int cont_Cas = 0;
  int cont_Div = 0;
  float media_Sol = 0.0;
  float media_Cas = 0.0;
  float media_Div = 0.0;


  Pessoas clientes_Sol[TAM];
  Pessoas clientes_Cas[TAM];
  Pessoas clientes_Div[TAM];
  do {
    menu();
    printf("\nDigite sua opcao...: ");
    scanf("%i",&opcao);
    setbuf(stdin,NULL);

    switch (opcao) {
      case 1:

        printf("Quantas pessoas voçe que cadastra? ...: ");
        scanf("%i",&N);
        setbuf(stdin,NULL);
        for (int i = 0; i < N; ++i) {
          clientes_Sol[i] = cadastro();
          cont_Sol++;
          media_Sol += (float)clientes_Sol[i].idade;
        }   

        break;
      case 2:

        printf("Quantas pessoas voçe que cadastra? ...: ");
        scanf("%i",&N);
        setbuf(stdin,NULL);
        for (int i = 0; i < N; ++i) {
          clientes_Cas[i] = cadastro();
          cont_Cas++;
          media_Cas += (float)clientes_Cas[i].idade;
        }   
        break;
      case 3:

        printf("Quantas pessoas voçe que cadastra? ...: ");
        scanf("%i",&N);
        setbuf(stdin,NULL);
        for (int i = 0; i < N; ++i) {
          clientes_Div[i] = cadastro();
          cont_Div++;
          media_Div += (float)clientes_Div[i].idade;
        }   
        break;
      case 4:
        int op = 0;
        printf("1- Para visualizar os solteiros.\n");
        printf("2- Para visualizar os casados\n");
        printf("3- Para visualizar os Divociados\n");
        scanf("%i",&op);
        setbuf(stdin,NULL);
        if (op == 1) {
          for (int i = 0; i < N; ++i) {
            imprimir(clientes_Sol[i]);
          } 

          printf("=====================================================\n");
          printf("Existem..: %i solteiros cadastrado.\n",N);
          printf("A media de idade dos solteiros é de ..: %.2f anos.\n",media_Sol/N);


        }else if(op == 2){
          for (int i = 0; i < N; ++i) {

            imprimir(clientes_Cas[i]);
          }

          printf("=====================================================\n");
          printf("Existem..: %i casados cadastrado.\n",N);
          printf("A media de idade dos casados é de ..: %.2f anos.\n",media_Cas/N);


        }else if(op == 3){
          for (int i = 0; i < N; ++i) {

            imprimir(clientes_Div[i]);
          }

          printf("=====================================================\n");
          printf("Existem..: %i divorciados cadastrado.\n",N);
          printf("A media de idade dos divociados é de ..: %.2f anos.\n",media_Div/N);


        }else{
          printf("Digite um numero valido.\n");
        }


        break;
      case 5:

        printf("Saindo.....\n"); 
        break;
      default:
        printf("[]ERRO!!] Digite uma opcao valida. de (1 a 4)\n");
        break;
    }  

  } while (opcao != 5);
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
  printf("|    1 --> Cadastra Solteiro          |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|    2 --> Cadastra Casado            |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|    3 --> Cadastra Divociado         |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|    4 --> VIsualiza Cadastro         |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|         5 --> SAIR                  |\n");
  printf("|_____________________________________|\n");

}
/*-------------------- CADASTRA ---------------------------------*/
Pessoas cadastro()
{
  Pessoas clientes;

  printf("Digite o nome do Cliente ...: ");
  scanf("%[^\n]",clientes.nome);
  setbuf(stdin,NULL);

  printf("Digite a idade de %s ...: ",clientes.nome);
  scanf("%i",&clientes.idade);
  setbuf(stdin,NULL);


  return clientes;

}

/*-------------------------- IMPRIMIR -------------------------------*/

void imprimir(Pessoas clientes)
{
  printf("------------------------------------------\n");
  printf("Nome..: %s\n",clientes.nome);
  printf("Idade..: %i\n",clientes.idade);
}



