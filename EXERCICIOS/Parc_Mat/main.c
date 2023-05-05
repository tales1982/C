/*
   programa de calculo de porcentagens
   feito para empresa  Parc Material.
   desenvolvido por TALES.
   */

/*----------------------- BIBLIOTEC ----------------------------*/
#include<stdio.h>

/*------------------------ FUNCTION PROTOTYPE  ----------------*/



/*------------------------- MAIN -----------------------------*/
int main(int argc, char *argv[])
{
  
  int sair = 0;
  float bruto = 0.0, porcentagem = 0.0, preco_final = 0.0, preco_com_frete = 0.0;


  do {
   printf("\n\t\t\tWelcome user.  Parc Materiel..\n");
  printf("\t\t\tCalcul du prix.\n\n\n");
  
  printf("Entrer le valeur du produit.: ");
  scanf("%f",&bruto);
  setbuf(stdin,NULL);

  printf("Entrer le pourcentage..: ");
  scanf("%f",&porcentagem);
  setbuf(stdin,NULL);

  preco_final = (porcentagem / 100) * bruto;

  printf("Entrez le montant avec la livraison..: ");
  scanf("%f",&preco_com_frete);
  setbuf(stdin,NULL);
  printf("\n__________________________________________________________\n");
  printf("|Montant Brut..: %.2f                                  \n",bruto);
  printf("|Montant du Frais..: %.2f                               \n",preco_final);
  printf("|Valeur du produit avec livraison..: %.2f              \n",preco_com_frete);
  printf("|________________________________________________________\n");
  preco_com_frete += preco_final;

  printf("|Prix final de vente..: %.2f                           \n",preco_com_frete);
  printf("|________________________________________________________\n");

  
  printf("\nPour terminer le programme tapez 0.\n");
  printf("Pour continuer tapez 1\n");
  scanf("%i",&sair);
  setbuf(stdin,NULL);
  printf("\n\n\t\t\tDeveloppe par Tales Lima\n\n");

   
  } while (sair != 0);
  
  system("PAUSE");
  return 0;
}

/*-------------------- -FUNCTION DECLARATION -----------------*/

