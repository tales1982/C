/*
 Escreva um algoritimo para mostra um menu com 3 opcao, para o usuario capitura a escolha feito pelo ususario, escreav ana tela a opcao que o usuario escolheu.
 */

#include <stdio.h>

int main(){

  char opcao;

  printf(" ===============================\n");
  printf("|             MENU              |\n");  
  printf("|        1°  Opcao (a)          |\n");
  printf("|        2°  Opcao (b)          |\n");  
  printf("|        3°  Opcao (c)          |\n");
  printf(" ===============================\n");

  opcao = getchar();
  setbuf(stdin,NULL);


  switch(opcao){
    case 'a':
      printf("Voce escholeu a opcao %c\n",opcao);
      break;
    case 'b':
      printf("Voce escholeu a opcao %c\n",opcao);
      break; 
    case 'c':
      printf("Voce escholeu a opcao %c\n",opcao);
      break;
    default:
    printf("Selecione uma das opcoes acima\n");
  }

}
