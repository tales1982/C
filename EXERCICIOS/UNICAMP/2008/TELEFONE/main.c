/*
 ======================================= TELEPHONE =====================================
As primeiras redes públicas de telefonia foram construídas pela AT&T; no começo do século XX. 
Elas permitiam que seus assinantes conversassem com a ajuda de uma telefonista, 
que conectava as linhas dos assinantes com um cabo especial. Essas redes evoluíram muito desde então, 
com a ajuda de vários avanços tecnológicos. Hoje em dia, essas redes atendem centenas de milhões de assinantes;
ao invés de falar diretamente com uma telefonista, você pode simplesmente discar o número da pessoa desejada no telefone.
Cada assinante recebe um número de telefone -- por exemplo, 55-98-234-5678. 
Qualquer pessoa que discar esse número consegue então falar com a pessoa do outro lado da linha.
Os hífens no número de telefone são só para facilitar a leitura, e não são discados no telefone.
Para que fique mais fácil de se lembrar de um número de telefone, muitas companhias divulgam números que contém
letras no lugar de dígitos. Para convertê-los de volta para dígitos, a maioria dos telefones tem letras nas suas teclas: 
       
Ao invés de discar uma letra, disca-se a tecla que contém aquela letra. Por exemplo, se você quiser discar o número 0800-FALE-SBC, 
você na realidade discaria 0800-3253-722. A sua avó tem reclamado de problemas de vista -- em particular,
ela não consegue mais enxergar as letrinhas nas teclas do telefone, e por isso queria que você fizesse 
um programa que convertesse as letras em um número de telefone para dígitos.

Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão.
A entrada é composta de apenas uma linha, contendo o número de telefone que deve ser traduzido. 
O número de telefone contém entre 1 e 15 caracteres, que podem ser letras de A a Y e hífens (-).

Saída
Seu programa deve imprimir na saída padrão uma única linha, contendo o número de telefone com as letras
convertidas para dígitos. Hífens no número telefone devem ser mantidos no número de telefone de saída.

Restrições
O número de telefone contém entre 1 e 15 caracteres, que podem ser letras de A a Y e hífens (-).

===============================================
|Exemplos            |                        |
|                    |                        |
|Entrada             |         Saida          |
|PIPOCA              |          747622        |
|---------------------------------------------|
|Entrada             |         Saida          |
|FALE-SBC            |          3253-722      |
|==============================================

*/


#include<stdio.h>

int main(int argc, char *argv[])
{
  char num_tel[16],ponto;

  int numero;

  printf("Digite uma frase para converter para numero de telefone\n");
  fgets(num_tel,15,stdin);

  for(int i = 0;i < num_tel[i];i++){

    if(num_tel[i] == 'a' || num_tel[i] == 'b' || num_tel[i] == 'c'){
      numero = 2;
     printf("%i",numero);
    }else if(num_tel[i] == 'd' || num_tel[i] == 'e' || num_tel[i] == 'f' ){
      numero = 3;
      printf("%i",numero);
    }else if(num_tel[i] == 'g' || num_tel[i]  == 'h' || num_tel[i] == 'i'){
      numero = 4;
     printf("%i",numero);
    }else if(num_tel[i] == 'j' || num_tel[i] == 'k' || num_tel[i] == 'l' ){
      numero = 5;
    printf("%i",numero);
    }else if(num_tel[i] == 'm' || num_tel[i]  == 'n' || num_tel[i] == 'o'){
      numero = 6;
    printf("%i",numero);
    }else if(num_tel[i] == 'p' || num_tel[i] == 'q' || num_tel[i] == 'r' || num_tel[i] == 's' ){
      numero = 7;
    printf("%i",numero);
    }else if(num_tel[i] == 't' || num_tel[i]  == 'u' || num_tel[i] == 'v'){
      numero = 8;
    printf("%i",numero);
    }else if(num_tel[i] == 'w' || num_tel[i] == 'x' || num_tel[i] == 'y' || num_tel[i] == 'z' ){
      numero = 9;
    printf("%i",numero);
    }else if(num_tel[i] == '-'){
      ponto = '-';
      printf("%c",ponto);
    }else if(num_tel[i] == '1'){
      numero = 1;
      printf("%i",numero);
    };
   
  };




  return 0;
}
