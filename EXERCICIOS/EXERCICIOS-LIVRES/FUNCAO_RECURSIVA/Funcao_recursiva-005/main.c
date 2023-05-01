/*
 imprimir todos os numeros de n até 0
 */

#include<stdio.h>

int func(int n);

int main(int argc, char *argv[])
{
 int n;
 printf("Digite o n..:");
 scanf("%i",&n);
 setbuf(stdin,NULL);

 func(n);
 
  return 0;
}

int func(int n)
{
  int res;
  if(n == 0){
    printf("N == %i\n",n);
  }else{
    printf("N == %i\n",n);
    func(n -1);
    printf("N == %i\n",n);

    return n;
  }
}
