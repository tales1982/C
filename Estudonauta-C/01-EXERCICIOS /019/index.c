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
    
    printf("Atualmente estamos no ano de %d.\n",ano->tm_year+1900);
    printf("Em que ano voce nasceu? ");
    scanf("%d",&nascimento);
    setbuf(stdin,NULL);
    printf("-------------------------------------------\n");
    int idade = ano->tm_year+1900 - nascimento;
    printf("Sua idade atual é %d anos\n",idade);

    if(idade < 18)printf("Você ainda nao tem 18 anos. Nao pode se alistar!\n");
    else printf("Ja fez 18 anos. Espero sinceramente que tenha se alistado!\n");



    return 0;
    }