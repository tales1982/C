#include <stdio.h>

int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input); // lê o caractere digitado pelo usuário

    if (input == 'z') { // verifica se o caractere digitado é "z"
        printf("cat\n");
    } else {
        printf("Digite novamente. \n");
    }

    return 0;
}