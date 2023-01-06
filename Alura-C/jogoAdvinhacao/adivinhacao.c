#include <stdio.h>
// imprimir o cabeçalho do nosso jogo

#define NUMERO_DE_TENTATIVAS 5//Declaracao de (const) por padrao sempre tudo maisculo

int main()
{
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    // variáveis
    int numeroSecreto = 48;
    int chute;
    
    

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
        printf("Tentativa %d de  %d ",i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d * \n", chute);

    
 

    int maior = chute > numeroSecreto;
    int acertou = chute == numeroSecreto;
    int menor = chute < numeroSecreto;

if (chute < 0){
        printf("Voçe nao pode digitar numeros negativos \n");
        i--;
        continue;
    }


        if (acertou )
        {
            printf("Parabéns você acertou! \n*");
            printf("Jogue de novo para testar se sua sorte continua com você \n*");
            break;
        }
        else if (maior)
            {
                printf("Sue chute foi maior que o numero secreto! \n");
            }
            else
            {
                printf("Seu chute foi menor que o numero secreto! \n");
            }
        /* code */
    }
    printf("******Fim de jogo******\n");
}