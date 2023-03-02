#include <stdio.h>
#include <locale.h>

int main()
{
    float valor;
    setlocale(stdin,"Portuguese");

    printf("\nQual foi o valor total da compras.\n");
    scanf("%f",&valor);
    setbuf(stdin,NULL);

    printf("\nvocê comprou R$ %.2f na nossa loja.\n",valor);

    if(valor >= 500){
        float desc = 10;
        float desconto = desc / 100 * valor; 
        printf("\n============ ATENÇÃO ==============\n");
        printf("\nPor fazer mais de R$ %.2f em compras, você vai receber R$ %.2f de desconto.\nO valor a ser pago sera de R$ %.2f.\n",valor,desconto,valor - desconto);
    }else{
        printf("\nZero de desconto\n");
    }



    return 0;
}
