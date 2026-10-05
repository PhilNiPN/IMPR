#include "primes.h"
#include "goldbach.h"

int check_goldbach(int n) {
  /* Skriv kode for at checke Goldbach conjecture for i */

  if (n % 2 == 0 || n < 6) {
    return 0;
  }

  for (int i = 1, j = n - 1; i < j; i++, j--) {
    if (is_prime(i) && is_prime(j)) {
      return 1;
    }
    
  }

  return 0;

}
