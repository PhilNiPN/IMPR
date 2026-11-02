#include "currency.h"
#include <stdio.h>

int main(int argc, char** argv) {
  
  /* Lav din omregningstabel her --- bruge din omregningsfunktion fra currency.h */
  double money[4];
  printf("resultatet af 4 valutaer fra dollars: \n");
  
  for(int i = 1; i<101; i++) {
    currency_converter(i, money);
    printf("| %d | %lf | %lf | %lf | %lf |\n", i, money[0], money[1], money[2], money[3]);
  }
     
  return 0;
}

// note to self: how to compile:
// gcc -Ilib/include main.c lib/currency.c -o currency
// ./currency
