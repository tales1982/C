#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n= rand() % 6;
    int palpite;
    
    fflush(stdin);
    printf("Vou pensar em um numero entre 1 a 5. Tente advinhar!\n");
    

while (n !=palpite)
{
    n = rand() %6;
    printf("Qual é seu palpite?\n");
    scanf("%i",&palpite);
     if (n == palpite)
    {printf("Parabens voce acertou o numero é :%i\n",palpite);
    }else{
        printf("Voce errou o numero é :%i\n",n);
    }
}

}


