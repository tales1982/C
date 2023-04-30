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

  enum Dias {domingo = 1, segunda,terca,quarta,quinta,sexta,sabado }dias;
/*------------------------------------------------------------------------------*/
int main(void)
{
  printf("Digite o numero do mes: ");
  scanf("%i",&meses);
  setbuf(stdin,NULL);
  //Testando se o valor está na faixa válida usando os valores da enum
  //O enum é um INT seus valores serao sempre inteiros.
  printf("Digite o numero do dia da semana.\n");
  scanf("%i",&dias);
  setbuf(stdin,NULL);

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

  switch (dias) {
     case 1:
      printf(" Domingo\n");
      break;
    case 2:
      printf(" Segunda\n",dias);
      break;
    case 3:
      printf(" Terça\n",dias);
      break;
    case 4:
       printf(" Quarta\n",dias);
      break;
    case 5:
 printf(" Quinta\n",dias);
      break;
    case 6:
 printf(" Sexta\n",dias);
      break;
    case 7:
      printf(" Sabado\n",dias);
      break;
       default:
       printf(" Digite um dia valido de 1 a 7\n",dias);
  }

  
  return 0;
}
