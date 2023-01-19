#include <stdio.h>
#include <locale.h>

int main(){
    int num1;
printf("Digite um numero qualquer: \n");
scanf("%i",&num1);
setbuf(stdin,NULL);
printf("O numero que vove digitou é %s\n",(num1%2==0)?"Par":"Impar");

    return 0;
    }