/*
Faca um algoritimo que leia um valor de temperatura em graus Celsius e a converta para graus Farenheit. 
 */



#include <stdio.h>

int main(){

float cel=0.0, convert = 1.8 ,result = 0;


printf("Digite a temperatura em Celsius para convertemos em Farenheit..: ");
scanf("%f",&cel);
setbuf(stdin,NULL);

result = (convert * cel ) + 32;
printf("A temperatura convertida e de : %.2f graus Fahrenheit.\n", result);



}

