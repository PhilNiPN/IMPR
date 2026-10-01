#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = atoi(argv[1]);
    int m = 0;

    for (int i = 0; i < n; ++i) {
        printf("%d", i);
        for (int j = n; j > i+1; --j) {
            printf(" ");
        }
        for (int k = 0; k < i; ++k) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}