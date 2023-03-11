//Ler nome, sexo e idade. Se for feminino e idade menor que 25. Imprimir o nom,e sexo e idade e a palavra (Voce foi aceita),
//Caso contrario imprima a palafra NAO ACEITA.

#include<stdio.h>
#define N 5
/* declarando struct */

typedef struct
{
  char nome[50];
  char sexo;
  int idade;
}Dados;
//declara sempre uma struct com a primeira letra maiscula. usso recomendado 
//==========================================================================

int main(int argc, char *argv[])
{
 //OBS como eu usei o typedef nao presiso usar o struct para chamar a estrutura
 //basta digita Dados alunos sem ostruct.
  Dados aluno[N];

  for(int i = 0; i < N;i++){
  
  setbuf(stdin,NULL);
    
  printf("Digite seu nome.\n");
  fgets(aluno[i].nome,50,stdin);

  printf("Qual seu sexo (M) ou (F).\n");
  aluno[i].sexo = getchar();

  printf("Qual sua idade.\n");
  scanf("%i",&aluno[i].idade);

  if(aluno[i].sexo == 'f' && aluno[i].idade < 25 ){
      printf("Voce foi Aceito(a) %s",aluno[i].nome);
      printf("SEXO............: %c\n",aluno[i].sexo);
      printf("IDADE...........: %i\n\n",aluno[i].idade);

     }else{
      printf("Voce nao foi aceio(a)%s",aluno[i].nome);
      printf("SEXO............: %c\n",aluno[i].sexo);
      printf("IDADE...........: %i\n\n",aluno[i].idade);

     }
  }

  return 0;
}
