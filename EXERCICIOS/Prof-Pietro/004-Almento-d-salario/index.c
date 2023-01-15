#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float salario, reajuste,salarioAjustado;
    fflush(stdin);
    printf("Digite o seu salario?\n");
    scanf("%f",&salario);
    fflush(stdin);
    printf("Digite o valor do ajuste?:\n");
    scanf("%f",&reajuste);
    fflush(stdin);
    //
}