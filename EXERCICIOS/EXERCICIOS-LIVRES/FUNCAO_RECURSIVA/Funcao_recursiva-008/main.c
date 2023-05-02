/*
   Faça uma funçao recursiva que calcule e retorne o Enésimo termo da sequência Fibonacci. Alguns números desta sequencia sao :0,1,1,2,3,5,8,13,21,34,55,89...
   a equalcao de Fibonacci e sempre a soma do numero anterior exemplo 0,+1 = 1,+ 1 = 2 = 3 =5
   */

#include<stdio.h>
#include<stdlib.h>

int recursiva(int n);

int main(int argc, char *argv[])
{
  int n ;

  printf("Digite o Énesimo termo..: ");
  scanf("%i",&n);
  setbuf(stdin,NULL);

  printf("Resultado = %i\n",recursiva(n));

  return 0;
}


int recursiva(int n)
{
  if(n == 0 || n < 0){
    return -1;
  }else if(n == 1 ){
    return 0;

  }else if(n == 2){
    return 1; 
  }else{
    return  recursiva(n-1) + recursiva(n-2);
  }
// 1°, 2°, 3°, 4°, 5°, 6°, 7°, 8°, 9°, 10°.......
// 0 , 1 , 1 , 2 , 3 , 5 , 8 ,13 ,21 , 24 ....... 
//   return (n -1) + (n -2);
}
