/*
 Crie um sistema de agenda telefônica. Para isto, você deve criar a struct Contato, 
 que possui nome e telefone. Neste sistema, existe um menu com as seguintes opções::

-Inserir um contato

-Visualizar todos os contatos

-Alterar nome ou numero do contato

-Sair
*/
/*---------------- BIBLIOTECAS ---------------*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include"agenda.c"

/*--------------- DIRETIVAS ------------------*/


/*-------- DECLARACOES DE FUNCOES ------------*/
void menu();
Contato dados();
void imprimir(Contato agenda);
/*----------------- MAIN ---------------------*/

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, NULL);

    int i, res, num = 0;
    int opcao;
    char continuar;

    Contato agenda[100];

    do {
        menu();
        scanf("%d", &opcao);
        setbuf(stdin, NULL);

        switch (opcao) {
            case 1:
                printf("\nINSERINDO CONTATO\n\n");

                agenda[num] = dados();

                num++;

                printf("\nCONTATO INSERIDO COM SUCESSO\n\n");

                break;
            case 2:
                printf("\nVISUALIZANDO CONTATOS\n\n");
                printf("Total de contatos. [%d]\n",num);
                if(num > 0){
                    for(i = 0; i < num; i++){
                      printf("\n--------------------");
                      printf("\nContato %d°",i);  
                      imprimir(agenda[i]);
                      printf("--------------------\n");

                    }
                } else {
                    printf("Nenhum contato cadastrado.\n");
                }

                break;
            case 3:
                printf("\nALTERANDO CONTATO\n\n");

                if(num > 0){
                    printf("Digite o número do contato que deseja alterar:\n");
                    scanf("%d", &res);
                    setbuf(stdin, NULL);

                    if(res >= 0 && res < num){
                        printf("\nCONTATO SELECIONADO\n\n");

                        printf("Nome atual: %s\n", agenda[res].nome);
                        printf("Digite o novo nome do contato:\n");
                        scanf(" %[^\n]", agenda[res].nome);
                        setbuf(stdin, NULL);

                        printf("Telefone atual: %s\n", agenda[res].telefone);
                        printf("Digite o novo telefone do contato:\n");
                        scanf(" %[^\n]", agenda[res].telefone);
                        setbuf(stdin, NULL);

                        printf("\nCONTATO ALTERADO COM SUCESSO\n\n");
                    } else {
                        printf("\nCONTATO NÃO ENCONTRADO\n\n");
                    }
                } else {
                    printf("Nenhum contato cadastrado.\n");
                }
                break;
            case 4:
           printf("Saindo...\n");
           break;
          default:
          printf("Opção inválida.\n");
}    if(opcao != 4) {
        printf("Deseja continuar? (s/n)\n");
        scanf("%c", &continuar);
        setbuf(stdin, NULL);
    }

} while(opcao != 4 && continuar == 's');

return 0;

}
