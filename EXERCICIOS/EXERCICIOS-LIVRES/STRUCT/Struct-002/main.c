/*
 Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas. 
 Para isso, você deve criar uma struct Pessoa com esses dados.

1-Cadastre 5 pessoas com as informações necessárias.

2-Peça para o usuário informar um cpf. Se o cpf existir, imprima o nome e o IMC da pessoa encontrada. 

*/
/* Bibliotecas */
#include<stdio.h>
#include<string.h>
#include"cadastro.c"
/*-----------------Diretivas -------------------------- */
//#define N 5

/*--------------Declaracao da strutura da funcao --------------------*/
Registro cadastro();
void imprimirPessoa(Registro pessoa);
/*-------------------------  MAIN -------------------------------*/
int main(int argc, char *argv[])
{
int num = 0, i;

  printf("Digite quantas pessoas voce quer cadastrar.\n");
  scanf("%i",&num);

 Registro pessoa[num];

  for (i = 0; i < num; ++i) {
     
       pessoa[i] = cadastro();
      }
for (i = 0; i < num; i++) {
  
 printf("\n");
 imprimirPessoa(pessoa[i]);
 
 if(pessoa[i].cpf > 0){
  float res = pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);
 
 if(res < 18.5){
   printf("Seu IMC é de %.2f\nCLASSIFICAÇÃO = MAGREZA\n\n",res);
 }else if(res >= 18.5 && res < 25){
   printf("Seu IMC é de %.2f\nCLASSIFICAÇÃO = NORMAL\n\n",res);
 }else if(res >= 25 && res < 30){
   printf("Seu IMC é de %.2f\nCLASSIFICAÇÃO = SOBREPESO\n\n",res);
 }else if(res >= 30 && res < 40){
   printf("Seu IMC é de %.2f\nCLASSIFICAÇÃO = OBSIDADE\n\n",res);
 }else{
   printf("Seu IMC é de %.2f\nCLASSIFICAÇÃO = OBSIDADE GRAVE\n\n",res);
 };

 };
}

  return 0;
  
}
