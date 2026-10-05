#include "goldbach.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Missing argument");
    return -1;
  }

  int lower_bound = atoi(argv[1]);
  int upper_bound = atoi(argv[2]);

  /* Din kode for at checke conjecturen for alle tal mellem lower_bound og
   * upper_bound */

  do {
    int goldbach = check_goldbach(lower_bound);
    if (goldbach == 1) {
      printf("%d\n", lower_bound);
    }
    lower_bound++;
  } while (lower_bound <= upper_bound);
  
  return 0;
  
}
