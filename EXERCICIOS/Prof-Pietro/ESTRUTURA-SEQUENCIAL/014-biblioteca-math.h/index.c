/*Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguse");

float n1=0.0, n2=0.0,res;
printf("Digite um numero possitivo.\n");
scanf("%f",&n1);
setbuf(stdin,NULL);
printf("Digite outro numero possitivo.\n");
scanf("%f",&n2);
setbuf(stdin,NULL);
res = pow(n1,n2);
printf("O numero %.0f, elevado a %.0f, é igual a :%.2f\n",n1,n2,res);
}
/*
#include <stdio.h>
#include <math.h>

int main()
{
  double x = 8.62;

  printf("Biblioteca math.h \n\n");

  printf("Valor aproximado para baixo de %f é %f\n",x, floor(x) );
  printf("Valor aproximado para cima de %f é %f\n", x, ceil(x));

  printf("Raiz quadrada de %f é %f\n",x,sqrt(x));
  printf("%.2lf ao quadrado é %.2f \n",x,pow(x,2));

  printf("Valor de  seno de %.2f = %.2f \n",x,sin(x));
  printf("Valor de  cosseno de %.2f = %.2f \n",x,cos(x));
  printf("Valor de  tangente de %.2f = %.2f \n",x,tan(x));

  printf("Logaritmo natural de %.2f = %.2f \n",x,log(x));
  printf("Logaritmo de %.2f  na base 10 = %.2f \n",x,log10(x));
  printf("Exponencial de %.2f = %e \n",x,exp(x));

  printf("O valor aproximado de pi é %e \n",M_PI);
  printf("O valor aproximado de pi/2 é %e \n",M_PI_2);

  printf("O módulo de -3.2 é %f \n",fabs(-3.2));
  printf("O módulo de -3 é %d \n",abs(-3));
}*/
