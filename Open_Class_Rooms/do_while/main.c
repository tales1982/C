#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opc;

    do{
        printf("\n\nBienvenue sur OpenClassRooms !\n");
        printf(" ====== Menu ====== \n");
        printf("1.  Royal Cheese\n");
        printf("2.  Mc Deluxe\n");
        printf("3.  Mc Bacon\n");
        printf("4.  Big Mac\n");
        printf("5.  EXIT\n");
        printf("-------------------\n");
        printf("Votre Choix ?\n");
        scanf("%i",&opc);
        switch (opc)
    {
    case 1:
        printf("\ntu as choisi le menu Royal Cheese\n");
        break;
    case 2:
    printf("\ntu as choisi le menu Mc Deluxe\n");
        break;
    case 3:
    printf("\ntu as choisi le menu Mc Bacon\n");
        break;
    case 4:
    printf("\ntu as choisi le menu Big Mac\n");
        break;
    case 5:
    printf("\nMerci pour visité chez nous.\n");
        break;
    default:
    printf("\nVotre choix il est pas sur la liste.\n");
        break;
    }
       
    } while (opc != 5);
    
    






    return 0;
}


