#include <stdio.h>


int main(int argc, char const *argv[])
{
    int compteur;
    scanf("%i",&compteur);

    while (compteur <= 20)
    {
        printf("Contador = %i\n",compteur);
        compteur++;
    }
    
    return 0;
}
