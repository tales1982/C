#include <stdio.h>
#include <locale.h>
#define MAX 50

int main()
{
    
    char nome1[MAX];
    char nome2[MAX];
    char nome3[MAX];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    setlocale(LC_ALL, "Portuguese");

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome1, MAX, stdin);
    
    fflush(stdin);
    printf("SEXO [M/F] : ");
    sexo1 = getchar();
    scanf(" %c",&sexo1);
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    
    fgets(nome2, MAX, stdin);
    
    fflush(stdin);
    printf("SEXO [M/F]: ");
    scanf(" %c",&sexo2);
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome3, MAX, stdin);
    
    fflush(stdin);
    printf("SEXO [M/F]: ");
    scanf(" %c",&sexo3);
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f", &nota3);
    fflush(stdin);
    printf("LISTAGEM COMPLETA");
    printf("------------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t\t%c\t%.2f\n", nome1, sexo1, nota1);
    printf("%s\t\t%c\t%.2f\n", nome2, sexo2, nota2);
    printf("%s\t\t%c\t%.2f\n", nome3, sexo3, nota3);
}