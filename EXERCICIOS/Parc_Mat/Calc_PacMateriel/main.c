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
  float bruto = 0.0, porcentagem = 16, preco_final = 0.0, preco_com_frete = 0.0,jour = 0.0,tva = 0.0,valor_equip=0.0,jour_equip=0.0,prix_equipement=0.0,prix_tva_equip= 0.0;


  do {
  printf("\n\t\t\tWelcome user.  Parc Materiel..\n");
  printf("\t\t\tCalcul du prix.\n\n\n");
  
  printf("Entrer le prix da machine.: ");
  scanf("%f",&bruto);
  setbuf(stdin,NULL);

  printf("Combien de jour..: ");
  scanf("%f",&jour);
  setbuf(stdin,NULL);

  tva = (porcentagem / 100) * bruto ;
  preco_final = (tva + bruto) * jour;

  printf("Entrez le valeur da livraison..: ");
  scanf("%f",&preco_com_frete);
  setbuf(stdin,NULL);

  printf("\n__________________________________________________________\n");
  printf("|Montant Brut..: %.2f                                   |\n",bruto);
  printf("|Valeur avec TVH..: %.2f                                |\n",preco_final);
  printf("|Valeur avec livraison..: %.2f                          |\n",preco_com_frete);
  printf("|_________________________________________________________|\n");
  preco_com_frete += preco_final;

  printf("|Prix final de vente..: %.2f                            |\n",preco_com_frete);
  printf("|_________________________________________________________|\n");

  
  printf("\nPour terminer le programme tapez 0.\n");
  printf("Pour ajuster accessoire tapez 1\n");
  scanf("%i",&sair);
  setbuf(stdin,NULL);

  if(sair == 1){
    printf("Entre le valeur do accessoire..: ");
    scanf("%f",&valor_equip);
    setbuf(stdin,NULL);

    printf("Pour combien de jour le accessoire...");
    scanf("%f",&jour_equip);
    setbuf(stdin,NULL);
  
    prix_equipement = (porcentagem / 100 ) * valor_equip;
    prix_tva_equip = (prix_equipement + valor_equip) * jour_equip;
    
    

  printf("\n________________________________________________________________\n");
  printf("|  Valeur machine avec livraison + TVH..: %.2f                |\n",preco_com_frete);
  printf("|  valor do accessoire ..:%2.f                                   |\n",prix_tva_equip);
  printf("|  Prix final machine plus accessoire et livraison..: %.2f    |\n",prix_tva_equip + preco_com_frete);
  printf("|_______________________________________________________________|\n");

  printf("\nPour terminer le programme tapez 0.\n");
  scanf("%i",&sair);
  setbuf(stdin,NULL);
  printf("\n\n\t\t\tDeveloppe par Tales Lima.\n\n");
  }
  

   
  } while (sair != 0);
  
  /*system("PAUSE");*/
  return 0;
}

/*--------------------Site pra baixar o gcc no windows -----------------*/
/*
 https://jmeubank.github.io/tdm-gcc/

 abre o arquivo main.c no bloco de notas depois compile e salve com o nome Parc_Mat.exe
*/

