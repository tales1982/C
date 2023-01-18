/*
 * Esta implementação C limpará o buffer de entrada.
 * As chances são de que o buffer já esteja vazio,
 * para que o programa espere até que você pressione [Enter].
 */

#include <stdio.h>

int main( vazio )
{
  int    ch;
  char   buf[BUFSIZ];
  
  puts( "Liberando entrada" );
  
  while ((ch = getchar()) != '\n' && ch != EOF);
  
  printf( "Digite algum texto: " );
  
  if (fgets(buf, sizeof (buf), stdin))
  {
    printf( "Você digitou: %s" , buf);
  }
  
  retorna  0 ;
}

/*
 * Saída do programa:
 *
 entrada de descarga
 Blá blá blá blá
 Digite algum texto: olá
 Você digitou: olá
 *