#include <stdio.h>
#define media ((a * A) + (b * B) + (c * C)) / (A + B + C)//Macros

float nota_ponderada(float a, float b, float c, float A, float B, float C)
{

    printf("Digite sua 1° nota\n");
    scanf("%f", &a);
    printf("Agora digite o peso da sua 1° nota\n");
    scanf("%f", &A);
    setbuf(stdin, NULL);

    printf("Digite sua 2° nota\n");
    scanf("%f", &b);
    printf("Agora digite o peso da sua 2° nota\n");
    scanf("%f", &B);
    setbuf(stdin, NULL);

    printf("Digite sua 3° nota\n");
    scanf("%f", &c);
    printf("Agora digite o peso da sua 3° nota\n");
    scanf("%f", &C);
    setbuf(stdin, NULL);

    media;
    return printf("Sua media final é de :%.1f\n", media);
}