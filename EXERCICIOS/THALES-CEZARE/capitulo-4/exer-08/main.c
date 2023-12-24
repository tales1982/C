/*
Escreva um algoritimo que leia "n" notas e determine:
a) maior nota.
b) menor nota.
c) média aritmética.
d) número de aprovados (considerando nota de aprovaçao maior ou igual a 6).
e) número de reprovados (considerando nota de reprovaçao menor que 5).
f) número de pessoas em recuoeraçao (5 <= nota < 6)
*/
#include <stdio.h>
#define TAM 5

typedef struct {
    char nome[50];
    float notas[3];
    float media;
    float max;
    float min;
} Aluno;

// Função para ler os dados dos alunos
void lerAlunos(Aluno alunos[], int tamanho) {
    int i, j;
    for (j = 0; j < tamanho; j++) {
        printf("Digite o nome do %d° aluno..:", j + 1);
        fgets(alunos[j].nome, 50, stdin);
        setbuf(stdin, NULL);

        alunos[j].min = 100.0;
        alunos[j].max = 0.0;
        alunos[j].media = 0;

        for (i = 0; i < 3; i++) {
            printf("Digite a %d° nota...:", i + 1);
            scanf("%f", &alunos[j].notas[i]);
            setbuf(stdin, NULL);

            alunos[j].media += alunos[j].notas[i];

            if (alunos[j].notas[i] < alunos[j].min) {
                alunos[j].min = alunos[j].notas[i];
            }

            if (alunos[j].notas[i] > alunos[j].max) {
                alunos[j].max = alunos[j].notas[i];
            }
        }

        alunos[j].media /= i; // Calcular a média correta
    }
}

// Função para calcular as estatísticas
void calcularEstatisticas(Aluno alunos[], int tamanho) {
    int n_aprovados = 0, n_reprovado = 0, recuperacao = 0;
    int j;

    for (j = 0; j < tamanho; j++) {
        if (alunos[j].media >= 6) {
            n_aprovados++;
        } else if (alunos[j].media < 5) {
            n_reprovado++;
        } else {
            recuperacao++;
        }
    }

    // Exibir estatísticas
    printf("===========================\n");
    printf("%d alunos aprovados.\n", n_aprovados);
    printf("%d alunos em recuperação.\n", recuperacao);
    printf("%d alunos reprovaram.\n", n_reprovado);
}

int main() {
    Aluno alunos[TAM];

    lerAlunos(alunos, TAM);
    calcularEstatisticas(alunos, TAM);

    return 0;
}


