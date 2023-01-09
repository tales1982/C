#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("\nListagem de Alunos\nNome\t\tNota\n------------------\n");
    printf("Ana Beatriz\t8.5\nBianca Martines\t9.0\nClaudio Sà\t5.5\nGiovana Silva\t7.5\n\n");
};
