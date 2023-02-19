/**
 * Exercício proposto: desenvolva uma macro que calcule a média ponderada entre 3
notas de 1 a 10. Desenvolva o projeto da interface, onde o usuário entra com a nota e o
respectivo peso. Ao final do terceiro peso, o sistema calcula o resultado.
Exemplo: o usuário entra com
Nota 1= 7,0 Peso 1 = 2
Nota 2 = 8,5 Peso 2 = 3
Nota 3 = 9,1 Peso 3 = 5
O sistema resolverá a equação
𝑀𝑝 =
𝑛𝑜𝑡𝑎1 × 𝑝𝑒𝑠𝑜1 + 𝑛𝑜𝑡𝑎2 × 𝑝𝑒𝑠𝑜2 + 𝑛𝑜𝑡𝑎3 × 𝑝𝑒𝑠𝑜3
𝑝𝑒𝑠𝑜1 + 𝑝𝑒𝑠𝑜2 + 𝑝𝑒𝑠𝑜3
𝑀𝑝 =
7 × 2 + 8,5 × 3 + 9,1 × 5
= 8,5
2+3+5
*/
#include"nota_ponderada.c"


float nota_ponderada(float a, float b, float c,float A,float B, float C);

int main(void)
{
    float a,b,c,A,B,C;

    nota_ponderada(a,b,c,A,B,C);

    return 0;
}



