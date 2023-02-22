/**
 * Faça um programa que receba o salario de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float salario, aumento;
    puts("Digite seu salario base.:");//o puts ja vem com a quebra de linha.
    scanf("%f",&salario);
    setbuf(stdin,NULL);
    puts("Digite quantos \% você quer de aumento.");
    scanf("%f",&aumento);
    setbuf(stdin,NULL);
    float novoSalario = (aumento / 100)*salario;
    novoSalario = novoSalario + salario;
    printf("O seu novo salario é de %.3f\n",novoSalario);
    return 0;
}