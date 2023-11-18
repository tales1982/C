/*
 Dados 3 numeros representado os lados de um possivel triangulo, calcule e descrubra se este triangulo é 
 */

#include <stdio.h>

int main(){
 int lado1, lado2, lado3;

    // Solicita os comprimentos dos lados ao usuário
    printf("Digite o comprimento do Lado 1: ");
    scanf("%d", &lado1);

    printf("Digite o comprimento do Lado 2: ");
    scanf("%d", &lado2);

    printf("Digite o comprimento do Lado 3: ");
    scanf("%d", &lado3);

    // Verifica o tipo de triângulo com base nos comprimentos dos lados
    if((lado1+lado2 > lado3) && (lado2+lado3 > lado1)){
      if (lado1 == lado2 && lado2 == lado3) {
        printf("É um triângulo Equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("É um triângulo Isósceles.\n");
    } else {
        printf("É um triângulo Escaleno.\n");
    }

    }else{
      printf("Nao forma trinagulo\n");
    }
  
    return 0;
}
