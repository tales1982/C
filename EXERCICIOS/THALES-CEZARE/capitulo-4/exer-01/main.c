/*
escreva umj algoritimo que imprima os primeiros 200 numeros pares inteiros e possitivos.
*/

#include<stdio.h>


int main() {
    int par = 0;
    int count = 100;  // Ajuste para parar em 100

    for (int i = 0; i <= count; i++) {
        printf("%d\n", par);
        par += 2;
    }
    
    return 0;
}