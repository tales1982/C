#include <stdio.h>

int main()
{
    int v[3][4] = {0,0,0,0};//[3] tres colunas e [4] linhas {0}todos os valores iniciados em 0
    setbuf(stdin,NULL);
    
    v[2][2] = 45;
    v[2][3] = 47;
    v[3][4] = 49;

   
        printf("----------------------------\n");
        printf("|  %i  |  %i  | %i  | %i  | %i  |\n",v[0][0],v[0][1],v[0][2],v[0][3],v[0][4]);
        printf("----------------------------\n");
        printf("|  %i  |  %i  | %i  | %i  | %i  |\n",v[1][0],v[1][1],v[1][2],v[1][3],v[1][4]);
        printf("----------------------------\n");
        printf("|  %i  |  %i  | %i | %i  | %i |\n",v[2][0],v[2][1],v[2][2],v[2][3],v[2][4]);
        printf("----------------------------\n");
        printf("|  %i  |  %i  | %i  | %i  | %i |\n",v[3][0],v[3][1],v[3][0],v[3][0],v[3][4]);
        printf("----------------------------\n");
  

    return 0;
}
