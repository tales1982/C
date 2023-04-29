#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Listagem de alunos\nNome\t\tNotas\n");
    printf("------------------------\n");
    printf("Ana Beatriz\t8.5\n");
    printf("Bianca Martins\t9.0\n");
    printf("Claudio Sà\t5.5\n");
    printf("Giovana Silva\t7.5\n");
    printf("------------------------\n");
    }