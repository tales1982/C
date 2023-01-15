#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome1[30],nome2[30],nome3[30];
    char sexo1[2], sexo2[2], sexo3[2];
    char nota1[3], nota2[3], nota3[3];
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");

    fgets(nome1,30,stdin);
    fflush(stdin);
    printf("imprimindo :%s\n",nome1);

    printf("SEXO [M/F]: ");
    fgets(sexo1, 2, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", sexo1);

    printf("NOTA: ");
    fgets(nota1, 3, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", nota2);

    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome2, 30, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", nome2);

    printf("SEXO [M/F]: ");
    fgets(sexo2, 2, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", sexo2);

    printf("NOTA: ");
    fgets(nota2, 3, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", nota2);

    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome3, 30, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", nome3);

    printf("SEXO [M/F]: ");
    fgets(sexo3, 2, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", sexo3);
    printf("NOTA: ");

    fgets(nota3, 3, stdin);
    fflush(stdin);
    printf("imprimindo :%s\n", nota3);
    printf("------------------------------\n");
    /*
    printf("Nome:%sSexo:%s\nNota :%s\n", nome1, sexo1, nota1);
    printf("------------------------------\n");
    printf("Nome:%sSexo:%s\nNota :%s\n", nome2, sexo2,nota2);
    printf("------------------------------\n");
    printf("Nome:%sSexo:%s\nNota :%s\n", nome3, sexo3, nota3);*/
}