#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    double pop = 9870;
    int storrelse = atoi(argv[1]); 
    int i = 0;
    do {
        pop = pop * 1.10;
        i++;
    } while (pop <= storrelse);

    printf("population: %lf\n", pop);
    printf("antal år: %d\n", i);
    
    return 0;
}