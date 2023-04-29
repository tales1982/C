#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choix;
    printf(" ====== Menu ====== \n");
    printf("1.  Royal Cheese\n");
    printf("2.  Mc Deluxe\n");
    printf("3.  Mc Bacon\n");
    printf("4.  Big Mac\n");
    printf("-------------------\n");
    printf("Votre Choix ?\n");
    scanf("%i",&choix);
    setbuf(stdin,NULL);

    switch (choix)
    {
    case 1:
        printf("tu as choisi le menu Royal Cheese\n");
        break;
    case 2:
    printf("tu as choisi le menu Mc Deluxe\n");
        break;
    case 3:
    printf("tu as choisi le menu Mc Bacon\n");
        break;
    case 4:
    printf("tu as choisi le menu Big Mac\n");
        break;
    default:
    printf("Votre choix il est pas sur la liste.\n");
        break;
    }

    return 0;
}
