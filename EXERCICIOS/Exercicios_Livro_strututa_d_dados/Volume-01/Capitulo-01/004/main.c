/*
 Um triangulo pode ser classificado como:
 -> Equilátero, que possui todos os lados de tamanhos iguais.
 -> Isósceles, que possui, pelo menos, dois lados de tamanhos iguais.
 -> Escaleno, que possui três lados de tamanhos diferentes.
 Escreva um programa que leia três valores reais e verifique se eles podem constituir
 os lados de um triangulo. Se esse for o caso, o programa deve classificar o triangulo em
 equilátero, isósceles ou escaleno.
 Como todo triangulo equilátero também é isósceles, o programa nao precisa apresentar
 essa informaçao de modo redundante.
 */
 
#include <stdio.h>

int main(int argc, char *argv[])
{
  int triangulo[3],i;

  for (i = 0; i < 3; ++i) {
      printf("Digite tres valores pra calcular o tringulo..: ");
      scanf("%i",&triangulo[i]);
      setbuf(stdin,NULL);
  }
if(triangulo[0] + triangulo[1] > triangulo[2] && triangulo[0] + triangulo[2] > triangulo[1] && triangulo[1] + triangulo[2] > triangulo[0]){
        printf("Os 3 lados formam um triangulo!\n");
        if(triangulo[0] == triangulo[1] && triangulo[0] == triangulo[2])
            printf("Equilatero\n");
        else
            if(triangulo[0] == triangulo[1] || triangulo[0] == triangulo[2] || triangulo[1] == triangulo[2])
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!!\n");



/*  for (i = 0; i < 3; ++i) {
    printf("valor = %i\n",triangulo[i]);
  }
*/

  return 0;
}
