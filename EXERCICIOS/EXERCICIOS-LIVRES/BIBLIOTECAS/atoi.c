#include <stdio.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    // Ignorar espaços em branco iniciais
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }

    // Verificar sinal
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Converter caracteres numéricos
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }

    return sign * res;
}

int main() {
    // Teste com um número positivo
    char posStr[] = "12345";
    int posResult = ft_atoi(posStr);
    printf("Resultado positivo: %d (Esperado: 12345)\n", posResult);

    // Teste com um número negativo
    char negStr[] = "-6789";
    int negResult = ft_atoi(negStr);
    printf("Resultado negativo: %d (Esperado: -6789)\n", negResult);

    // Teste com uma string não numérica
    char nonNumStr[] = "abc123";
    int nonNumResult = ft_atoi(nonNumStr);
    printf("Resultado não numérico: %d (Esperado: 0 ou algum comportamento específico)\n", nonNumResult);

    return 0;
}
