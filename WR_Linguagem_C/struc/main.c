
#include<stdio.h>
#include<string.h> // incluir biblioteca string.h para usar a função strcpy()

int main(int argc, char const *argv[])
{
    struct funcionario {
        int id;
        char nome[50]; // definir campo nome como um array de caracteres
        float salario;
    };

    struct funcionario pmat;
    pmat.id = 1212;
    strcpy(pmat.nome, "João Silva"); // usar strcpy() para atribuir uma string
    pmat.salario = 3.875;

    printf("O id do funcionario: %i\n", pmat.id);
    printf("O nome do funcionario: %s\n", pmat.nome);
    printf("O salario do funcionario: %.2f\n", pmat.salario);

    return 0;
}


/*
Esse programa em C define uma struct chamada "funcionario" que contém três campos: "id" (um inteiro), "nome" (um array de caracteres de tamanho 50) e "salario" (um número em ponto flutuante).

Na função principal (main), é criada uma variável do tipo "funcionario" chamada "pmat". Em seguida, o campo "id" dessa variável é atribuído o valor 1212, o campo "nome" é atribuído a string "João Silva" usando a função strcpy() da biblioteca string.h, e o campo "salario" é atribuído o valor 3.875.

Finalmente, são impressos na tela os valores dos campos "id", "nome" e "salario" usando a função printf() da biblioteca stdio.h. O caractere "%i" é usado para imprimir o valor do campo "id", o caractere "%s" é usado para imprimir o valor do campo "nome" (que é uma string), e o caractere "%.2f" é usado para imprimir o valor do campo "salario" com duas casas decimais.

O resultado da execução do programa é a impressão na tela das seguintes linhas:

bash
Copy code
O id do funcionario: 1212
O nome do funcionario: João Silva
O salario do funcionario: 3.88
Note que o valor do campo "salario" foi impresso com duas casas decimais, conforme especificado no caractere "%.2f" do terceiro printf().



Regenerate response
*/