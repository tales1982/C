/*
Elabore um algoritimo que leia o raio de uma esfera e calcule a area eo volume. 
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){

  float raio,area, volume;

  printf("Digite o tamario do raio: ");
  scanf("%f",&raio);
  setbuf(stdin,NULL);

  area = 4 * PI * pow(raio, 2);
  volume = (4.0 / 3.0) * PI * pow(raio,3); 

  printf("A area superficial da esfera com raio de %.2f unidades\nè aproximadamente: %.3f\n",raio, area);
  printf("Sendo assim o volume com raio : %.2f unidades\né aproximadamente %.3f unidades cubicas\n",raio, volume);

  return 0;
}

