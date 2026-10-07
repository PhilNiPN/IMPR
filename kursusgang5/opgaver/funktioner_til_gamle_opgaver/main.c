#include "sum.h"

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
  if (argc < 1) {
    printf("Missing arguments");
    return -1;
  }

  int n = atoi (argv[1]);

  int sum = sum_iter(n);
  int sum_f = sum_formula(n);

  printf("%d\n", sum);
  if (sum == sum_f) {
    printf ("De er ens\n");
  }

  else {
    printf ("De er IKKE ens\n");
  }
  
}
