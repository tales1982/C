
/*
Escreva um programa que receba as matricula, nomes e as notas das avaliaçoes
bimestrais de uma relaçao de alunos.
--Usar a estrutura seguinte:--
--> nome : 30 caracteres;
--> matricula : inteiro;
--> notas : vetor de 3 float;
--> media : float.
O vetor tem no maximo 60 alunos. O cadastro termina quando a matricula 0 for entrada
o programa deve emitir um relarorio incluindo os nomes e as medias anuais, calculadas
como média aritméticas das avaliaçoes bimestrais.
*/
/*------------- BIBLIOTECAS --------------*/
#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 60

typedef struct {
  char nome[31];
  int matricula;
  float notas[3];
  float media;
} Aluno;

int main() {
  Aluno alunos[MAX_ALUNOS];
  int i = 0;

  while (i < MAX_ALUNOS) {
    printf("Digite a matricula do aluno (0 para sair): ");
    scanf("%d", &alunos[i].matricula);

    if (alunos[i].matricula == 0) {
      break;
    }

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", alunos[i].nome);

    printf("Digite as notas do aluno nos 3 bimestres: ");
    scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);

    alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;

    i++;
  }

  printf("\nRelatorio de Alunos\n");
  for (int j = 0; j < i; j++) {
    printf("Matricula: %d\n", alunos[j].matricula);
    printf("Nome: %s\n", alunos[j].nome);
    printf("Media Anual: %.2f\n", alunos[j].media);
    printf("\n");
  }

  return 0;
}
