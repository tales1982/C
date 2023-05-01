/*
 A multiplicao de 2 números inteiros pode ser feita através de somas sucessivas.
 Proponha um algoritimos recursivo Multip_Rec(n1,n2) que calcule a multiplicacao de 2 numeros int.
 */

#include<stdio.h>

int Mult_Rec(int n1,int n2);

int main(int argc, char *argv[])
{int n1,n2,res;
  printf("Digite 1° numero..: ");
  scanf("%i",&n1);
  setbuf(stdin,NULL);

  printf("Digite o 2° numero..:");
  scanf("%i",&n2);
  setbuf(stdin,NULL);

  res = Mult_Rec(n1,n2);
  printf("Resultado = %i\n",res);
  
  return 0;
}
int Mult_Rec(int n1, int n2) {
  if (n1 == 1) {
    return n2;
  } else if (n2 == 1) {
    return n1;
  } else {
    return n1 + Mult_Rec(n1, n2 - 1);
  }
}
/*
 Neste algoritmo, a recursão é feita de forma que a multiplicação é calculada a partir de somas sucessivas. A condição de parada é quando um dos números é igual a 1, retornando o outro número. Caso contrário, a função retorna a soma do primeiro número com a multiplicação recursiva do mesmo número com o segundo número decrementado em 1.
 ===============================================================================

 O algoritmo apresentado utiliza uma abordagem recursiva para calcular a multiplicação entre dois
 números inteiros (n1 e n2) através de somas sucessivas.

A função Mult_Rec é uma função recursiva que recebe dois parâmetros: n1 e n2. 
A recursão é feita através de três possibilidades:

1)Caso base 1: se n1 for igual a 1, retorna n2, pois qualquer número multiplicado por 1 é igual
a ele mesmo.

2)Caso base 2: se n2 for igual a 1, retorna n1, pois qualquer número multiplicado por 1 é igual 
a ele mesmo.

3)Caso geral: se n1 e n2 não forem iguais a 1, a função retorna a soma de n1 com a chamada recursiva
da função passando n1 e n2 decrementado em 1 como parâmetros. A cada chamada recursiva, 
o valor de n2 é decrementado em 1, o que garante a soma sucessiva na multiplicação.
A ideia é que a função Mult_Rec faça chamadas a si mesma até que um dos casos base seja atingido,
e então comece a retornar valores que são utilizados na soma sucessiva na multiplicação.

Por exemplo, se chamarmos Mult_Rec(3, 4), a função fará a seguinte sequência de chamadas recursivas:

Mult_Rec(3, 3) -> retorna 6 (3+3)
Mult_Rec(3, 2) -> retorna 9 (3+6)
Mult_Rec(3, 1) -> retorna 12 (3+9)
E finalmente, a chamada inicial de Mult_Rec(3, 4) retornará 12, que é o resultado da multiplicação 3x4.






 */
