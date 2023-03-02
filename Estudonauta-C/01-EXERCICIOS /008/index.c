#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n ;
    printf("Digite um numero :\n");
    scanf("%d",&n);
    fflush(stdin);
    printf("O dobro de %i e %i \n",n,n * 2);
    float terca = (float)n / 3;
    printf("A terça parte de %d e %.2f\n",n , terca);
}