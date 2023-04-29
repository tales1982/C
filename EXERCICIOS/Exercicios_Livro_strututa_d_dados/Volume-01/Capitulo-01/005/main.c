/*
 Escreva um programa em C que solicita ao usuario que introduza uma nota de avaliacao,
 cujo valor pode variar entre 0.0 e 10.0 e exibe o conceito referente a essa nota de acordo com a seguinte tabela::
 
  ___________________________________________
 |                               |          |
 |                NOTA           | CONCEITO |
 |_______________________________|__________|
 |                               |          |                                     
 | Entre 9.0 incluse  e 10.0     |    A     |
 |_______________________________|__________|
 |                               |          |                                     
 | Entre 8.0 incluse e 9.0       |    B     |
 |_______________________________|__________|                                
 |                               |          |  
 | Entre 7.0 incluse e 8.0       |    C     |
 |_______________________________|__________|
 |                               |          |                                     
 | Entre 6.0 incluse e 7.0       |    D     |
 |_______________________________|__________|
 |                               |          |                                     
 | Entre 5.0 incluse e 6.0       |   E      |
 |_______________________________|__________|
 |                               |          |                                     
 | Menor do que 5.0              |   F      |
 |_______________________________|__________|
 
 O programa deve ainda aprensetar a mensagens de erro correspondentes a entradas fora do intervalo de valores.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  float n;
  printf("Digite uma nota..: ");
  scanf("%f",&n);
  setbuf(stdin,NULL);

  if(n >= 9 && n <= 10){
    printf("Nota..: A\n");
  }else if(n >= 8 && n < 9){
    printf("Nota..: B\n");
  }else if(n >= 7 && n < 8){
    printf("Nota..: C\n");
  }else if(n >= 6 && n < 7){
    printf("Nota..: D\n");
  }else if(n >= 5 && n < 6){
    printf("Nota...: E\n");
  }else if(n < 5 && n >= 0){
    printf("Nota F\n");
  }else{
    printf("Digite uma nota de 0  a 10\n");
  }
  return 0;
}
