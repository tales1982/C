/*
 * Desenvolvar um algoritimo que peça para que o usuario informe a base e a altura 
 * de um retangulo, e um terceiro número inteiro "op". Caso o usuario escolha "op" igual a 0,
 * calcule e mostre o perimetro do retangulo. Caso o usuario insira um valor 1 para "op",
 * calcule e mostre a área do retangulo. Se o usuario inserir um valor diferente de 0 ou 1 
 * para "op", mostra a mensagem "Opcao invalida."
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
double base, altura, calc;
int op;
  
  printf("Insira a base\n");
  scanf("%lf",&base);
  setbuf(stdin,NULL);

  printf("Insira a altura\n");
  scanf("%lf",&altura);
  setbuf(stdin,NULL);

  printf("==================================\n");
  printf("Escolha uma opcao.\n0) Para calcula o Perimetro.\n1) Para calcula a Area.\n");
  scanf("%i",&op);

  if(op == 0){
    calc = 2 * altura + 2 * base;
    printf("Perimetro....: %.2lf metros\n",calc);
  }else if(op == 1){
    calc = altura * base;
    printf("Area.....: %.2lf metros.\n",calc);
  }else{
    printf("Opcao invalida.\n");
  };

  return 0;
}

