//Ler nome, endereço, sexo, idade, telefone. usando struc

#include<stdio.h>
/*----- DECLARACAO DE STRUCT -----*/
struct dados{
  char nome[50];
  char adress[50];
  char sexo[1];
  int age;
  int phonne;
};
/* vareavel constante */
#define N 2

int main(int argc, char *argv[])
{
//vou fazer o cadastro de 3 clientes
  //Chamando a struck e criando os dados para o cliente.
  struct dados cliente[N];

for (int i = 0; i < N ; ++i) {
   setbuf(stdin,NULL);
   printf("Digite o nome do %i° cliente.\n",i+1);
   fgets(cliente[i].nome,30,stdin);
   
   printf("Digite o endereço.\n");
   fgets(cliente[i].adress,50,stdin);
   
   printf("Qual e seu sexo (M) ou (F).\n");
   scanf("%s",&cliente[i].sexo);

   printf("Qual sua idade.\n");
   scanf("%i",&cliente[i].age);

   printf("Digite seu numero de telefone.\n");
   scanf("%i",&cliente[i].phonne);

}

for(int j =0; j < N; j++){
  printf("\n%.2i° Cliente........= %s",j+1,cliente[j].nome);
  printf("Endereço...........= %s",cliente[j].adress);
  printf("Sexo...............= %s\n",cliente[j].sexo);
  printf("Idade..............= %i\n",cliente[j].age);
  printf("Telephone..........= %i\n",cliente[j].phonne);
}


  return 0;
}
