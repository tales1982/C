/*==================================loca parca mat (MAIN)====================================================*/
#include<stdio.h>
#include<string.h>
#include"menu.h"
/*------------------------ MAIN ----------------*/
int main() {
int opcao;

do{
printf(" _____________________________________________ \n");
printf("|                                             |\n");
printf("| 1 - Consulte machines jusq a 3 Tonnes.      |\n");
printf("| 2 - Consulte machines de 4 a 6 tonnes.      |\n");
printf("| 3 - Consulte machines de 7 a 10 tonnes.     |\n");
printf("| 4 - Consulte petite material.               |\n");
printf("| 5 - SORTI..                                 |\n");
printf("|_____________________________________________|\n");

scanf("%i",&opcao);
setbuf(stdin,NULL);

if(opcao == 1){

}else if(opcao == 2){
menuVio50();
}else if(opcao == 3){


}else if(opcao == 4) { 


}else if (opcao == 5) {
printf("SORTI.....\n");
}else{
printf("ERRO...\n");
}



}while(opcao != 5);

return 0;
}



