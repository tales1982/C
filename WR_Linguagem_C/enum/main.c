/*
---------------------------- ENUM ----------------------------
É um tipo de dado definido pelo usuário que define uma variável que vai receber apenas um conjunto
restrito de valores. Na realidade, um enum é um conjunto de valores inteiros representados
por identificadores
 */
#include <stdio.h>
#include <stdlib.h>

  /*-------------------- definição da enum --------------------------------*/
  enum meses_do_ano {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho,
  Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;
/*------------------------------------------------------------------------------*/
int main(void)
{
  printf("Digite o numero do mes: ");
  scanf("%i",&meses);
  setbuf(stdin,NULL);
  //Testando se o valor está na faixa válida usando os valores da enum
  //O enum é um INT seus valores serao sempre inteiros.
  if((meses >= Janeiro) && (meses <= Dezembro))
  {

    //switch que determina qual mes será impresso na tela
    switch(meses)
    {
    case Janeiro:
    printf("%d - Janeiro",meses);
    break;

    case Fevereiro:
    printf("%d - Fevereiro",meses);
    break;

    case Marco:
    printf("%d - Marco",meses);
    break;

    case Abril:
    printf("%d - Abril",meses);
    break;

    case Maio:
    printf("%d - Maio",meses);
    break;

    case Junho:
    printf("%d - Junho",meses);
    break;

    case Julho:
    printf("%d - Julho",meses);
    break;

    case Agosto:
    printf("%d - Agosto",meses);
    break;

    case Setembro:
    printf("%d - Setembro",meses);
    break;

    case Outubro:
    printf("%d - Outubro",meses);
    break;

    case Novembro:
    printf("%d - Novembro",meses);
    break;

    case Dezembro:
    printf("%d - Dezembro",meses);
    break;

    }
  }
  else //senão estiver na faixa válida exibe mensagem
  {
    printf("Valor INVALIDO!!!\n");

    printf("Os valores validos para os meses do ano sao: \n\n");
    //Loop que exibe a faixa de valores válida
    //Note que os valores da enum são na realidade inteiros
    //então podemos incrementa-los e usar no loop
    for(meses = Janeiro; meses <= Dezembro; meses++)
      printf("Mes: %d \n",meses);
  }

  
  return 0;
}
