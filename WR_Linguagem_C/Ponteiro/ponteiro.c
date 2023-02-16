#include <stdio.h>

int main(void)
{
 int var, *ptr;

 var = 5;
 ptr = &var;



 printf("%X\n",&var);//endereço na memoria do var
 printf("%X\n",ptr);//o ponteiro esta apontando para o endereço de var
 printf("%X\n",&ptr);//Aqui estou mostrando o endereço do ponteiro
 printf("%X\n",var);//o valor do var
 printf("%X\n",*ptr);//Estou apontando para o VALOR de var(*)
  return(0);
}