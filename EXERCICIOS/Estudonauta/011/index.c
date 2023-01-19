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
    
    float desc = 5 / 100 + price;
    printf("%2f\n",desc);
}

void clearBuffer(void){
    char c;
    while ((c = getchar())!= '\n' && c != EOF);
}