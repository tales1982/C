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
    printf("---<<< Analizando o numero (%d) >>>---\n",n);
    n--;
    printf("O anteçcessor é %d \n",n);
    n++;
    printf("O sucessor é %d \n",n + 1 );


}