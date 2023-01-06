#include <stdio.h>
// imprimir o cabeçalho do nosso jogo
int main()
{
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    // variáveis
    int numeroSecreto = 48;
    int chute;
    
    

    for (int i = 1; i <= 10; i++)
    {
        printf("Tentativa %d ",i);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d * \n", chute);

    int acertou = (chute == numeroSecreto);
        if (acertou)
        {
            printf("Parabéns você acertou! \n*");
            printf("Jogue de novo para testar se sua sorte continua com você \n*");
            break;
        }
        else
        {
            int maior = chute > numeroSecreto;
            if (maior)
            {
                printf("Sue chute foi maior que o numero secreto! \n");
            }
            else
            {
                printf("Seu chute foi menor que o numero secreto! \n");
            }
        };
        /* code */
    }
    printf("******Fim de jogo******\n");
}