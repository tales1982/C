/*
Elabore um algoritmo que leia uma sequencia de N números interiros positivos e determine a soma dos números pares.
*/

#include <stdio.h>

int main() {
    int n, num, soma = 0;
    printf("Digite a quantidade de números da sequência: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite o número: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            soma += num;
        }
    }
    printf("A soma dos números pares é: %d", soma);
    return 0;
}
