#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float nota1, nota2,media;

    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);
    setbuf(stdin,NULL);
    printf("Digite a segunda nota?\n");
    scanf("%f",&nota2);
    setbuf(stdin,NULL);
    media = (nota1 + nota2) / 2;
    printf("Com as notas %.2f e %.2f, o aluno tem a media %.1f.\n",nota1,nota2,media);
    setbuf(stdin,NULL);
    printf("A sua situation e %s\n",(media >= 7)?"APROVADO.":"REPOVADO.");

    return 0;
}