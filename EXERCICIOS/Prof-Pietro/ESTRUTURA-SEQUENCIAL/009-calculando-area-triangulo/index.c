/**
 * Faça um programa que calcule e mostre a área de um triangulo. Sabendo-se que Área == (base * altura)/2.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float base, altura;

    printf("------- Calculando a área de um triangulo ------\n");
    printf("Insira o valor da Base.\n");
    scanf("%f",&base);
    setbuf(stdin,NULL);
    printf("Insira a altura.\n");
    scanf("%f",&altura);
    setbuf(stdin,NULL);
    printf("A área do triangulo é de %.2f :\n",(base * altura)/2);
}