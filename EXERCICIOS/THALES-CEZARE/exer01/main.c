#include <stdio.h>
#include <stdlib.h>

int main(){

	int numberA, numberB, result;


	printf("Digite o 1° numero\n");
	scanf("%d",&numberA);
	setbuf(stdin,NULL);

	printf("Digite o segundo valor\n");
	scanf("%d",&numberB);
	setbuf(stdin,NULL);

	printf("O resultado e : %d \n", numberA + numberB ) ;

}

