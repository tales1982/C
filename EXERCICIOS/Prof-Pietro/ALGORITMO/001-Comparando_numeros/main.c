/*

 Faça um programa que receba dois números e mostreo maior deles. Caso eles sejam iguais ,
 deve-se mostra a mensagem "Os números sao iguais..."
cskjksksjcksjckls
 * */


#include<stdio.h>

int main(int argc, char *argv[])
{
  int n1, n2;

  printf("Digite o primeiro valor.\n");
  scanf("%i",&n1);
  setbuf(stdin,NULL);

  printf("Digite o segundo valor.\n");
  scanf("%i",&n2);
  setbuf(stdin,NULL);

  if(n1 > n2){
    printf("O maior numero é: %i\n",n1);
  }else if(n2 > n1){
    printf("O maior numero é : %i\n",n2);
  }else{
    printf("Os dois numeros sao iguais: %i = %i\n",n1,n2);
  }

  return 0;
}
