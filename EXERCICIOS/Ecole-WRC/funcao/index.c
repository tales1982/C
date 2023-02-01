//---------- Bibliotecas -----------------------
#include <stdio.h>
#include <locale.h>

//---------- Protótipo das função --------------
void menu_lines(void);



//---------- Função Principal ------------------
main(){
menu_lines();
printf("\nMenu principal do programa\n\n");
menu_lines();
printf("\nMenu tarefas a executar\n\n");
menu_lines();
printf("\nMenu Help\n\n");
}


//---------- Desenvolvimento das Funções -------
void menu_lines(){
int i, j;
for(i=0;i<5;i++)
{
for(j=0;j<30;j++)
putchar('#');
putchar('\n');
} /* end for */
} /* end menu_lines */

//---------- End Linhas -------------------------