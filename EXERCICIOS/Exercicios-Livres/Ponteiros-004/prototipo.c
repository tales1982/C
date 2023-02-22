
void trocar_valores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}




/*
#include <stdio.h>

int prototipo(int A, int B){
    
    int *ptr, *ptr2;
    ptr = &A;
    ptr2 = &B;
    printf("\n======= O valor Original =======\n");
    printf("O valor original de A = %d, e B é = %d\n",A, B);

    
    ptr = B;//Estou apontando para o endereço nao o valor

    ptr2 = A;

    
    printf("\n======= O valor invertido =======\n");
    printf("O valor invertido de A = %d, e B é = %d\n",ptr, ptr2);

}
*/