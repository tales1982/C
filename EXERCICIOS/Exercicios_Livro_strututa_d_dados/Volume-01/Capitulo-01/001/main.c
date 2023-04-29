/*---------------------EXERCICIOS DE PROGRAMAÇAO----------------------

  Escreva um programa para gerenciamento de finaças pessoais do usuario.
  O programa devera solicitar o salario  inicial do usuario, e entao pedir pra que ele introduza,
  continuamente, valores de despesas e ganhos.
  A entrada de dados deve encerar quando o usuario digitar (s).

*/

/*---------- Bibliotecas ----------*/
#include<stdio.h>
#include<locale.h>
#include<string.h>

/*----------- Diretivas ----------*/
#define TAM 50


/*------------- MAIN -------------*/

int main(int argc, char *argv[])
{
  FILE *f_sal;
  f_sal = fopen("dispesas.txt","a+");
  if(f_sal == NULL){
    printf("ERRO arquivo nao encontrado!");
  }

  int i = 0;
  char opcao,meis[TAM];
  char nome[TAM];
  float salario = 0, despesas[3]={0}, ganhos[3] = {0} , restante_mensal = 0;
  float soma_despesa, soma_ganhos;


  printf("Digite o nome do usuario!\n");
  scanf("%50[^\n]",nome);
  setbuf(stdin,NULL);
  fprintf(f_sal,"\nUSUARIO....: %s\n",nome);

  printf("Digite o meis.\n");
  scanf("%50[^\n]",meis);
  setbuf(stdin,NULL);
  fprintf(f_sal,"MEIS....: %s\n",meis);


  printf("Digite o valor do seu salaro mensal\n");
  scanf("%f",&salario);
  setbuf(stdin,NULL);
  fprintf(f_sal,"Salario Mensal....: +%.2f\n",salario);
  fprintf(f_sal,"=====================================\n");
 
  do {
    printf("Digite (d) para declara dispesas ou (g) para ganhos ou (s) pra sair.\n");
    opcao = getchar();

    if(opcao == 'd'){
      int n;
      printf("Digite quantas despesas voce quer cadastra!\n");
      scanf("%i",&n);

      for (int j = 0; j < n; j++) {
        printf("%i° Dispesa...: ",j+1);
        scanf("%f",&despesas[j]);
        setbuf(stdin,NULL);
        fprintf(f_sal,"%i° Dispesa.....: -%.2f\n",j+1 ,despesas[j]);

        soma_despesa += despesas[j];
      }

    }else if(opcao == 'g'){

      int n;
      printf("Digite quantas vesses voce quer cadastra ganhos extras!\n");
      scanf("%i",&n);
      setbuf(stdin,NULL);
      fprintf(f_sal,"=====================================\n");
     
      for (int  j = 0; j < n; j++) {
        printf("%i° Ganho...: ",j+1);
        scanf("%f",&ganhos[j]);
        setbuf(stdin,NULL);
        fprintf(f_sal,"%i° Ganhos Extras.....: +%.2f\n",j+1 ,ganhos[j]);

        soma_ganhos += ganhos[j];
      }
    }

  }while (opcao !='s');


  restante_mensal = (salario + soma_ganhos) - soma_despesa;

  fprintf(f_sal,"=====================================\n");
  fprintf(f_sal,"Total de gastos.....: %.2f\n",soma_despesa);
  fprintf(f_sal,"Total de Ganhos.....: %.2f\n",soma_ganhos);
  fprintf(f_sal,"=====================================\n");
  fprintf(f_sal,"Total de gastos.....: %.2f\n",soma_despesa);
  fprintf(f_sal,"Salario restante.....: %.2f\n",restante_mensal);
  fprintf(f_sal,"#####################################\n\n");

  printf("despesas = %.2f\nGanhos = %.2f\nRestante do salerio %.2f\n",soma_despesa,soma_ganhos,restante_mensal);
  printf("Arquivo gravado com sucesso!!\n");
  fclose(f_sal);
  return 0;

}
