/*Exercício 1- Faça um programa que receba 15 números via argumento e ordene esses números em ordem crescente usando o metodo Bubble Sort. Na figura 1 temos um exemplo da execução do programa.*/
#include "bubble_sort.h"

int main(void)
{
    int num[9] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
    int size = ft_size(num);
    printf("Original..:\n");
    ft_putstr(num);
    printf("Ordenado..:\n");
    ft_bubble_sort(num,size);
      ft_putstr(num);

    return(0);
}