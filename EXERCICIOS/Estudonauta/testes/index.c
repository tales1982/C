#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char s[10];
    scanf("%s",s);
    fflush(stdin);printf("%s\n",s);

    scanf("%10[^\n]s", s);
}