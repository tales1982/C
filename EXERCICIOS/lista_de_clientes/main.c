/*
## Exercício 1: Lista Encadeada
Implemente uma lista encadeada que suporte as operações de inserção, deleção e busca de um elemento.
*/
#include "libft.h"

int main()
{
    Cliente clientes[TAM];
    char *client;
    char *findClient;
    int menu;
    int i;
    int j;
    int conf;
    int seachClient;

    client = (char *)malloc(101 * sizeof(char)); // Correto para alocar memória para um inteiro.
    if (client == NULL)
    {
        printf("Erro a alocar a memoria!!");
    }

    // Exemplo de alocação de memória para uma string que pode armazenar 100 caracteres.
    findClient = (char *)malloc(101 * sizeof(char)); // 100 caracteres + '\0'
    if (findClient == NULL)
    {
        printf("Erro a alocar a memoria!!");
    }

    i = 0;
    j = 0;

    ft_print_menu();
    scanf("%i", &menu);
    while (menu != 4)
    {

        if (menu == 1)
        {
            // Cadastro cliente;
            printf("Digite o nome do cliente a ser cadastrado..\n");
            scanf(" %[^\n]", client);
            printf("Confime o cadastro de %s digite (1) pra confirma ou (0) pra anular..:", client);

            scanf("%d", &conf);
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;

            if (conf == 1)
            {
                ft_strcpy(clientes[i].nomeClient, client);
                printf("%s foi adcionado a lista de clinets obigado\n\n", client);
            }
            else
                printf("Cadastro anulado\n\n");
            i++;
        }
        else if (menu == 2)
        {
            /******* Apagar cliente. ********/
            printf("Digite o nome do cliente que deseja apagar..:");
            scanf(" %[^\n]", findClient);
            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            apagarCliente(clientes, findClient);
    
        }
        else if(menu == 3)
            imprimirClientes(clientes, i); 
        else 
            printf("Digite um valor valido de 1 a 4.\n");
        
        ft_print_menu();
        scanf("%i", &menu);
        printf("\nPrograma finalizado.......\n");
        printf("\n");
        
    }


    free(client);
    return 0;
}
