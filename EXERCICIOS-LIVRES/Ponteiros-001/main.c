/*
1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de
cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação.
*/

#include <stdio.h>

int main(void)
{
    int inteiro = 10, *ponteiro_inteiro = NULL;

    float real = 3.14, *ponteiro_real = NULL;
    char caractere = 'A', *Ponteiro_caractere = NULL;

    printf("\n============== Valor Originaal =============\n");

    printf(" int : %i\n", inteiro);
    printf(" float : %.2f\n", real);
    printf(" char : %c\n", caractere);

    printf("\n===== Agora vou modificar com ponteiro =====\n");

    /*
    1° Crie uma variável do tipo ponteiro e inicialize-a com o endereço da variável que deseja alterar.
    */
    ponteiro_inteiro = &inteiro;
    ponteiro_real = &real;
    Ponteiro_caractere = &caractere;

    /*
    2° Acesse o valor armazenado no endereço apontado pelo ponteiro, usando o operador de desreferência "*".
    */
    int valor = *ponteiro_inteiro;
    float valor2 = *ponteiro_real;
    char valor3 = *Ponteiro_caractere;
    // Atribua um novo valor à variável por meio do ponteiro.
    *ponteiro_inteiro = 50;
    *ponteiro_real = 6.28;
    *Ponteiro_caractere = 'B';

/*==========================================================================*/

    printf("\n Ponteiro_int : %i, Int: %i\n", *ponteiro_inteiro, inteiro);
    printf(" Ponteiro_float : %.2f, Float: %.2f\n",*ponteiro_real, real);
    printf(" Ponteiro_char : %c, Char: %c\n",*ponteiro_real,caractere);

    return 0;
}
