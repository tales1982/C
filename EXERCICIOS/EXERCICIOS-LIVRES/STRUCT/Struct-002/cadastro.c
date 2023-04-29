
/*-------------- struct -------------------*/
typedef struct{
char nome[50];
float altura;
float peso;
long int cpf;
char sexo;
}Registro;
/*------------- funcao --------------------*/
Registro cadastro(){
Registro pessoa;

 printf("Digite seu nome\n");
 scanf(" %[^\n]",pessoa.nome);
 setbuf(stdin,NULL);

 printf("Digite sua altura.\n");
 scanf("%f",&pessoa.altura);
 setbuf(stdin,NULL);

 printf("Digite seu peso\n");
 scanf("%f",&pessoa.peso);
 setbuf(stdin,NULL);

 printf("Digite seu CPF.\n");
 scanf("%li",&pessoa.cpf);
 setbuf(stdin,NULL);

 printf("Digite seu sexo no formato: (m) ou (f).\n");
 scanf("%c",&pessoa.sexo);
 setbuf(stdin,NULL);

  return pessoa;
}


void imprimirPessoa(Registro pessoa){
  
  printf("Nome.....:%s\n",pessoa.nome);
  printf("Altura.....:%.2f\n",pessoa.altura);
  printf("PESO.....:%.2f\n",pessoa.peso);
  printf("CPF......:%li\n",pessoa.cpf);
  printf("Sexo.....:%c\n",pessoa.sexo);
}

