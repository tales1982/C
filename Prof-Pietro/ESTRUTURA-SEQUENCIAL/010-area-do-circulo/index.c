/**
 * Faça um programa que calcule e mostre a área de um circulo. Sabendo que Área == pi * raio², onde o PI == 3,14.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    float raio,pi = 3.14;
    printf("Insira o valor do raio.\n");
    scanf("%f",&raio);
    setbuf(stdin,NULL);
    printf("A área do circulo é de : %.2f\n",(raio * raio) * pi);

}