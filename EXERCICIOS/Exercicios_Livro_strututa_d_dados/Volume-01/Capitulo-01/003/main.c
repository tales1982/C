/*
 *Escreva um programa que lê três valores reais possitivos introduzidos pelo usuario e informe se eles podem ser constituir  os lados de um triangulo retangulo.
 [Sugestao: Verefique se o maior valor introduzido constitui a hipotenusa de um triangulo retangulo usando o teorema de pitagoras.]

 Um triângulo apresenta os lados com medidas 5 cm, 12 cm e 13 cm. Como saber se é um triângulo retângulo?

Para provar que um triângulo retângulo é verdadeiro as medidas dos seus lados devem obedecer ao Teorema de Pitágoras.

 a² = b² + c²
-------------
13² = 12² + 5²
169 = 144 + 25
169 = 169
 */
#include<stdio.h>

int main(int argc, char *argv[])
{
  int a, b, c;

  
    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);
    setbuf(stdin,NULL);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}



