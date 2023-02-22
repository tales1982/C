#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, d;

    printf("Digite o numero:\n");
    scanf("%i",&n);
    setbuf(stdin,NULL);
    printf("Digite o deslocamento:\n");
    scanf("%i",&d);
    setbuf(stdin,NULL);
    printf("------ OPERACOES SHIFT ------\n");
    printf("Calculando %i >> %i é igual a %i\n",n, d,(n>>d));
    printf("Calculando %i << %i é igual a %i\n",n, d,(n<<d));
}