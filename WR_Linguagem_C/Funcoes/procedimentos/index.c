
/*---- Biblioteca ----*/
#include <stdio.h>
#include <locale.h>


/*----- Protótipo das funções -----*/
void linhas(void);


/*----- Função Principal -----*/
int main(void){
    setlocale(stdin,NULL);
linhas();
printf("\nMenu principal do programa\n");
linhas();
printf("\nMenu tarafas a executar\n");
linhas();
printf("\nMenu Help\n");
linhas();

}

/*----- Desenvolvimento das funções -----*/
void linhas()
{
    int i, j;
    for(i=0;i<2;i++){
        
        for (j = 0; j < 30; j++)
        {
            putchar('#');
            
        }
        putchar('\n');
    }
}
/*End code*/