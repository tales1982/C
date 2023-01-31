/**
 * Operador Condicional ?
O operador condicional interrogação ( ? ) pode ser utilizado para avaliar
expressões no lugar de if else.
É o único operador ternário da Linguagem C, pois necessita de 3 argumentos.
Sua sintaxe é:
.________________________________________
|                                        |
|  condição ? resultadoV : resultadoF ;  |
|________________________________________|

*/

#include <stdio.h>

int main()
{
float Tc;
printf("Entre com a temperatura em graus Celsius: ");
scanf("%f",&Tc);
printf("Status da temperatura: %c\n", Tc>30.0 ? 'H' : 'L');
}