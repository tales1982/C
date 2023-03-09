/*
====================================== OBI ===================================

O principal prêmio da Olimpíada Brasileira de Informática é o convite para os 
cursos de programação oferecidos no Instituto de Computação da Unicamp, 
com todas as despesas pagas pela Fundação Carlos Chagas, patrocinadora da OBI. 
São convidados apenas os competidores que atingem um certo número mínimo de pontos,
consideradas as duas fases de provas. Você foi contratado pela Coordenação da OBI
para fazer um programa que, dados os números de pontos obtidos por cada competidor
em cada uma das fases, e o número mínimo de pontos para ser convidado, determine 
quantos competidores serão convidados para o curso na Unicamp. Você deve considerar
que todos os competidores participaram das duas fases;
o total de pontos de um competidor é a soma dos pontos obtidos nas duas fases.
Por exemplo, se a pontuação mínima para ser convidado é 435 pontos, um competidor
que tenha obtido 200 pontos na primeira fase e 235 pontos na segunda fase será
convidado para o curso na Unicamp. Já um competidor que tenha obtido 200 pontos
na primeira fase e 234 pontos na segunda fase não será convidado.

ENTRADA
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo
de entrada padrão. A primeira linha da entrada contém dois números inteiros N e P,
representando respectivamente o número de competidores e o número mínimo de pontos
para ser convidado. Cada uma das N linhas seguintes contém dois números inteiros X e Y 
indicando a pontuação de um competidor em cada uma das fases.

SAIDA
Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro,
indicando o número de competidores que serão convidados a participar do curso na Unicamp.


Restrições
1 ≤ N ≤ 1000
1 ≤ P ≤ 1000
0 ≤ X ≤ 400
0 ≤ Y ≤ 400

Exemplos
 _____________________________________
| Entrada           | Saida           | 
|                   |                 |
| 3 100             |2                |
| 50 50             |                 |
| 100 0             |                 |
| 49 50             |                 |
|___________________|_________________|
| Entrada           |Saida            |
|                   |                 |
| 4 235             |2                |
| 100 134           |                 |
| 0 0               |                 |
| 200 200           |                 |
| 150 150           |                 |
|___________________|_________________|

*/

#include<stdio.h>


int main(int argc, char *argv[])
{
  int n, p, x, y, cc;

  scanf("%i %i",&n, &p);

  for(int i =0;i < n; i++){
    scanf("%i %i",&x,&y);
    if((x+y)>=p){
      cc++;
    }


  }

printf("%i",cc);
  return 0;
}
