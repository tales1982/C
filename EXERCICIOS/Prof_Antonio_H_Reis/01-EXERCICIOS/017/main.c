/*
   Em uma escola a professora necessita de um programa que leia as 3 notas escolares
   de um aluno, calcule a média e apresente-a, depois deverá informar se o aluno foi:
   "APROVADO" ou "REPROVADO", baseando-se na média da escola que é '6'.
   obs.: O programa deve cria um cadastro do aluno com nome,matricula, notas e media. 
   O programa de fazer a pergunta: "Deseja digitar as notas de outro aluno?(s/n)"
   */
/*-------------- BIBLIOTECA -----------*/
#include <stdio.h>
#include <string.h>

/*------------ Diretivas -------------*/
#define Non 30
#define End 100
#define Not 3
#define TAM 50
/*------------ STRUCT ----------------*/
typedef struct{
  char nome[Non];
  int matricula;
  float notas[Not];
  float media;
}Aluno;


/*------- Declaraçao da funçao -------*/

void menu();
Aluno cadastro();
void imprimir(Aluno alunos);
/*--------------- MAIN --------------*/
int main(int argc, char *argv[])
{
  int i = 0, num ,modificar,id =0;
  int opcao;
  float media = 0.0;

  Aluno alunos[TAM];

  do {
    menu();
    printf("\n");
    scanf("%i",&opcao);
    setbuf(stdin,NULL);


    switch (opcao) {
      case 1:
        printf("Quantos aluno pretende cadastra.\n");
        scanf("%i",&num);
        setbuf(stdin,NULL);
        for (i ; i < num; ++i) {
          alunos[i] = cadastro();
        }

        break;
      case 2:

        for (int i =0 ; i < num; i++) {
          media = (alunos[i].notas[0]+alunos[i].notas[1]+alunos[i].notas[2])/3;
          printf("======================\n");
          printf("ID = %i°\n",i+1);
          imprimir(alunos[i]);
          printf("Sua media..: %.2f\n",media);
          if(media >= 6){
            printf("Aprovado\n");
          }else{
            printf("Reprovado\n");
          }
        }

        break;
      case 3:
        printf("Digite o id do aluno para altera.\n");
        scanf("%i",&id);
        setbuf(stdin,NULL);

        id = id - 1;
        alunos[id] = cadastro();



      case 4:
        printf("SAINDO......\n");
        break;

      default:

    }
  } while (opcao != 4);


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
  printf("|   1 --> INSERIR ALUNOS              |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|   2 --> VISUALIZAR ALUNOS           |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|   3 --> ALTERAR DADOS DE ALUNOS     |\n");
  printf("|_____________________________________|\n");
  printf("|                                     |\n");
  printf("|   4 -->      SAIR                   |\n");
  printf("|_____________________________________|\n");
}
//CADASTRO DE ALUNOS
Aluno cadastro()
{

  Aluno alunos;
  printf("Digite o nome do aluno ..: ");
  scanf("%[^\n]",alunos.nome);
  setbuf(stdin,NULL);

  printf("Digite a matricula de %s..: ",alunos.nome);
  scanf("%i",&alunos.matricula);
  setbuf(stdin,NULL);

  for (int i =0 ;i < Not; ++i) {
    printf("Digite a %i° nota de %s..: ",i+1,alunos.nome);
    scanf("%f",&alunos.notas[i]);
    setbuf(stdin,NULL);

  }
  return alunos;
}
/*==============================================================*/
/*IMPRIMIR UM ALUNO*/

void imprimir(Aluno alunos)
{
  int id = 0 ;
  printf("Nome........: %s",alunos.nome);
  printf("\nMatricula...: %i\n",alunos.matricula);
  for (int i = 0; i < Not; ++i) {
    printf("\%i° Nota....: %2.f\n",i+1,alunos.notas[i]);
  }

}
