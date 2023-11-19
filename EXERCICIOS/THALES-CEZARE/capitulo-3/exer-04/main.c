/*
Escreva um algoritimo que leia um inteiro possitivo e um expoente tambem possitivo e realize o calculo da operacao;
*/

#include<stdio.h>

int main(){

    int base, expoente;

    printf("Digite  um numero possitivo para ser a base.");
    scanf("%d",&base);
    setbuf(stdin,NULL);

    printf("Digite  um numero possitivo para ser a expoente.");
    scanf("%d",&expoente);
    setbuf(stdin,NULL);

    for (int i = 0; i < expoente; i++)
    {
        base *= expoente;
        printf("DEBUG[%d]\n",base);//o que esta acontesendo
    }

printf("\no Resultado e : %d\n",base);
   
    


}