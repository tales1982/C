/*
 * O custo de um carro novo, ao consumidor final é o preço de fabrica somando ao percentual de lucro do distribuidor,acrescido dos impostos aplicados ao preço de fabrica.
 * Faça um programa que receba o preço de fabrica de um veiculo, o percentual de lucro do distribuidor e o percentual de impostos.
 * Em cada item, crie uma funçao distinta para calcular e retornar:
 * a) O valor correspondente ao lucro do distribuidor;
 * b) O valor correspondente aos imposto;
 * c) O preço final do veiculo.
 */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float prixFabrica = 0.0, percentualLucro = 0.0, percentualImposto = 0.0,precoFinal = 0.0;
	printf("---------- Garagem Auto Lux ----------\n");
	printf("Ola que tal compra um novo carro.\n");
	printf("DIgite o valor que voce  gastaria de pagar para poder compra um carro novo. \nLembre-se que em cima do seu valor vai vim imposto + lucro da agencia.\n");
	printf("Digite o valor que voce pretende gasta na nossa loja.\n");
	scanf("%f",&prixFabrica);
	setbuf(stdin,NULL);
	printf("Agora vamos ajustar nosso percentual de lucro.\n");
	scanf("%f",&percentualLucro);
	setbuf(stdin,NULL);
	printf("Estamos qualse lá, agora vamos ajustar o imposto federal.\n");
	scanf("%f",&percentualImposto);
	setbuf(stdin,NULL);
	percentualLucro = (percentualLucro / 100) * prixFabrica;
	percentualImposto = (percentualImposto / 100) * prixFabrica;
	precoFinal = prixFabrica + percentualLucro + percentualImposto;
	printf("Depois de descontar R$ %.2f reais, para o nosso lucro da empresa.\n",percentualLucro);
	printf("E mais R$ %.2f reais de Imposto.\n",percentualImposto);
	printf("O preco final do seu carro é de %.2f\n",precoFinal);


}
