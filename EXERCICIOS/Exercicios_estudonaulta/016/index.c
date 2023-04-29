/*-------------------- Bibliotecas --------------------*/
#include <stdio.h>
#include<locale.h>
/*---------------- Protótipo de função ----------------*/


/*------------------ Função principal -----------------*/
main(void){
    setlocale(LC_ALL,"Portuguese");

    int n1,n2,n3;

    printf("Digite sua primeira nota.\n");
    scanf("%d",&n1);
    setbuf(stdin,NULL);

    printf("Digite sua segunda nota.\n");
    scanf("%d",&n2);
    setbuf(stdin,NULL);

    printf("Digite sua terceira nota.\n");
    scanf("%d",&n3);
    setbuf(stdin,NULL);
    double media = (float)(n1 + n2 + n3)/3;
    printf("%.2f",media);
   if(media >= 8){
    printf("\nParabéns sua media foi %.2f \n",media);
   }

}

/*-------- Desenvolvimento da função secundaria -------*/


/*-------------------------FIM-------------------------*/