/*
 * Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
 * do teclado e imprima o endereço das posições contendo valores pares.
 */

#include<stdio.h>

int array(){

    int num[5] = {0};
    int *ptr;
    ptr = num;
    int i;



    printf("Digite 5 numeros.\n");
    for (i = 0; i < 5; i++) {

      printf("Valor %i ",i+1 ); 
      scanf("%i",&ptr[i]);  
    }       
  
   for (i = 0; i < 5; ++i) {
     if (ptr[i] % 2 == 0) {
       printf("O endereço %i contem o valor %i\n",i ,ptr[i]);
     }
   } 
}

