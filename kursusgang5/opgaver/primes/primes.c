#include "primes.h"
#include <math.h>
#include <assert.h>

//return if i is a prime number
// assume that parameter is non-negative

int is_prime(int i){
    assert(i >= 0);

    if (i == 1){
        return 0; 
    } else if (i == 2) {
        return 1;
    } else if (i % 2 == 0) {
        return 0;
    } else {
        int k, limit;
        limit = (int)(ceil(sqrt(i)));
        for(k = 3; k <= limit; k+=2){
            if (i % k == 0) {
                return 0;
            }
        }
        
        return 1;
    }
}
