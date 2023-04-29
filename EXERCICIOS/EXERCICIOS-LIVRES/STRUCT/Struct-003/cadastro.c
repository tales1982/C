/*------------ Struct -------------*/
typedef struct{
  char nome[50];
  char cpf[15];
  float saldo;
}Dados;

/*-------------- FUNCOES -----------------*/

/*---------------- MENU ------------------*/
void menu(){
  printf(" _________________________________\n");
  printf("|                                 |\n");
  printf("|---------- BANCO LUX ------------|\n");
  printf("|------ Cadastro de Cliente ------|\n");
  printf("|_________________________________|\n");
  printf("|                                 |\n");
  printf("|       Digite 0 para Sair.       |\n");
  printf("|_________________________________|\n");
  printf("|                                 |\n");
  printf("|   Digite 1 Para Novo Cliente    |\n");
  printf("|_________________________________|\n");
  printf("|                                 |\n");
  printf("|   Digite 2 Para Consulta Saldo  |\n");
  printf("|_________________________________|\n");
  printf("|                                 |\n");
  printf("|     Digite 3 Para Depositar     |\n");
  printf("|_________________________________|\n");
  printf("|                                 |\n");
  printf("|       Digite 4 Para Retirar     |\n");
  printf("|_________________________________|\n");
}

/*---------------CADASTRO-----------------*/
Dados cadastro(){
  
  Dados pessoa;


  printf("\nDigite seu nome\n");
  scanf(" %[^\n]",pessoa.nome);
  setbuf(stdin,NULL);

  printf("Digite o CPF.\n");
  scanf(" %[^\n]",pessoa.cpf);
  setbuf(stdin,NULL);

  printf("Deposite um valor para ativar sua conta.\n");
  scanf("%f",&pessoa.saldo);
  setbuf(stdin,NULL);

  return pessoa;
}

/*------------ Inprimir Dados ---------------*/

void imprimirDados(Dados pessoa)
{


printf("%s seu saldo é..............:%.2f\n",pessoa.nome,pessoa.saldo);
//printf("Seu CPF...............:%i\n",pessoa.cpf);
//printf("Seu Saldo é de........:%.2f\n",pessoa.saldo);


}
