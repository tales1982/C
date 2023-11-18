/*
 Elabore um algoritimo que calcule a sua media e imprima a media calculada, e a mensagem "Aprovado" "Exame" "Reprovado"
 */

#include <stdio.h>

int main(){
  float media1, media2, media3;

  printf("Digite sua 1° media..: ");
  scanf("%f",&media1);
  setbuf(stdin,NULL);

  printf("Digite sua 2° media..: ");
  scanf("%f",&media2);
  setbuf(stdin,NULL);

  printf("Digite sua 3° media..: ");
  scanf("%f",&media3);
  setbuf(stdin,NULL);

  float result =(media1 +media2 + media3)/3;

  if(result >=0 && result <= 4.9){
    printf("Sua nota %.1f nao atigiu a media esperada.\n'Reprovado'\n",result);
  }else if(result >=5 && result <=6.9 ){
    printf("Sua media %.1f nao foi suficiente para passar direto.\n'Exame'\n",result);
  }else if(result >=7 && result <=10){
    printf("Parabens sua nota foi de %.1f \n'Aprovado'\n",result);
  }else{
    printf("[ERROR] Digite sua notas corretamente de 0 a 10 .\n");
  }


}
