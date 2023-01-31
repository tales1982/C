/*
switch
C apresenta um poderoso comando de seleção múltipla, que permite a
verificação de uma lista de constantes inteiras ou caracteres. Este comando
se chama switch, e apresenta o seguinte aspecto:

Para efetuar o processamento de um conjunto de comandos associado a uma
única constante inteira ou caractere, utiliza-se o break.
*/
#include <stdio.h>

int main(void){
char conc;
printf("Digite a inicial da concession\xA0ria: ");
scanf(" %c",&conc);
switch(conc)
{
case 'f':    
case 'F':
printf("FIAT\n");
break;
case 'v':
case 'V':
printf("VOLKS\n");
break;
case 'r':
case 'R':
printf("RENAULT\n");
break;
case 'h':
case 'H':
printf("HYUNDAI\n");
break;
} /* end switch */
} /* end main */
