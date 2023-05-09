/*
   Escreva um programa em C que solicite a idade do indivíduo e se ele tem
   carro (s ou S) ou não tem (n ou N).
   Os indivíduos sem carro e com idade entre 18 e 50 anos receberão 500 Reais
   de auxílio transporte. Nos demais casos, o auxílio será de 200 Reais.
   Indivíduo entre 18 e 50 anos sem carro recebe 500 Reais.
   Indivíduo com qualquer idade com carro recebe 200 Reais.
   Indivíduo com menos de 18 e mais de 50 anos recebem 200 Reais.
   */

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  int tam;
  int idade;
  char Sim_Nao;
  char nome[10];


  printf("Digite seu nome..: ");
  scanf(" %[^\n]",nome);
  setbuf(stdin,NULL);


  printf("%s digite sua idade...: ",nome);
  scanf("%i",&idade);
  setbuf(stdin,NULL);


  printf("%s você tem carro [s/n]\n",nome);
  Sim_Nao = getchar();
  setbuf(stdin,NULL);

  if(Sim_Nao == 'n' || Sim_Nao == 'N' ){
    if(idade >= 18 && idade <= 50){
      printf("%s voce reçebera um vale transporte de R$ 500 Reais.\n",nome);
    }else{
      printf("%s voce reçebera um vale transporte de R$ 200 Reais.\n",nome);
    }
  }else{
    printf("%s voce reçebera um vale transporte de R$ 200 Reais.\n",nome);
  }

  return 0;
}
