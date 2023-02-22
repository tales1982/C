/*Exercício proposto: desenvolva uma função em C que imprima o valor da frequência de corte de um filtro passa-baixas, onde o usuário entrará com os parâmetros: R, C e ‘A’. A equação é a que segue:
𝑓=
1
2𝜋𝑅𝐶
A mesma função deverá calcular e imprimir na tela o valor da constante de tempo,
resultado do produto de R e C, caso o usuário entre com R, C e ‘B’. A equação é a que segue:
𝜏 = 𝑅𝐶
Exemplo: o usuário entra com 1000, 1E-6 e ‘A’. O cálculo matemático é
𝑓=
1
= 159,15𝐻𝑧
2𝜋 × 1000 × 1 × 10−6
No console, deverá ser impresso “f= 159.15Hz”.
Exemplo: o usuário entra com 2700, 100E-9 e ‘B’. O cálculo matemático é
𝜏 = 2700 × 100 × 10−9 = 0,00027𝑠
No console, deverá ser impresso “t= 0.00027s”.*/

#include <stdio.h>

int main()
{
    for ( int i = 0; i < 11; i++)
    {
        printf("\n7 x %d = %d\n",i,7 * i);
    }
    
    return 0;
}
