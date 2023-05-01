/*
 Faça uma funçao recursiva para a soma de todos os valores de um vetor de inteiros.
 */

#include<stdio.h>
#include<stdlib.h>

int recursiva(int vet[], int tam);

int main(int argc, char *argv[])

{
   int *vet,tam = 0,i;

  
   printf("Digite quantos numeros vc quer digitar..: \n");
   scanf("%i",&tam);
   setbuf(stdin,NULL);
  
   vet = malloc(tam * sizeof(int));/*IMPORTANTE sempre use a alocacao dinamica depois que inicializar a vareavel do tamanho senao vai dar alguns erro*/
   
   if(!vet)
   {
     printf("Memoria cheia.\n");
     exit(1);
   }
   printf("Digite os valores\n");
   for (i = 0; i < tam; i++) {
     printf("Valor %i°..: ",i+1);
     scanf("%i",&vet[i]);
     setbuf(stdin,NULL);
   }


   printf("Resultado..: %i\n",recursiva(vet,tam));

  return 0;
}

int recursiva(int vet[], int tam)
{
  if(tam == 0){
    return 0;
  }else{
    return vet[tam -1] + recursiva(vet,tam -1);
  }
}

//no vet[tam - 1] estou passando por cada vetor 
