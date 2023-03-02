/*Exercício proposto: desenvolva uma função em C para imprimir na tela a       **mensagem do
**Box 8 quando a entrada do usuário for o número 3.
+++++++++++++++++
|               |
| N U M E R O 3 |
|               |  
+++++++++++++++++
*/

/*---------- Bibliotecas -----------------------*/
#include <stdio.h>
#include <locale.h>
/*---------- Protótipo das função --------------*/
void box(void);

/*---------- Função Principal ------------------*/
int main(void)
{
setlocale(LC_ALL,"Portuguese");
printf("Digite um numero você tem 10 tentativas pra acerta o numero secreto.\n");
box();

}


/*---------- Desenvolvimento das Funções -------*/
void box(void)
{
    int i, n1;

   for (i = 0; i<10;i++){
    scanf("%d",&n1);
    if(n1 == 3){
        printf("BRAVO voce acertou o numero secreto.\n");
        printf("N U M E R O 3\n");
        break;
    }
    printf("Errou essa foi sua  %d° tentativa.\n",i+1);
    }
    
}

/*---------- End Linhas -------------------------*/