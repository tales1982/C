/*
Os parâmetros são a forma de entrada de dados nas funções e procedimentos em C e
podemos declarar quantos parâmetros forem necessários. Os parâmetros consistem
basicamente em variáveis locais, que existirão apenas no escopo da função específica e deverão
ser inicializados na chamada da função. Todos os tipos de dados aprendidos até aqui podem
utilizados na declaração dos parâmetros, que estarão entre os parênteses do cabeçalho da
função.
*/

/*-------------------------- Biblioteca --------------------------*/
#include <stdio.h>
#include <locale.h>


/*----------------------- Protótipo das funções ------------------*/
void func2(int a);
/*------------------------ Função Principal ------------------------*/

int main()
{
func2(20);
}

/*------------------- Desenvolvimento das funções -------------------*/
void func2(int a)
{
printf("a= %d\n",a);
}/* end func2 */

/*End code*/
