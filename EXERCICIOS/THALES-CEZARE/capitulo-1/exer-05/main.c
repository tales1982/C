/*
 Faca um algoritimo que leia o raio de um circulo e calcule e imprima sua area.
 */

#include<stdio.h>

#define PI 3.14159

int main(){

  float raio, area;


  printf("Digite o raio do circulo: ");
  scanf("%f",&raio);

  area = PI * raio  * raio;

  printf("A area do circulo e: %.2f\n",area);
}
