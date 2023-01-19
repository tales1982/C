#include <stdio.h>
#include <locale.h>

int main(){
    float salario, almento;
    puts("Digite seu salario base:");//o puts ja vem com a quebra de linha.
    scanf("%f",&salario);
    setbuf(stdin,NULL);
    puts("Digite quantos \% voçe quer de almento.");
    scanf("%f",&almento);
    setbuf(stdin,NULL);
    float novoSalario = (almento / 100)*salario;
    novoSalario = novoSalario + salario;
    printf("O seu novo salario é de %.3f\n",novoSalario);
    return 0;
}