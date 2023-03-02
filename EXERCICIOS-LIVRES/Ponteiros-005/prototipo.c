#include <stdio.h>

void prototipo(int A, int B)
{

	int *ptr,*ptr2 ;

	if(A > B){
	ptr = &A;
	ptr2 = &B;
	printf("O maior valor foi salvo na  variavel A = %i\n",*ptr);
	printf("O menor valor foi salvo na variavel B = %i\n",*ptr2);	
	}else{
	ptr = &B;
	ptr2 = &A;
	printf("O maior valor foi salvo na  variavel A = %i\n",*ptr);
	printf("O menor valor foi salvo na variavel B = %i\n",*ptr2);	
	}
}
