#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
    char nome[50];
    char telefone[15];
};

struct Agenda {
    struct Contato contatos[MAX_CONTATOS];
    int num_contatos;
};

void adicionar_contato(struct Agenda *agenda);
void listar_contatos(struct Agenda agenda);
void salvar_agenda(struct Agenda agenda);
void carregar_agenda(struct Agenda *agenda);

int main() {
    struct Agenda agenda;
    agenda.num_contatos = 0;
    carregar_agenda(&agenda);

    int opcao = 0;
    do {
        printf("Escolha uma opcao:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Listar contatos\n");
        printf("0 - Sair\n");
        printf("> ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionar_contato(&agenda);
                salvar_agenda(agenda);
                break;
            case 2:
                listar_contatos(agenda);
                break;
            case 0:
                salvar_agenda(agenda);
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

void adicionar_contato(struct Agenda *agenda) {
    if (agenda->num_contatos < MAX_CONTATOS) {
        printf("Digite o nome do contato: ");
        scanf("%s", agenda->contatos[agenda->num_contatos].nome);

        printf("Digite o telefone do contato: ");
        scanf("%s", agenda->contatos[agenda->num_contatos].telefone);

        agenda->num_contatos++;
    } else {
        printf("A agenda esta cheia.\n");
    }
}

void listar_contatos(struct Agenda agenda) {
    if (agenda.num_contatos > 0) {
        printf("Contatos:\n");
        for (int i = 0; i < agenda.num_contatos; i++) {
            printf("%s - %s\n", agenda.contatos[i].nome, agenda.contatos[i].telefone);
        }
    } else {
        printf("A agenda esta vazia.\n");
    }
}

void salvar_agenda(struct Agenda agenda) {
    FILE *arquivo = fopen("agenda.dat", "wb");
    if (arquivo != NULL) {
        fwrite(&agenda, sizeof(struct Agenda), 1, arquivo);
        fclose(arquivo);
    } else {
        printf("Nao foi possivel salvar a agenda.\n");
    }
}

void carregar_agenda(struct Agenda *agenda) {
    FILE *arquivo = fopen("agenda.dat", "rb");
    if (arquivo != NULL) {
        fread(agenda, sizeof(struct Agenda), 1, arquivo);
        fclose(arquivo);
    }
}


