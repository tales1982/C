/*
 ================================ VESTIBULAR ==================================

 A maioria das universidades brasileiras usa o vestibular para selecionar seus alunos. 
 O vestibular consiste de uma ou mais provas sobre as matérias do Ensino Médio,visando
 avaliar os conhecimentos dos candidatos. Um formato popular de prova de vestibular é a prova
 objetiva. Neste formato de prova, cada candidato deve escolher uma das cinco alternativas 
 apresentadas pela questão como sendo a correta. Durante a correção dos cartões,
 cada questão onde a alternativa escolhida pelo candidato é a mesma do gabarito, ele ganha um ponto.
 Alguns dos vestibulares mais concorridos do Brasil são disputados por dezenas de milhares
 de candidatos, e, por isso, geralmente usa-se uma folha de leitura óptica e um
 programa de computador para corrigir as provas de todos os candidatos e gerar a lista com
 suas pontuações. Você trabalha no comitê responsável pelo vestibular em uma faculdade e
 deve escrever um programa que, dado o gabarito e as respostas de um dos candidatos,
 determina o número de acertos daquele candidato.

ENTRADA
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão.
A primeira linha da entrada contém um único inteiro N, indicando o número de questões da prova.
A segunda linha da entrada contém uma cadeia de N caracteres, indicando o gabarito da prova.
A terceira linha da entrada contém outra cadeia de N caracteres, indicando as opções marcadas
pelo candidato. Ambas as cadeias contêm apenas os caracteres `A", `B", `C", `D" e `E"
(sempre em letra maiúscula).

SAIDA
Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro, 
indicando o número de acertos do candidato.

Restrições

1 ≤ N ≤ 80

Exemplos
 ____________________________________
| ENTRADA         | SAIDA           |
|  7              | 4               | 
| AEDBCCE         |                 |
| ADDCCBE         |                 |
|_________________|_________________|
| ENTRADA         | SAIDA           |
|                 |                 |
| 5               |                 |
| ABCDE           | 5               |      
| ABCDE           |                 |
|_________________|_________________|
| ENTRADA         | SAIDA           |
|                 |                 |
| 10              |                 |
| ABCDEABCDE      | 0               |
| BCDEABCDEA      |                 |
|_________________|_________________|


*/


#include <stdio.h>
#include <string.h>

int main() {
    int n, acertos = 0;
    char gabarito[81], respostas[81];

    printf("Indique os numero de questoes.\n");
    scanf("%d", &n);

    printf("Indique as resposta corretas.\n");
    scanf("%s", &gabarito);

    printf("Agora indique suas respostas\n");
    scanf("%s", &respostas);

    for (int i = 0; i < n; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }
    printf("Voce acertou %d questoes\n", acertos);
    return 0;
}

