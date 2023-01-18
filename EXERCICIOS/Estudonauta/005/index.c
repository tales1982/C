#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    
    printf("NOME: ");
    scanf("%30[^\n]s", nome1);
int    ch;
  char   buf[BUFSIZ];
  while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("SEXO [M/F] : ");
    sexo1 = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
  
    printf("NOTA: ");
    scanf("%f", &nota1);
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    scanf("%30[^\n]s", nome2);
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("NOTA: ");
    scanf("%f", &nota2);
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");   
    printf("NOME: ");
    scanf("%30[^\n]s", nome3);
   while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("NOTA: ");
    scanf("%f", &nota3);
    while ((ch = getchar()) != '\n' && ch != EOF);
  if (fgets(buf, sizeof (buf), stdin))
  {
  }
    printf("LISTAGEM COMPLETA");
    printf("------------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t\t%c\t%.2f\n", nome1, sexo1, nota1);
    printf("%s\t\t%c\t%.2f\n", nome2, sexo2, nota2);
    printf("%s\t\t%c\t%.2f\n", nome3, sexo3, nota3);
    return 0 ;
}