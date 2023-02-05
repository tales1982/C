#include <stdio.h>
#include <stdlib.h>/*Biblioteca para usar o abs (abs)-> comverte numeros negativos pra possitivo.*/
#include <time.h>

int main()
{

    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);
    int numerosgrandes = rand();


    numerosgrandes = numerosgrandes % 100;
    int chute = 0 ;
    int tentativas = 1;
    double  pontos = 1000;

    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

    int acertou = (chute == numerosgrandes);
    int maior = chute > numerosgrandes;

    if(acertou) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");

        break;
    }

            else if(maior) {
                printf("Seu chute foi maior que o número secreto\n");
            }

            else {
                printf("Seu chute foi menor que o número secreto\n");
            }

            tentativas++;

            double  pontosperdidos = abs(chute - numerosgrandes) /  2.0;/*usando o abs para converter numeros negativos em possitivos.*/
	    pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de ponto %.1f\n", pontos);

    }
