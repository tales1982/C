/*
 Escreva um algoritimo que leia um conjunto de dados contendo a altura e o
 sexo (Masculino e Feminino) de um número indeterminado de pessoas e determine:
 a) A maior e a menor altura do grupo.
 b) A média de altura das mulheres.
 OBS: A dotar uma maneira de especificar o fim dos dados. 
 */

#include <stdio.h>

typedef struct {
    char nome[50];
    float altura;
    char sexo;
} Pessoa;

// Função para adicionar uma pessoa
void adicionarPessoa(Pessoa pessoa[], int *contador) {
    printf("Digite o nome do cliente: ");
    scanf(" %49[^\n]", pessoa[*contador].nome);
    setbuf(stdin, NULL);

    printf("Digite a altura do cliente: ");
    scanf("%f", &pessoa[*contador].altura);
    setbuf(stdin, NULL);

    printf("Digite o sexo do cliente (M/F): ");
    scanf(" %c", &pessoa[*contador].sexo);
    setbuf(stdin, NULL);

    if (pessoa[*contador].sexo == 'f') {
        pessoa[*contador].sexo = 'F';
    } else if (pessoa[*contador].sexo == 'm') {
        pessoa[*contador].sexo = 'M';
    }

    (*contador)++; // Avança para a próxima posição do array
}

// Função para mostrar as pessoas cadastradas
void mostrarPessoas(Pessoa pessoa[], int contador) {
    printf("\nNomes cadastrados:\n");
    for (int j = 0; j < contador; j++) {
        printf(" _______________________________\n");
        printf("|                               |\n");
        printf("|\tNome: %s\t\t|\n", pessoa[j].nome);
        printf("|\tSexo: %c\t\t\t|\n", pessoa[j].sexo);
        printf("|\tAltura: %.2f\t\t|\n", pessoa[j].altura);
        printf("|_______________________________|\n");
    }
}

char *ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++; 
	}
	dest[i] = '\0';
	return(dest);
}

int main() {
	Pessoa	pessoas[10];
	char	nome_max[30];
	char	nome_min[30];
	float	alt_max;
	float	alt_min;
	float	media;
	int	contador;
	int	opcao;
	int	div;
	int	i;

	i = 0;
	div = 0;
	opcao = 10;
	media = 0.0;
	contador = 0;
	alt_max = 0.0;
	alt_min = 999.0;
	
    printf("Cadastro de cliente\n");
    do {
        adicionarPessoa(pessoas, &contador);

        printf("Digite 1 para continuar ou 0 para sair: ");
        scanf("%d", &opcao);
        setbuf(stdin, NULL);
    } while (opcao != 0 && contador < 10); 

    mostrarPessoas(pessoas, contador);
    
	i = 0;
	while(i < contador )
	{
		if(alt_max < pessoas[i].altura)
		{
			alt_max = pessoas[i].altura;
			ft_strcpy(nome_max,pessoas[i].nome);
		}
		if(alt_min > pessoas[i].altura)
		{
			alt_min = pessoas[i].altura;
			ft_strcpy(nome_min,pessoas[i].nome);
		}
		if(pessoas[i].sexo == 'F')
		{
			media += pessoas[i].altura;
			div++;
		}
	i++;
	}
	
	media /= div; 

	printf(" _______________________________\n");
        printf("|                               |\n");
        printf("|\tMaior altura.: %.2f\t|\n", alt_max);
        printf("|\tNome.:%s\t\t|\n",nome_max);
        printf("|                               |\n");
        printf("|===============================|\n");
        printf("|                               |\n");
        printf("|\tMenor altura.: %.2f\t|\n", alt_min);
        printf("|\tNome.:%s\t\t|\n",nome_min);
        printf("|                               |\n");
        printf("|===============================|\n");
        printf("|                               |\n");
        printf("| Altura media feminina %.2f\t|\n",media);
        printf("|_______________________________|\n");
        
	
	return 0;
}
