/*
Faça um programa que imprima os N primeiros números impares.
*/

#include<stdio.h>


int main() {
    int n;
    printf("Digite a quantidade de números ímpares que deseja imprimir: ");
    scanf("%d", &n);

    printf("Os %d primeiros números ímpares são:\n", n);

    int count = 1; // Começamos com o primeiro número ímpar, que é 1
    int printed = 0; // Variável para contar quantos números ímpares já foram impressos

    while (printed < n) {
        printf("%d\n", count);
        count += 2; // Passamos para o próximo número ímpar adicionando 2
        printed++;
    }

    return 0;
}