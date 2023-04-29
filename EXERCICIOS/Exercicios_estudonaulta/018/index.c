#include <stdio.h>
#include <locale.h>
#include <time.h> //necessário para usar localtime() e struct tm

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int nascimento;
     struct tm *ano; 
     time_t segundos;
     time(&segundos);
    ano = localtime(&segundos);
    printf("Em que ano você nasceu? ");
    scanf("%d",&nascimento);
    printf("\n--------------------------------\n");
    int idade = ano->tm_year+1900 - nascimento;
    printf("Você tem %d anos, certo?\n",idade);
    if(idade > 65){
        printf("Seja bem vindo ao nosso Banco!\n");
        printf("==== ATENÇÃO!! DIRIJA-SE PARA A FILA PREFERENCIAL! ====\n");
    }else printf("Seja bem vindo ao nosso Banco!\n");

  return 0;
}