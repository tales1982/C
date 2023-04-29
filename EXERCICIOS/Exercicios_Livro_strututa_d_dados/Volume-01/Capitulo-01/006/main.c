/*
Preambulo: Dados dois números inteiros positivos m e n, com m > n, uma tripla pitagórica consiste
em três números inteiros positivos a, b e c que satisfazem as seguites formulas:

--> a = m² - n²
--> b = 2 * m * n
--> c = m² + n²

Problema: Escreva um programa que apresenta as triplas de Pitágoras resultantes quando os valores
de m e n variam entre 1 e 5. O resultado do programa deverá ser o seguinte:
               
                      >>> Triplas Pitagoras <<<
         
                a =  3, b =  4, c =  5 (m = 2, n = 1)
                a =  8, b =  6, c = 10 (m = 3, n = 1)                
                a =  5, b = 12, c = 13 (m = 3, n = 2)
                a = 15, b =  8, c = 17 (m = 4, n = 1)
                a = 12, b = 16, c = 20 (m = 4, n = 2)
                a =  7, b = 24, c = 25 (m = 4, n = 3)
                a = 24, b = 10, c = 26 (m = 5, n = 1)
                a = 21, b = 20, c = 29 (m = 5, n = 2)
                a = 16, b = 30, c = 34 (m = 5, n = 3)
                a =  9, b = 40, c = 41 (m = 5, n = 4)

[Sugestoes: (1) Use um laço FOR aninhado em outro FOR. Use m como variavel
de contagem de um laço e n como variavel de contagem de outro laço.
(2) No corpo do laço FOR interno, quando m > n, calcule os valores de a,b e c exiba os resultados]                
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
   int a, b, c, m, n,i;
    
   printf("Digite 2 numeros sendo de 0 a 5 e sendo que o 1° numero tem que ser maior que o segundo.\n");
   printf("Digite o 1° numero...: ");
   scanf("%i",&m);
   setbuf(stdin,NULL);
   
   printf("Digite o 2° numero...: ");
   scanf("%i",&n);
   setbuf(stdin,NULL);
   
   printf("\t\t\t >>>>>> Triplas de Pitagoras <<<<<<\n");
  
   for (; m > 0; m--) {
     for (n ; n < 0 ; n--) {
       a = (m * m) - (n * n);
       b = 2 * m * n;
       c = (m * m) + (n * n);

       printf("\t\t\tA = %.2i, B = %.2i, C = %.2i (m = %i, n = %i)\n",a,b,c,m,n);
     }
   }
   
  return 0;
}
