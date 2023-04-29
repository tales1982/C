/*
  ------------------------------------------  Auto-estrada -----------------------------------------
Certas regiões resolveram o problema de tráfego intenso com a construção de auto estradas, 
que são estradas contendo em geral quatro ou mais pistas de rolagem em cada sentido, 
de forma que um número grande de carros possa passar sem que ocorram congestionamentos. 
O problema das auto estradas é que, junto com os carros temos um aumento considerável de ruído nas
imediações da pista, o que incomoda os moradores das regiões próximas.

A GoTo engenharia, uma empresa do ramo de construção especializada em obras de estradas,
encontrou uma solução engenhosa para o problema: instalar grandes painéis defletores de
som de cada lado da auto estrada para tentar minimizar o ruído percebido pelos vizinhos.

Os painéis são construídos em blocos contínuos de 10 metros lineares.
A auto estrada também é dividida em blocos de 10 metros de extensão, sendo cada bloco descrito por um código,
como definido abaixo:

P - Pista, trecho em linha reta sem curvas ou saídas. Deve-se instalar um painel de cada lado da auto estrada.

C - Curva, trecho em curva de 90 graus na auto estrada. Deve-se instalar dois painéis de concreto
do lado externo da curva; o outro lado fica sem painel instalado.

A - Acesso, trecho em linha reta no qual existe uma entrada ou uma saída a partir de um dos lados
da auto estrada (mas não do outro). Deve-se instalar um painel no lado onde não existe o acesso.

D - Duplo acesso, trecho em linha reta no qual existem dois acessos 
(entradas ou saidas, em qualquer combinação possível), um de cada lado da rodovia.
Nenhum painel deve ser instalado nesse bloco da auto estrada.

Apesar de ser uma empresa formada por engenheiros, nenhum dos funcionários da GoTo sabe programar,
de forma que eles decidiram contrataram você como consultor independente. 
Você deve escrever um programa para, dado um mapa da auto estrada, determinar quantos painéis defletores
são necessários para cobrir toda a extensão dessa auto estrada.

=== Entrada ===
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão.
A primeira linha contém um inteiro C, indicando o comprimento da auto estrada, em blocos de 10 metros.
A linha seguinte contém C caracteres, cada letra descrevendo um bloco de 10 metros da auto estrada, 
como definido acima.

=== Saída ===
Seu programa deve imprimir na saída padrão uma única linha contendo um número inteiro, 
representando quantas unidades de painel são necessárias para cobrir toda a extensão da auto estrada.

=== Restrições ===
1 ≤ C ≤ 10 elevado a 6

=== Informações sobre a pontuação ===
-Para um subconjunto dos casos de teste totalizando 30 pontos,
1 ≤ C ≤ 100.

-Para um subconjunto dos casos de teste totalizando 55 pontos,
1 ≤ C ≤ 103.


=== EXEMPLO ===
______________________________________
| Entrada          |  Saida          |
|                  |                 |
| 5                |  5              |
| DAPCD            |                 |
|__________________|_________________|
| Entrada          |  Saida          |
|                  |                 |
| 8                |  12             |
| AACCAAPP         |                 |
|__________________|_________________|
| Entrada          |  Saida          |
|                  |                 |
| ADCCPPPPPAADCP   |  21             |
|                  |                 |
|__________________|_________________|


 */
