/*
 Faça um algoritimo que leia tres numeros e imprimilos em ordem cresente.
 */

#include <stdio.h>
#include <stdlib.h>

//funcao de comparacao para qsort
int comparar(const void *a, const *b){
  return (*(int *)a - *(int *)b);
}



int main(){

  int num[3]={0};
  int tamanho = sizeof(num) / sizeof(num[0]);


  for(int i = 0; i < 3 ;i++){
    printf("Didite o %i° numero..: ", i+1);
    scanf("%i",&num[i]);
    setbuf(stdin,NULL);
  }

  qsort (num,tamanho,sizeof(num[0]),comparar);

     // Imprime o array ordenado
    printf("Array ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", num[i]);
    }


  printf("\nDEBUG[%i]\n",num[0]);
  printf("DEBUG[%i]\n",num[1]);
  printf("DEBUG[%i]\n",num[2]);
}
