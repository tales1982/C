/*
   Faça um projeto em C para imprimir no console a tabuada dos números de
   1 a 9.
   */

#include<stdio.h>

int main(int argc, char *argv[]) {
    int i = 1, j;

    while (i <= 10) {
        printf("Tabuada do %d:\n", i);
        j = 1; // Reinicia a variável j para 1

        while (j <= 10) {
            printf("%d X %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
