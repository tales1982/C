/*
 O algoritmo Insertion Sort é um método de ordenação que constrói a lista ordenada um item de cada vez,
 movendo elementos não ordenados para a posição correta dentro da porção ordenada da lista.
 É semelhante a como muitas pessoas organizam cartas em suas mãos ao jogar cartas.

 O Insertion Sort é eficiente para conjuntos de dados pequenos e também pode
 ser eficiente para conjuntos de dados quase ordenados,
 pois requer um número relativamente pequeno de movimentos para ordená-los.
 No entanto, para grandes conjuntos de dados, outros algoritmos de ordenação,
 como Merge Sort ou Quick Sort, tendem a ser mais eficientes.
*/
#include <stdio.h>
#define TAM 9

void insertion_sort(int *list, int size);

int main(void)
{
    int num[TAM] = {8, 9, 1, 4, 5, 3, 7, 6, 2};
    int i;

    i = 0;
    printf("Antes\n");
    while (i < TAM)
    {
        printf("%d ", num[i]);
        i++;
    }
    printf("\n\n");

    printf("Depois\n");
    insertion_sort(num, TAM);

    return 0;
}

void insertion_sort(int *list, int size)
{
    int i = 1;
    int trocas = 0;
    int interacao = 0;

    while (i < size)
    {
        int aux = list[i];
        int j = i - 1;

        while (j >= 0 && list[j] > aux)
        {
            list[j + 1] = list[j];
            j--;
            trocas++;
        }
        list[j + 1] = aux;
        interacao++;
        i++;
    }

    // Impressão do array ordenado
    int k = 0;
    while (k < size)
    {
        printf("%d ", list[k]);
        k++;
    }
    printf("\n");
    printf("\nTrocas: %d\n", trocas);
    printf("Interações: %d\n", interacao);
}
