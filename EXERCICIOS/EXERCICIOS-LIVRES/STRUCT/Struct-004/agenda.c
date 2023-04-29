/*------- DECLARACAO DE STRUCT ------------*/
typedef struct{
char nome[50];
char telefone[15];
}Contato;

/*---------------------- MENU ------------------------*/
void menu()
{
printf(" ______________________________________\n");
printf("|                                     |\n");
printf("|                MENU                 |\n");
printf("|_____________________________________|\n");
printf("|                                     |\n");
printf("|      1 --> INSERIR CONTATOS         |\n");
printf("|_____________________________________|\n");
printf("|                                     |\n");
printf("|      2 --> VISUALIZAR CONTATOS      |\n");
printf("|_____________________________________|\n");
printf("|                                     |\n");
printf("|      3 --> ALTERAR CONTATOS         |\n");
printf("|_____________________________________|\n");
printf("|                                     |\n");
printf("|      4 -->      SAIR                |\n");
printf("|_____________________________________|\n");
}

/*---------------- ADCIONAR DADOS --------------------*/
Contato dados(){
  
  Contato agenda;

  printf("Digite o nome do contato.\n");
  scanf(" %[^\n]",agenda.nome);
  setbuf(stdin,NULL);

  printf("Digite o numero de %s.\n",agenda.nome);
  scanf(" %[^\n]",agenda.telefone);
  setbuf(stdin,NULL);
  return agenda;
}

/*----------------- IMPRIMIR DADOS -------------------*/

void imprimir(Contato agenda)
{
  
  printf("\nNOME........:%s\n",agenda.nome);
  printf("TELEFONE....:%s\n",agenda.telefone);

}


