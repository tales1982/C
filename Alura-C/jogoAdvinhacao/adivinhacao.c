#include <stdio.h>
//imprimir o cabeçalho do nosso jogo
int main(){
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

//variáveis
    int numeroSecreto = 48;
    int chute;
    


    printf("Qual é o seu chute? ");
    scanf("%d",& chute);
    printf("Seu chute foi %d * \n", chute);

int acertou = (chute == numeroSecreto);
printf("teste chute %d",acertou);

    if (acertou){
     printf("Parabéns você acertou! \n*");
     printf("Jogue de novo para testar se sua sorte continua com você *");
    }else{
        if(chute > numeroSecreto){
            printf("Sue chute foi maior que o numero secreto! \n");
            
        }if(chute < numeroSecreto){
            printf("Seu chute foi menor que o numero secreto! \n");
        }
        
        
    };
    

    


}