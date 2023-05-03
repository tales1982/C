/*
 A multiplicaçao de dois números inteiros pode ser feita atravéis de soma sucessivas.
 Proponha um algoritimo recursivo Multi_Rec(n1,n2) que calcule a multiplicacao de dois inteiros.
 */

#include<stdio.h>


int Multi_Rec(int n1, int n2);

int main(int argc, char *argv[])
{
  int n1,n2;
  printf("Digite 2 numeros para fazermos a multiplicacao..:");
  scanf("%i %i",&n1,&n2);
  setbuf(stdin,NULL);

  printf("RESULTADO..: %i\n",Multi_Rec(n1,n2));
  return 0;
}

int Multi_Rec(int n1, int n2)
{
  if(n1 == 1)
  {
    return n2;
  }else if(n2 == 1){
    return n1;
  }else{
    
    return  n1 +  Multi_Rec(n1,n2-1);
  }
}
/*
 A função Multi_Rec() é uma função recursiva que implementa a multiplicação por meio de somas
 sucessivas. Se um dos números é igual a 1, a função retorna o outro número.
 Caso contrário, ela chama a si mesma com o primeiro número e o segundo número decrementado
 em uma unidade,
 somando o primeiro número ao resultado da chamada recursiva. 
 Esse processo é repetido até que o segundo número chegue a 1.
 */
// 
