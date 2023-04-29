#include "dev_main.c"

int main(void)
{
    int c,d;
    printf("Digite um numero pra ver seu triplo.\n");
    scanf("%i",&c);
    setbuf(stdin,NULL);
    
    d = dev_main(c);
    printf("%i\n",d);
    return 0;
}
