/**
 * O programa abaixo verifica se as variáveis são iguais. De acordo com a
inicialização de var_a e var_b, a saída esperada para o programa é a
execução do else.
*/

#include <stdio.h>

int main(void)
{
int var_a = 3, var_b = 4;
if(var_a == var_b)
{
printf("As variaveis sao iguais\n");
}
else
{
printf("As variaveis sao diferentes\n");
}
}