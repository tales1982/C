/*
Fassa um algoritimo que utilize whille
*/


#include <stdio.h>

int main(){

    int num1=7, num2=25;
    

    while (num1 <= num2)
    {
        num1 = num1+2;
        num2++;
        printf("num1 = %d, num2 = %d\n", num1,num2);
    };
    
    return 0;
}