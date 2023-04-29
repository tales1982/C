/*
Calcule e apresente a quantidade de dias ,e horas , e minutos e segundos que esta pessoa vivi desde seu nascimento.
Pensando na logica :
1- Oque temos que ler 
    --> ano de Nascimento
2- Oque temos que calcular?
    --> idade = (&entrada) --> ano de nascimento.
    --> qtdDias = idade * 365
    --> qtdHoras = qtdDias * 24
    --> qtdMinutos = qtdHoras * 60
    --> qtdSegundos = qtdMinutos * 60
3- Oque temos que mostra?
    --> idade,qqtDias,qtdHoras,qtdMinutos, qtdSegundos.
*/
#include<stdio.h>
#include<time.h>


int main(void)
{
    int anoNascimento,idade,dias,horas,minutos,segundos;


    time_t mytime;
    mytime = time(NULL);

    struct tm tm = *localtime(&mytime);
  
    printf("Digite seu ano de nascimento.\n");
    scanf("%i",&anoNascimento);
    setbuf(stdin,NULL);
    idade = (tm.tm_year + 1900)-anoNascimento;
    printf("Idade = %d\n",idade);
    dias = idade * 365;
    printf("Dias = %i\n",dias);
    horas = dias * 24;
    printf("Horas = %i\n",horas);
    minutos = horas * 60;
    printf("Minutos = %i\n",minutos);
    segundos = minutos *60;
    printf("Segundos = %i\n",segundos);






    return 0;

}