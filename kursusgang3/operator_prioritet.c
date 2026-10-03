#include <stdio.h>

int main(void){

  int a = 1, b = 2, c = 3;
  double x = 1.0;

  int res1, res2, res3, res4;

  res1 = (a > b) && (c < x); // 0
  res2 = (a < ! (b)) || (! (! a)); // 1
  res3 = (a + b) < (! (c + c)); // 0
  res4 = (a - x) || ((b * c) && (b / a)); // 1

  /*
  res1 = a > b && c < x; // 0
  res2 = a < ! b || ! ! a; // 1
  res3 = a + b < ! c + c; // 0
  res4 = a - x || b * c && b / a; // 1
  */

  printf("res1 = %d, res2 = %d, res3 = %d,  res4 = %d \n", 
     res1, res2, res3, res4);

  return 0;
}