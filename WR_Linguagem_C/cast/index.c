/*Casting
Simplesmente é o ato de forçar um operador a ser de determinado tipo. Para
isso, utilize o tipo desejado entre parênteses antes de sua expressão:
(tipo) expressão
Exemplo: para garantir que a expressão a/b resulte em um float, utilize
(float) a/b;
OBS.: Os casts são operadores unários que possuem a mesma precedência de
qualquer outro operador unário.*/

/*Este programa lê a tensão de um conversor analógico/digital de 0 a 5V e 10
bits e imprime no console:*/
#include <stdio.h>
int main(void)
{
int val_ADC;
float volts;
printf("Inserir um valor de ADC entre 0 e 1023: \n");
scanf("%d",&val_ADC);
volts = (float)(val_ADC*5.0/1023.0);
printf("A tensao lida foi: %.2fV\n", volts);
}