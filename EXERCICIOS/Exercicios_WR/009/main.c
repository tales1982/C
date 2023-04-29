/*
 Desenvolva uma segunda função que terá a mensagem do Box 9, sempre que o usuário
 entrar com o número 7.
+++++++++++++++++
|               |
| N U M E R O 7 |
|               |
+++++++++++++++++

*/

int main(int argc, char const *argv[])
{
    int a = 7;
    int sair = 0;
do
{
    printf("Adivinhe o numero secreto\nOu digite  '0' pra sair.\n");
    scanf("%i",&a);
    if(a == 7){
        printf("+++++++++++++++++\n");
        printf("|               |\n");
        printf("| N U M E R O 7 |\n");
        printf("|               |\n");
        printf("+++++++++++++++++\n");

    };

} while (a != 0);


    return 0;
}
