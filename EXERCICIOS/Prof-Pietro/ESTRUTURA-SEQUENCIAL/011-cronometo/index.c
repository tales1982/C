/**
 * Jeremias possui um cronometro que consegue marcar o tempo apenas em segundos. Sabendo disso, desenvolva um algorítimo que receba o tempo cronometrado, em segundos, e diga quantas horas, minutos e segundos se passaram a parti do tempo cronometrado.
 */
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    int segundos, minutos, horas;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite os seg.\n");
    scanf("%d", &segundos);
    setbuf(stdin, NULL);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;
    printf("%.d Hora e %.d minutos e %d segundos.\n", horas, minutos, segundos);
}