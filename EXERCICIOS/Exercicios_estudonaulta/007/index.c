#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    fflush(stdin);
    printf("Digite um numero: \n");
    scanf("%i",&n);
    fflush(stdin);
    printf("---<<< Analizando o numero (%i) >>>---\n",n);
    n--;
    printf("O anteçcessor é %i \n",n);
    n++;
    printf("O sucessor é %i \n",n + 1 );


}