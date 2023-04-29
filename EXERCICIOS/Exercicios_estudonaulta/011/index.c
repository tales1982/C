#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"Portuguese");
    char product[30];
    float price, finalPrice;

    printf("Qual produto voce gostaria de compra.\n");
    scanf("%29[^\n]s",product);
    clearBuffer();
    printf("Digite o preço do produto\n");
    scanf("%f",&price);
    clearBuffer();
    float desc = (12 / (float)100) * price;
    finalPrice = price - desc;
    printf("O %s custava R$ %.2f\n",product,price);
    printf("Porém com 12%% de desconto, passa a custa R$ %.2f\n",finalPrice);
}

void clearBuffer(void){
    char c;
    while ((c = getchar())!= '\n' && c != EOF);
}