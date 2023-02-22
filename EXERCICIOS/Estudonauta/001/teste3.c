#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Digite seu nome\n");
    char s[30];
    //scanf("%s",s);
    //fflush(stdin);

    //printf("Resultado scanf normal %s\n\n",s);

    printf("Digite algo\n");
    scanf("%30[^\n]s", s);
    fflush(stdin);
    printf("Resultado scanf APRIMORADO %s\n",s);
}
