/*
Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir "Condição satisfeita", na tela , caso o primeiro dado inserido seja maior do que os outros dois (o primeiro nao pode ser igual a nenhum). Caso contrario, devo ser impressa a mensagem "ERRO".
*/
#include<stdio.h>

int main()
{
int a,b,c;

printf("Digite o primeiro número.\n");
scanf("%i",&a);
setbuf(stdin,NULL);

printf("Digite o segundo número.\n");
scanf("%i",&b);
setbuf(stdin,NULL);

printf("Digite o terceiro número.\n");
scanf("%i",&c);
setbuf(stdin,NULL);

if(a > b && a > c) printf("Condiçao satifeita\n"); else printf("Erro\n");

printf("%i %i %i\n",a,b,c);
}
