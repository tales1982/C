/*
Dada uma letra, escreva na tela se essa letra é ou nao vogal(pode considerar apenas letras minusculas);
*/

#include <stdio.h>
#include <ctype.h>

int main(){
char opcao;

  printf(" ===============================\n");
  printf("|             MENU              |\n");  
  printf("|        DIGITE UMA VOGAL       |\n");
  printf(" ===============================\n");

    opcao= getchar();
    opcao = tolower(opcao);

  switch (opcao)
  {
  case 'a':
    printf("Voce digitou a vogal '%c'\n",opcao);
    break;
  case 'e':
    printf("Voce digitou a vogal '%c'\n",opcao);
    break;
  case 'i':
    printf("Voce digitou a vogal '%c'\n",opcao);
    break;
  case 'o':
    printf("Voce digitou a vogal '%c'\n",opcao);
    break;
  case 'u':
    printf("Voce digitou a vogal '%c'\n",opcao);
    break;
  default:
     printf("Porfavor digite uma vogal '%c'\n",opcao);
    break;
  }

}


