/*
Escreva um algoritimo que leia um numero inteiro possitivo e escreva os divisores deste numeros.
Exemplo : D(10) = {1, 2, 5, 10} D(36){1, 2, 3, 4, 6, 9, 12, 18, 39}
*/

#include<stdio.h>

int main() {
    int num = 50; // Defina um valor para num
    int count = 1;
    float res;

    while (count <= num) {
        res = num % count;
        
        if (res == 0) {
            printf("%d é divisor de %d\n", count, num);
        }
        
        count++;
    }
    
    return 0;
}

