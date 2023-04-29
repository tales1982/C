#define multiplicacao(a,b) a * b
#define divisao(a,b) a / b
#define subtracao(a,b) a - b
#define soma(a,b,c,d) a + b +c +d
/*
Quando for necessário escrever a macro em mais linhas, deve-se utilizar barra invertida
( \ ) como operador de continuidade. Apresentamos um exemplo no Box 5.

Repare no uso do ponto-e-vírgula ao final das suas primeiras chamadas de printf e em
sua omissão na última chamada.
*/
#define hello   printf("Hello "); \
                printf("beautiful ");\
                printf("world!\n")
//Tambem posso passar um operador ternario exemplo
#define maior(a,b) a>b ? a : b


main()
{
int entrada1, entrada2, entrada3, entrada4;

entrada1 = multiplicacao(17,5);
printf("resultado da multiplicasao = %d\n",entrada1);

entrada2 = divisao(58,6);
printf("resultado da divisao = %d\n",entrada2);

entrada3 = subtracao(28,6);
printf("resultado da subtracao = %d\n",entrada3);

entrada4 = soma(28,6,45,27);
printf("resultado da soma = %d\n",entrada4);
/* -------------Outros exemplo de macros --------------------*/

hello; //chamada do macro

/* ----------Usando operador ternario --------------------*/
int ternario;
ternario = maior(15,57);
printf("O maior numero é : %d\n",ternario);



/* end main */
} 
