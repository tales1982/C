#include <stdio.h>


int main()
{
	int a =15,*p =NULL;



	printf("%d\n",a);//15
	printf("%i\n",&a);//8DBE019C
	printf("%i\n",&p);//8DBE01A0
	printf("%i\n",p);//0

	p = &a;
	printf("%i\n",p);//8DBE019C

	p = a;
	printf("%i\n",p);//15

	return 0;

}
