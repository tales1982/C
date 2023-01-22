#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor1,valor2;

    printf("Digite o primeiro valor.\n");
    scanf("%d",&valor1);
    setbuf(stdin,NULL);
    printf("Digite o segundo valor.\n");
    scanf("%d",&valor2);
    setbuf(stdin,NULL);
    printf("------- OPERAÇÕES BIT A BIT -------\n");
    printf("Calculando %d & %d é igual a %d.\n",valor1, valor2,valor1 & valor2);
    printf("Calculando %d & %d é igual a %d.\n",valor1, valor2,valor1 | valor2);
    printf("Calculando %d & %d é igual a %d.\n",valor1, valor2,valor1 ^ valor2);
    
}