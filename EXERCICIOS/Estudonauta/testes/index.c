#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char s[30];
    char sex;
    // scanf("%s",s);
    // fflush(stdin);

    // printf("Resultado scanf normal %s\n\n",s);

    /*printf("Digite algo\n");
    scanf("%30[^\n]s", s);//scanf para ler string com espaços e nao da quebra de linha.
    fflush(stdin);
    printf("Resultado scanf APRIMORADO\n %s\n", s);

*/
    printf("Testando fgets! Digite algo\n");
    //fgets(s2,30,stdin);//entrada de  uma string com spaço mais quebra linha.
    scanf("%30[^\n]s",s);
    fflush(stdin);
    printf("SEXO :");
    scanf("%c",&sex);
    printf("RESULTADO: %ssexo %c\n",s,sex);

}
