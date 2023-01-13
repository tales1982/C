#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char name1[15], name2[15], name3[15];

    char sexo1, sexo2, sexo3;

    float note1, note2, note3;

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);

    printf("Digite seu nome?\n");
    gets(name1);

    printf("Qual é seu sexo [M/F]\n");
    sexo1 = getchar(); // usando para char 'a'

    printf("Qual sua nota?\n");
    scanf("%f", &note1);
    getchar();

    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);

    printf("Digite seu nome?\n");
    fgets(name2, 15, stdin);

    printf("Qual é seu sexo [M/F]\n");
    sexo2 = getchar(); // usando para char 'a'

    printf("Qual sua nota?\n");
    scanf("%f", &note2);
    getchar();

        printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);

    printf("Digite seu nome?\n");
    fgets(name3, 15, stdin);

    printf("Qual é seu sexo [M/F]\n");
    sexo3 = getchar(); // usando para char 'a'

    printf("Qual sua nota?\n");
    scanf("%f", &note3);

    printf("==============================\n");
    printf("LISTAGEM COMPLETA");
    printf("------------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t\t%c\t%f",name1,sexo1,note1);
}