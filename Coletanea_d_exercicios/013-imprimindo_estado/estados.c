// Lista com todos os estados brasileiros e suas siglas.
#include<stdio.h>

void estados(void)
{
  char estados[27][3] = { {"ac"},{"al"},{"ap"},{"am"},{"ba"},{"ce"},{"df"},{"es"},{"go"},{"ma"},{"mt"},{"ms"},{"mg"},{"pa"},{"pb"},{"pr"},{"pe"},{"pi"},{"rj"},{"rn"},{"rs"},{"ro"},{"rr"},{"sc"},{"sp"},{"se"},{"to"}};

for (int i = 0; i < 27; i++) {
  printf("%s\n",estados[i]);
}


}
