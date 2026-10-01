#include <stdio.h>

int main (int argc, char** argv) {
  int m;
  int n;

  int side1;
  int side2;
  int hypotenuse;
  
  
  /* Indlæs m  og n fra brugeren */
  printf("indtast m og n i formattet: m n\n");
  scanf("%d %d", &m, &n);

  /* evt check om m > n. Hvis ikke skal der udskrives en fejl-besked */
  if (m <= n) {
    printf("Fejl: m skal være større end n\n");
  }
  /* beregn side1, side2 og hypotenuse*/
  side1 = m * m - n * n;
  side2 = 2 * m * n;
  hypotenuse = m * m + n * n;

  /* udskriv resultatet med printf.*/
  printf("side1: %d, side2: %d, hypotenuse: %d\n", side1, side2, hypotenuse);

  return 0;
}
