#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome1[30],nome2[30],nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome1,30,stdin);
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    fflush(stdin);
    printf("NOTA: ");
    scanf("%f",&nota1);
    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome2, 30, stdin);
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);
    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome3, 30, stdin);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);
    printf("------------------------------\n");
    printf("Nome:%sSexo:%c\nNota:%.2f\n", nome1, sexo1, nota1);
    printf("------------------------------\n");
    printf("Nome:%sSexo:%c\nNota:%.2f\n", nome2, sexo2,nota2);
    printf("------------------------------\n");
    printf("Nome:%sSexo:%c\nNota:%.2f\n", nome3, sexo3, nota3);
}