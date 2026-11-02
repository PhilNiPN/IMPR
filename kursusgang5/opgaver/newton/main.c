
#include "mysqrt.h"
#include <math.h>
#include <stdio.h>

int main(int argc, char** argv) {

  /* Placer dit loop der kalder my_sqrt og sqrt og udskriver ønskede tabel */
  
  for(int i = 0; i <= 25; i++) {
    double my_sq = my_sqrt(i); 
    double norm_sq = sqrt(i);
    printf("i = %d, my_sqrt(i) = %lf, sqrt(i) = %lf\n", i, my_sq, norm_sq);
  }

  return 0;
}
