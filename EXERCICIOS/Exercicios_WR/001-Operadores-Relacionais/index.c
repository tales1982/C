/*Escreva um programa em C que solicite o valor inteiro de dois operandos ao
usuário e então imprima o resultado (verdadeiro ou falso) para os 6
operadores relacionais existentes, de acordo com as entradas do usuário.
Analise os resultados a cada execução do programa e veja se fazem sentido.
*/
#include <stdio.h>
int main(){
	int n1 = 0, n2 = 0;

   	 printf("Ola Digite 2 numeros para podermos comparar.\n");
   	 printf("Digite 1° numero.\n");
   	 scanf("%d",&n1);
	 setbuf(stdin,NULL);
	 printf("Digite o 2° numero\n");
	 scanf("%d",&n2);
	 setbuf(stdin,NULL);
	 printf("========= RESULTADO  ==========\n");
        printf("Comparando Igualdade: %d igual a  %d: %s.\n",n1,n2,(n1 == n2)?"Verdadeiro":"Falso");
	printf("Comparando Diferente: %d é diferente de %d: %s\n",n1,n2,(n1 != n2)?"Verdadeiro":"Falso");
	printf("Comparando Menor: %d é Menor  que %d: %s\n",n1, n2,(n1 < n2)?"Verdadeiro":"Falso");
	printf("Comparando Maior: %d é Maior que %d: %s\n",n1, n2, (n1 > n2)?"Verdadeiro":"Falso");
	printf("Comparando Menor ou Igual: %d é Menor ou Igual a: %d: %s\n",n1, n2, (n1 <= n2)?"Verdadeiro":"Falso");
	printf("Comparando Maior ou Igual: %d é Maior ou Igual a: %d: %s\n",n1, n2, (n1 >= n2)?"Verdadeiro":"Falso");
		return 0;
 }
