/*
 * Crie um programa que contenha uma função que permita passar por parâmetro dois
 * números inteiros A e B. A função deverá calcular a soma entre estes dois números e
 * armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
 * modificar o valor do primeiro parãmetro. Imprima os valores de A e B na função principal.
 */
#include<stdio.h>
#include"calc.c"

int main() {
    int num1 = 5;
    int num2 = 7;
    
    calcula_soma(&num1, num2);
    
    printf("Valor de A: %d\n", num1);
    printf("Valor de B: %d\n", num2);
    
    return 0;
}

/*
 Explicação do código:

A função calcula_soma recebe dois parâmetros, a e b, que representam os dois números inteiros a serem somados. 
Dentro da função, a variável a é atualizada somando o valor de b a ela, 
usando o operador de ponteiro * para acessar o valor armazenado no endereço apontado por a.
No exemplo de uso da função, são definidos os valores num1 e num2 para as variáveis a e b, respectivamente.
Para passar o valor de num1 para a função, é necessário passar o endereço de memória da variável,
usando o operador de endereço &. Depois, a função calcula_soma é chamada passando os dois valores como parâmetros.
Note que a função não retorna nada, mas apenas modifica o valor do primeiro parâmetro (num1).
Na função principal, são impressos os valores de num1 e num2 usando a função printf. 
Note que para imprimir o valor de uma variável, é necessário usar o especificador de formato correto (%d para inteiros).

 */
