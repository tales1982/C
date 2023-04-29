/*
 * Esta implementação C limpará o buffer de entrada.
 * As chances são de que o buffer já esteja vazio,
 * para que o programa espere até que você pressione [Enter].
 * 
 * 1° Maneira
==================================================================================== 

#include <stdio.h>

int main( )
{
  int    ch;
  char   buf[BUFSIZ];
  while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
  return 0 ;
}
=========================================================================================
*/

/*
*
*2° Maneira --> essa é a melhoe maneira
#include <stdio.h>
#include <locale.h>

int main(){
   char nome1[10], nome2[10], nome3[10];
  printf("Digite a 1° letra \n");
  scanf("%9[^\n]s", nome1);
  clearBuffer();
  printf("Digite a 2° letra \n");
  scanf("%9[^\n]s", nome2);
  clearBuffer();
  printf("Digite a 3° letra \n");
  scanf("%9[^\n]s", nome3);

  printf("1° letra %s\n",nome1);
  printf("2° letra %s\n",nome2);
  printf("3° letra %s\n",nome3);
  
}


void clearBuffer(void){
    char c;
    while ((c = getchar())!= '\n' && c != EOF);
}
*/

/*
3° Maneira Essa e boa

#include <stdio.h>
#include <locale.h>

int main(){
   char nome1[10], nome2[10], nome3[10];
  printf("Digite a 1° letra \n");
  scanf("%9[^\n]s", nome1);
  setbuf(stdin,NULL);
  printf("Digite a 2° letra \n");
  scanf("%9[^\n]s", nome2);
  setbuf(stdin,NULL);
  printf("Digite a 3° letra \n");
  scanf("%9[^\n]s", nome3);

  printf("1° letra %s\n",nome1);
  printf("2° letra %s\n",nome2);
  printf("3° letra %s\n",nome3);
  
}
*/