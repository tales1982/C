#include "libft.h" // Inclua o arquivo de cabeçalho onde Cliente está definido

// Implementação da função apagarCliente
void apagarCliente(Cliente clientes[], const char *findClient) {
    int c, j = 0, found = 0;

    while (j < TAM) {
        if (ft_strcmp(findClient, clientes[j].nomeClient) == 0) {
            int opcao = 0;
            printf("Tem certeza que quer realmente apagar (%s) (0 - nao) ou (1 - sim)..?", clientes[j].nomeClient);
            scanf("%d", &opcao);
            while ((c = getchar()) != '\n' && c != EOF);

            if (opcao == 1) {
                ft_strcpy(clientes[j].nomeClient, "");
                printf("Cliente apagado com sucesso.\n");
            } else {
                printf("Operação Anulada..\n");
            }
            
            found = 1;
            break;
        }
        j++;
    }

    if (!found) {
        printf("Cliente não encontrado..!!\n");
    }
}
