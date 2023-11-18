/*
 Faça um algoritimo que leia tres numeros , descubra e imprima o valor maior de todos
 */

#include <stdio.h>

int main(){

  int num1 = 0, num2 = 0, num3 = 0;

  printf("Digite o 1° numero..: ");
  scanf("%i", &num1);
  setbuf(stdin,NULL);

  printf("Digite o 2° numero..: ");
  scanf("%i", &num2);
  setbuf(stdin,NULL);

  printf("Digite o 3° numero..: ");
  scanf("%i", &num3);
  setbuf(stdin,NULL);

  if(num1 > num2 && num1 > num3){
        printf("O maior numero é : [%i]\n",num1);
  }else if(num2 > num1 && num2 > num3){
        printf("O maior numero é [%i]\n",num2);
  }else if(num3 > num1 && num3 > num2){
        printf("O maior numero é[%i]\n",num3);
  }else{
    printf("Os 3 numeors sao identicos [%i, %i, %i ]\n",num1, num2, num3);
  };

}
