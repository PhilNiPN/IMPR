#include "primes.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 1) {
        printf("missing argument");
        return -1;
    }

    int n = atoi(argv[1]);

    if (n < 1) {
        printf("invalid argument");
        return -1;
    }

    int i = 1;
    int j = 1;
    do{
        if (is_prime(i)) {
            printf("prime %d: %d \n", j, i);
            j++;
        }
        i++;
    } while (j <= n); 

    return 0;
}