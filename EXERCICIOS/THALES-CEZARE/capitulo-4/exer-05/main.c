/*
Suponhamos que num determinado ano N as populacoes do Brasil e USA eram de 100 e 190 milhoes de habitantes, respectivamente.
Sabendo que os USA tem cresimento anual de 1% na sua populacao e o Brasil tem um crescimento anual de 5%
*/
#include <stdio.h>

int main() {
    int populacao_brasil = 214, populacao_usa = 332, ano_atual = 0;
    float taxa_crescimento_brasil = 0.05, taxa_crescimento_usa = 0.01;

    printf("Por favor, informe o ano atual: ");
    scanf("%d", &ano_atual);

    // Loop para calcular quando a população do Brasil ultrapassa a dos EUA
    while (populacao_brasil <= populacao_usa) {
        // Calcula o aumento anual da população
        populacao_brasil += populacao_brasil * taxa_crescimento_brasil;
        populacao_usa += populacao_usa * taxa_crescimento_usa;
        ano_atual++;
    }

    printf("Em %d, a população do Brasil será de %d, ultrapassando a dos EUA que será de %d\n", ano_atual, populacao_brasil, populacao_usa);

    return 0;
}