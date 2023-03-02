#include<stdio.h>


float ponteiro_array()
{

	float num[10] = {1.0,2.1,3.4,4.4,5.6,6.7,7.1,8.8,9.5,10.0} ;

	
	for(int i = 0; i < 10; i++){

		
		printf("num[%i]= %.X\n",i,&num[i]);
	}



}
