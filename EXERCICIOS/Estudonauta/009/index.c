#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma letra :\n");
    letra = getchar();
    fflush(stdin);
    char ant = letra -1;
    //char suc = letra +1;
    printf("O antecessor de (%c) é (%c)\n",letra,ant);
    printf("O sucessor de (%c) é (%c)\n",letra,(letra + 1));//posso fazer assim também.
}