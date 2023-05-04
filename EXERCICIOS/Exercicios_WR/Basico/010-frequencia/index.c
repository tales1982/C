/* Exercício proposto: desenvolva uma função em C que imprima o valor da frequência de corte de um filtro passa-baixas,
 * onde o usuário entrará com os parâmetros: R, C e ‘A’. A equação é a que segue:
 * 𝑓= 1 2𝜋𝑅𝐶
 * A mesma função deverá calcular e imprimir na tela o valor da constante de tempo,
 * resultado do produto de R e C, caso o usuário entre com R, C e ‘B’. A equação é a que segue:
 * 𝜏 = 𝑅𝐶
 * Exemplo: o usuário entra com 1000, 1E-6 e ‘A’. O cálculo matemático é
 * 𝑓= 1 = 159,15𝐻𝑧
 * 2𝜋 × 1000 × 1 × 10−6
 * No console, deverá ser impresso “f= 159.15Hz”.
 * Exemplo: o usuário entra com 2700, 100E-9 e ‘B’. O cálculo matemático é
 * 𝜏 = 2700 × 100 × 10−9 = 0,00027𝑠
 * No console, deverá ser impresso “t= 0.00027s”.
 */

/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 6 Aula 1
    Parâmetros de Funções
    
    Autor: Dr. Eng. Wagner Rambo
    Data:  Maio de 2021

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Protótipo das Funções --- */
void freq_555(float Ra, float Rb, float C); 
void carac(char ch);
void esp_carac(char chr, int number); 
void div_rest(int a, int b);

 
 
/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
   
   
   freq_555(4.7E3, 27.0E3, 100E-9);
   carac('a');

	                             /* pausa execução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */

 
/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */
void freq_555(float Ra, float Rb, float C)
{
  float freq;
  
  freq = 1.44/((Ra+2*Rb)*C);    
  
  printf("freq= %.2fHz\n",freq); 
     
} /* end freq_555 */


void carac(char ch)
{
  switch(ch)
  {
    case 'a': putchar('A'); break;
    case 'b': putchar('B'); break;
    case 'c': putchar('C'); break;
    case 'd': putchar('D'); break;
    default:  putchar('E');
              putchar('r');
              putchar('r');
              putchar('o');
  
  } 

  putchar('\n');

} /* end carac */ 


void div_rest(int a, int b)
{
    printf("Divisao= %d\n", a/b);
    printf("Resto=   %d\n", a%b);

}  


void esp_carac(char chr, int number)
{
  char i;
  
  for(i=0; i<number; i++) 
    putchar(chr);
    
  putchar('\n');  
      
}
