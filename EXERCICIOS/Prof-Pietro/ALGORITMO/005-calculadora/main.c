/*
 * Desenvolva um algoritimo que simule uma calculadora. Voce de dar a opcao de usuario escolher
 * entre 1- Somar, 2- Subtrair, 3- Multiplicar, 4- Dividir.
 *
 */

#include<stdio.h>

int main(void)
{
  int menu,a, b, *ptr=&menu;
  
  
  do {
    printf("Digite 1 para SOMAR\n");
    printf("Digite 2 para SUBTRAIR\n");
    printf("Digite 3 para MULTIPLICAR\n");
    printf("Digite 4 para DIVIDIR\n");
    printf("Digite 5 para sair\n");
    scanf("%i",ptr);

    switch (*ptr) {
      case 1:
        printf("Digite o 1° numero.\n");
        scanf("%i",&a);
        printf("Digite o 2° numero.\n");
        scanf("%i",&b);
        setbuf(stdin,NULL);
        printf("A soma de %i + %i = %i\n",a,b,(a + b));
        printf("\n========================================\n\n");
        break;
      case 2:
        printf("Digite o 1° numero.\n");
        scanf("%i",&a);
        printf("Digite o 2° numero.\n");
        scanf("%i",&b);
        setbuf(stdin,NULL);
        printf("A subtracao de %i - %i = %i\n",a,b,(a-b));
        printf("\n========================================\n\n");
        break;
      case 3:
        printf("Digite o 1° numero.\n");
        scanf("%i",&a);
        printf("Digite o 2° numero.\n");
        scanf("%i",&b);
        setbuf(stdin,NULL);
        printf("A multiplicacao de %i * %i = %i\n",a,b,(a*b));
        printf("\n========================================\n\n");
        break;
      case 4:
        printf("Digite o 1° numero.\n");
        scanf("%i",&a);
        printf("Digite o 2° numero.\n");
        scanf("%i",&b);
        setbuf(stdin,NULL);
        printf("A divisao de %i / %i = %i\n",a,b,(a/b));
        printf("\n========================================\n\n");
        break;    
    }



  } while (menu != 5);
  printf("Obrigado pela visita.\n");


  return 0;
}


