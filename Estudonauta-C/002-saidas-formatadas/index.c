#include <stdio.h>

char nome[] = "Théo";//*nome tambem fuçiona
int idade = 40;
float peso =99.7;
char sexo = 'M';// usandon uma '' simple declaro 1 caracter usando "" declaro uma strins varios caracteres.


void main(){
    printf("Ola %s, voçe tem %d anos, e é do sexo %c e tem %.2f kilos\n",nome,idade,sexo,peso);
}

