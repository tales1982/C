#include<stdio.h>

float matriz()
{

	float array[3][4] = {{1.0,2.0,3.0,4.0},{0.1,0.2,0.3,0.4},{11.1,22.2,33.3,44.4}};

	for(int i =0; i < 3; i++){

		for(int j = 0;j < 4; j++){

			printf("Linha [%d] Coluna [%d] Endereço d Memoria --> %X,\n",i+1, j+1 ,&array[i][j]);
		}
	}



}
