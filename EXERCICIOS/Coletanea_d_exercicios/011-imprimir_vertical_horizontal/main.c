/*
 * Crie um algoritimo que entre com uma palavra e imprima conforme o exempre a seguir
 * exemplo:
 * Sonho
 * SonhoSonho
 * SonhoSonhoSonho
 * SonhoSonhoSonhoSonho
 * SonhoSonhoSonhoSonhoSonho
 * repare que foram impresso 5 vezes na horizontal e 5 na vertical.
 * */


#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, j;

    // Recebe a palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Imprime a sequência
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%s", palavra);
        }
        printf("\n");
    }

    return 0;
}

