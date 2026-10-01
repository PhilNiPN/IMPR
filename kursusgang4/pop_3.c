#include <stdio.h>

int main(int argc, char **argv) {
    double pop = 9870;
    for (int i = 1; i <= 3; i++) {
        pop = pop * 1.10;
    }

    printf("population: %lf\n", pop);
    
    return 0;
}