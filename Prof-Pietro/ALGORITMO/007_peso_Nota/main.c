/*
 * A nota final de um estudante é calculada a parti de três notas 
 * atribuidas respectivamente a um trabalho de laboratorio,
 * a uma avaliaçao semestral e a um exame final. A média das tres notas
 * mencionadas anteriomente aos pesos a seguir..:
 * ===================================================================
 *    NOTA                                PESO
 *    Trabalho de Laboratorio             2
 *    Avaliaçao semestral                 3
 *    Exame Final                         4
 *
 *====================================================================
 *   Média ponderada                       Conceito
 *   8,0 ~ 10,0                            A
 *   7,0 ~ 8,0                             B
 *   6,0 ~ 7,0                             C
 *   5,0 ~ 6,0                             D
 *   0,0 ~ 5,0                             E
 *
 *====================================================================
 *
 */

#include<stdio.h>
/* MACRO */
#define IMPRIMIR printf("=================================\n");\
                 printf("Aluno....................: %s",aluno);\
                 printf("Media Ponderada..........: %.1lf\n",media_ponderada);
int main(int argc, char *argv[])
{
  double lab, aval, exam, media_ponderada;
  double peso1 = 2, peso2 = 3, peso3 = 4;
  char aluno[30];
 
  printf("Digite o nome do aluno\n");
  fgets(aluno,30,stdin);

  printf("Digite a nota do trabalho de Laboratorio.\n");
  scanf("%lf",&lab);
  setbuf(stdin,NULL);

  printf("Digite a nota da avaliaçao semestral.\n");
  scanf("%lf",&aval);
  setbuf(stdin,NULL);

  printf("Digite a nota do exame final.\n");
  scanf("%lf",&exam);
  setbuf(stdin,NULL);

  media_ponderada = ((lab * peso1)+(aval * peso2)+(exam * peso3)) / (peso1 + peso2 + peso3);

  if(media_ponderada < 5 ){
    IMPRIMIR;
    printf("Conceito ................: E\n");
  }else if(media_ponderada >= 5 && media_ponderada < 6){
    IMPRIMIR;
    printf("Conceito ................: D\n");
  }else if(media_ponderada >=6 && media_ponderada < 7){
    IMPRIMIR;
    printf("Conceito ................: C\n");
  }else if(media_ponderada >=7 && media_ponderada < 8){
    IMPRIMIR;
    printf("Conceito ................: B\n");
  }else if(media_ponderada >= 8 && media_ponderada <= 10){
    IMPRIMIR;
    printf("Conceito ................: A\n");
  }else{
    printf("Digite uma nota valida de 0 a 10\n");
  }

  

  return 0;
}
