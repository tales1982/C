/*
 Supposons que vous ayes une liste triée de 128 noms et que vous
 la parcouriez á l'aide de la recherche binaire. Que st le nombre
 maximun d'etapes qu'il faudrait?
 */

#include <stdio.h>
#include <string.h>

#define NUM_NOMES 128
#define TAM_NOME 20

int rechercheBinaire(char liste[][TAM_NOME], char *element) {
    int debut = 0;
    int fin = NUM_NOMES - 1;
    int milieu;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        
        int resultatComparaison = strcmp(liste[milieu], element);

        if (resultatComparaison == 0) {
            return milieu; // Élément trouvé à l'indice milieu
        } else if (resultatComparaison < 0) {
            debut = milieu + 1; // Recherche dans la moitié supérieure
        } else {
            fin = milieu - 1; // Recherche dans la moitié inférieure
        }
    }

    return -1; // Élément non trouvé
}

int	main()
{

char noms[NUM_NOMES][TAM_NOME] =  {
        "Ana", "Bob", "Cleo", "Dan", "Eva", "Fay", "Gil", "Hue", "Ivy", "Jan",
        "Kim", "Leo", "Mia", "Nia", "Oma", "Pam", "Qua", "Ria", "Sky", "Tom",
        "Udo", "Val", "Wan", "Xio", "Yas", "Zed", "Ala", "Ben", "Cat", "Dov",
        "Elm", "Fiz", "Gus", "Hal", "Ira", "Jen", "Kai", "Lia", "Max", "Nel",
        "Yan", "Zoe", "Ada", "Bex", "Cal", "Dex", "Eli", "Fay", "Gia", "Hoy",
        "Iza", "Jay", "Kip", "Luz", "Moe", "Nan", "Ora", "Poe", "Qia", "Roz",
        "Sia", "Tia", "Uva", "Vea", "Wit", "Xan", "Yun", "Zia", "Ara", "Bao",
        "Cai", "Dio", "Eva", "Fia", "Gin", "Hao", "Ina", "Jia", "Koa", "Lia",
        "Mao", "Nia", "Ola", "Pia", "Qin", "Rio", "Sia", "Tao", "Uta", "Via",
        "Wan", "Xia", "Yan", "Zai", "Ali", "Bri", "Cai", "Dan", "Eli", "Fay",
        "Gia", "Hal", "Ivy", "Jen", "Kai", "Lia", "Mia", "Nia", "Ola", "Pia",
        "Quo", "Ria", "Sia2", "Taj", "Uma", "Via", "Wen", "Xan"
    };
      char recherche[TAM_NOME];
    printf("Entrez le nom que vous souhaitez rechercher : ");
    scanf("%s", recherche);

    int index = rechercheBinaire(noms, recherche);

    if (index != -1) {
        printf("Le nom '%s' a été trouvé à l'index %d.\n", recherche, index);
    } else {
        printf("Le nom '%s' n'a pas été trouvé.\n", recherche);
    }

    return 0;
}
