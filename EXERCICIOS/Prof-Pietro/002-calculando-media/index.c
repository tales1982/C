#include <stdio.h>

int main(){
    float notas[3];
    int i;
    float soma;
    float media; 

    for(i=0;i<3;i++){
    printf("Digite as 3 notas:\n");
    scanf("%f", &notas[i]);
    soma += notas[i];    
    media = soma/3;
    }


    printf("A soma das nota é :%.2f e a media das notas é :%.2f \n",soma , media);
}