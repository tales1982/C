#include <stdio.h>
#include <locale.h>

int main(){
    int num1;
printf("Digite um numero qualquer: \n");
scanf("%i",&num1);
setbuf(stdin,NULL);
//printf("O numero que vove digitou é %s\n",(num1%2==0)?"Par":"Impar");
if (num1%2 == 0){
    printf("O numero que vove digitou é Par\n");
}else{
    printf("O numero que vove digitou é Impar\n");
}

    return 0;
    }