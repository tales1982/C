/**
 * Crie um programa em C que peça ao usuário para entrar com o valor de
tensão em Volts e resistência em Ohms. Haverá um menu, onde o usuário
escolhe qual dado calcular:
1-corrente que circula pelo resistor: I = E/R 
2- potência dissipada no resistor: P = I × V
3- valor da tensão para uma corrente de 100mA: V = I × R
*/


#include<stdio.h>

void tensao();
void menu();
int main(int argc, char *argv[])
{

  tensao();
  return 0;
}


void tensao()
{
//I = corrente
//E = Tensao
//R = Resistençia


  float volts = 0.0 ,amps = 0.0, ohms = 0.0, watts = 0.0;
  int opcao;


  printf("Digite o valor da tensao (volt)..: ");
  scanf("%f",&volts);
  setbuf(stdin,NULL);

  printf("Digite o valor da resistencia (ohm)..: ");
  scanf("%f",&ohms);
  setbuf(stdin,NULL);

  printf("Escolha o que deseja calcular:\n");
  printf("1 - Corrente que circula pelo resistor\n");
  printf("2- Potência dissipada no resistor\n");
  printf("3 - Tensão para uma corrente de 100mA\n");
  scanf("%i",&opcao);
  setbuf(stdin,NULL);

if (opcao == 1){
    amps = volts / ohms;
  printf(" _______________________________________________________________\n");
  printf("|                              ____________                     |\n");
  printf("|                             |            |                    |\n");
  printf("|  Amperage or current I      |   %.2f     |  amperes, amps A   |\n",amps);
  printf("|                             |____________|                    |\n");
  printf("|_______________________________________________________________|\n");
}else if(opcao == 2){
  amps = volts / ohms;
  watts = amps * volts;
  printf(" _______________________________________________________________\n");
  printf("|                              ____________                     |\n");
  printf("|                             |            |                    |\n");
  printf("| Wattage or power P          |   %.2f     |  watts W           |\n",watts);
  printf("|                             |____________|                    |\n");
  printf("|_______________________________________________________________|\n");
}else if(opcao == 3){
  
  volts = 0.1 * ohms;

  printf("DEBUG-volts[%.2f]\n",volts);
  printf("DEBUG-ohms[%.2f]\n",ohms);
  printf(" _______________________________________________________________\n");
  printf("|                              ____________                     |\n");
  printf("|                             |            |                    |\n");
  printf("|  Voltage or volts E OR V    |   %.2f     |    Volts V         |\n",volts);
  printf("|                             |____________|                    |\n");
  printf("|_______________________________________________________________|\n");
  
    }else{
    printf("Opção inválida\n");
    }


}

/*void menu(){
  printf(" _______________________________________________________________\n");
  printf("|                              ____________                     |\n");
  printf("|                             |            |                    |\n");
  printf("| Resistivity or resistance R |   %.2f        ohms              |\n",ohms);
  printf("|                             |____________|                    |\n");
  printf("|_______________________________________________________________|\n");

}*/
