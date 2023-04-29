/*
* Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
* que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
* de A na própria variável A e o dobro de B na própria variável B.
*/

/*--------------- Bibliotecas -------*/
#include"calcular.c"

/* ---------- Prototipo ------------*/
int calcular(int *a,int *b);

/*--------------- MAIN ---------------*/

int main(int a, int b)
{

 int A, B, resultado;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    resultado = calcular(&A, &B);

    printf("Resultado: %d\n", resultado);
    printf("Novo valor de A: %d\n", A);
    printf("Novo valor de B: %d\n", B);

    return 0;
}
