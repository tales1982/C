#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("Quel âge as-tu\n");
    scanf("%i",&age);
   



    if (age >=0 && age <=6)
{
    printf("Salut bebe !");
}
else if (age >6 && age <=12)
{
    printf("Salut gamin !");
}
else if (age >12 && age <=18)
{
    printf("Salut jeune !");
}
else if (age > 18 && age <=24)
{
    printf("Salut ado !");
}
else if (age > 24 && age <=68)
{
    printf("Salut adulte !");
}
else
{
    printf("Salut papy !");
}

return 0;
}
