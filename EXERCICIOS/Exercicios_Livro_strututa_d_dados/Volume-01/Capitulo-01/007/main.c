/*
   Escreva um programa que verifica se uma sequecia de n valores inteiros introduzidos via teclado
   constitui uma progressao aritimetica. Se for o caso, o programa deve apresentar a razao e a soma 
   dos termos da progresao aritimetica.
   */
/*-------------------------------------- BIBLIOTECA--- ---------------------------------------*/
#include<stdio.h>
/*-------------------------------- Declaracao da funcao --------------------------------------*/
void pa(void);

/*--------------------------------------- MAIN -----------------------------------------------*/
int main(int argc, char *argv[])
{

  printf("\t\t\t>>>>> Progressão Aritmética (P.A.) <<<<<\n");
  printf("\t\tDigite 5 digitos para saber se os digitos formam uma P.A\n\n");
  pa();
  return 0;
}

/*------------------------------- Prototipo da funcao ----------------------------------------*/
void pa(void)
{

  int pa[5], res[5],i,res_PA[4],result=0;

  for (i = 0; i < 5; ++i) {
    printf("\t\tDigite o %i° Digito...: ",i+1);
    scanf("%i",&pa[i]);
    setbuf(stdin,NULL);
    result += pa[i];
  }
  for (i = 0; i < 4; ++i) {
    res_PA[i] = pa[i] - pa[i+1];
  }
  if(res_PA[0] == res_PA[1] && res_PA[1] == res_PA[2] && res_PA[2] == res_PA[3]){
    printf("\n\t\tSeus termos formam uma P.A\n");
    printf("\t\tA razao dos seus digitor é..: %i\n",-res_PA[0]);
    printf("\t\tA soma de todos os termos é..: %i\n",result);
  }else{
    printf("\t\tSeus termos nao formam uma P.A.\n");
  }

}
