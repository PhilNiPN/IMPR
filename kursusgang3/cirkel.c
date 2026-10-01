#include <stdio.h>
#include <math.h>

const double  DELTA =  1e-3;

int main(int argc, char **argv) {
  double r, x , y;

  printf("INDTAST radius: \n");
  scanf(" %lf", &r);

  printf("INDTASK x: \n");
  scanf(" %lf", &x);

  printf("INDTAST y: \n");
  scanf(" %lf", &y);

  double x_dist = x - 0;
  double y_dist = y - 0;
  double r_squared = pow(r ,2);
  double distance = pow(x_dist, 2) + pow(y_dist, 2);
  
  if (fabs(distance - r_squared) < DELTA) {
    printf("Punktet (%lf, %lf) er på cirklen\n", x, y);
  } else if (distance <= r_squared) {
    printf("Punktet (%lf, %lf) er inde i cirklen\n", x, y);
  } else {
    printf("Punktet (%lf, %lf) er uden for cirklen\n", x, y);
  }
  
  return 0;
}
