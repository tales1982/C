/*
10° Exercicio
Escreva um programa que leia e armazene a receita e a despesa anual de uma empresa. Calcule o lucro obtido pela empresa.
Receita --> É todo o dinheiro que entro no caixa da empresa.
Despesa --> É todo gasto que sai da caixa da empresa.
Lucro --> É a diferença entre oque saiu eo que entrou(lucro = receita - despesa)
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float receita, despesa;

 printf("Digite o lucro anual da sua empresa.\n");
 scanf("%f",&receita);
 setbuf(stdin,NULL);

 printf("Digite a despesa anual da sua empresa.\n");
 scanf("%f",&despesa);
 setbuf(stdin,NULL);

 printf("O lucro da sua empresa foi de R$ %.2f Mil Reais",receita -despesa);




    return 0;
}
