/*Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
 𝑆(𝑛) = 1³ + 2³ + ⋯ + 𝑛3
 */

#include <stdio.h>
#include <math.h>
int somatorio_cubos(int n){
    if(n == 1)
        return pow(n,3);
    else
        return pow(n,3) + somatorio_cubos(n-1);
}


int main(){
    int n;
    printf("Entre com n: ");
    scanf("%d", &n);
    printf("Somatorio dos cubos 1 ate %d = %d", n,somatorio_cubos(n));
    return 0;
}
