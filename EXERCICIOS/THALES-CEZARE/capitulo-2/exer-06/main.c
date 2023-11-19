/*
 Faça um algoritimo que lendo 3 números correspondentes aos coeficientes de uma equaçao do 2° grau. Calcule seu delta e imprima as raizes desta equaçao.
 */
#include <stdio.h>
#include <math.h>

void resolverEquacaoSegundoGrau(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float raizDelta = sqrt(delta);
        float x1 = (-b + raizDelta) / (2 * a);
        float x2 = (-b - raizDelta) / (2 * a);
        printf("As raízes são x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("A raiz dupla é x = %.2f\n", x);
    } else {
        printf("Não existem raízes reais para esta equação.\n");
    }
}

int main() {
    float a, b, c;

    // Solicita os coeficientes ao usuário
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Chama a função para resolver a equação do segundo grau
    resolverEquacaoSegundoGrau(a, b, c);

    return 0;
}
