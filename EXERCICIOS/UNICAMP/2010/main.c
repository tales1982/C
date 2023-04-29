/*
   -------------------------------- Conta de água --------------------------------
   A empresa local de abastecimento de água, a Saneamento Básico da Cidade (SBC), 
   está promovendo uma campanha de conservaçãoo de água, distribuindo cartilhas e promovendo
   açãoes demonstrando a importância da água para a vida e para o meio ambiente.

   Para incentivar mais ainda a economia de água, a SBC alterou os preços de seu fornecimento de 
   forma que, proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo metro
   cúbico. Todo cliente paga mensalmente uma assinatura de R$ 7, 
   que inclui uma franquia de 10 m3 de água. Isto é, para qualquer consumo entre 0 e 10 m3,
   o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da assinatura deve ser pago
   mesmo que o consumidor não tenha consumido água). Acima de 10 m3, cada metro cúbico
   subsequente tem um valor diferente, dependendo da faixa de consumo.
   A SBC cobra apenas por quantidades inteiras de metros cúbicos consumidos.
   A tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:

   __________________________________________________________
   |Faixa de consumo (m3)	  |      Preço (por m3)          |
   |                                                        |
   |  até 10  <----------------------->incluído na franquia |
   |  11 a 30 <------------------------>   1                |
   |  31 a 100 <----------------------->   2                |
   |  101 em diante <------------------>   5                |
   |________________________________________________________|

   Assim, por exemplo, se o consumo foi de 120 m3, o valor da conta é:

   7 reais da assinatura básica;
   20 reais pelo consumo no intervalo 11 - 30 m3;
   140 reais pelo consumo no intervalo 31 - 100 m3;
   100 reais pelo consumo no intervalo 101 - 120 m3.
   Logo o valor total da conta de água é R$ 267.

   Tarefa
   Escreva um programa que, dado o consumo de uma residência em m3, 
   calcula o valor da conta de água daquela residência.

   Entrada
   A única linha da entrada contém um único inteiro N, indicando o consumo de água da residência, 
   em m3 (0 ≤ N ≤ 103).

   Saída
   Seu programa deve imprimir uma única linha, contendo o valor da conta de água daquela residência.

   Exemplos
   ______________________________
   | Entrada       |   Saída    |
   |    8          |      7     |
   |_______________|____________|			   
   | Entrada       |   Saida    |
   |   14          |     11     |
   |_______________|____________|			
   | Entrada       |   Saida    | 
   |   42          |     51     |
   |_______________|____________|			

*/

#include <stdio.h>
#define BASIC 7
#define PLANO1 10
#define PLANO2 30
#define PLANO3 100

void plano1(int *val);
void plano2(int *val);
void plano3(int *val);
int main(int argc, char *argv[])
{
  int consumo = 0;

  printf("Digite o consumo de agua desse meis...: ");
  scanf("%i",&consumo);
  setbuf(stdin,NULL);

  if(consumo <= 10){
    printf("Valor a pagar pela assinatura basica ...: R$ 7,00 Reais\n");
  }else if(consumo >PLANO1 && consumo <= PLANO2 ){
    plano1(&consumo);  
  }else if(consumo > PLANO2 && consumo <= PLANO3){
    plano2(&consumo);
  }else{
    plano3(&consumo);
  }

  return 0;
}

void plano1(int *val)
{
  int calc = 0, calc_t = 0;
  calc = *val;
  calc = (calc -10);
  calc_t = (calc * 1) + BASIC;
  printf("Voçe consumiu %i metros cubicos de agua.\n",*val);
  printf("O valor da sua fatura e de ...: R$ %i Reais.\n",calc_t);
}

void plano2(int *val)
{
  int a , b ,result;
  a = *val;
  a -= PLANO2;
  b = *val - a - PLANO1;
  result = (a * 2) + b + BASIC;
  printf("Voçe consumiu %i metros cubicos de agua.\n",*val);
  printf("O valor da sua fatura e de ...: R$ %i Reais.\n",result);
}

void plano3(int *val)
{
  int a, b, c , result;
  a = *val;
  a -= PLANO3;
  b = *val - a - PLANO2;
  c = *val - a - b - 10;
  result = ((a * 5)+(b * 2)) + c + BASIC;
  printf("Voçe consumiu %i metros cubicos de agua.\n",*val);
  printf("O valor da sua fatura e de ...: R$ %i Reais.\n",result);

}

