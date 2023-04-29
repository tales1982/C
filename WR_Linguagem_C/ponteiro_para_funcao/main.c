/*
 Ponteiros para funcao
 */
#include<stdio.h>

void Beep(void);

int main(int argc, char *argv[])
{
  void(*ptrf)(void);   // Declaraçao do ponteiro para uma funçao
  ptrf = Beep;         // Inicializando o ponteiro
  (*ptrf)();           // Chamando minha funçao por meio do pponteiro
  return 0;
}


void Beep(void)
{
  printf("\a \n");
  printf("O programa foi executado\n");
}
