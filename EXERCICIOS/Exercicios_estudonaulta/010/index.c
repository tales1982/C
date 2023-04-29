#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float nota1, nota2,nota3, media;
    char nome[15];
    printf("------>>>>>> CALCULANDO A MEDIA <<<<<<------\n");
    printf("Ola como voce se chama?\n");
    scanf("%14[^\n]s",nome);
    fflush(stdin);
    printf("Digite sua 1° nota\n");
    scanf("%f",&nota1);
    fflush(stdin);
    printf("Digite sua 2° nota\n");
    scanf("%f",&nota2);
    fflush(stdin);
    printf("Digite sua 3° nota\n");
    scanf("%f",&nota3);
    media = (nota1 + nota2 + nota3) / 3;

if(media > 7){
    printf("Ola %s, sua media foi %.2f.\n Parabens voce passou!\n",nome,media); 
}else if (media >= 5 && media <=6.9)
{
    printf("Ola %s, sua media foi de %.2f.\nVoce esta de Recuperaçao!!\n",nome,media);
}else{
    printf("Ola %s, sua media foi de %.2f.\nVoce esta Reprovado!!\n",nome,media);
}

    
}