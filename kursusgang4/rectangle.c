#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int n = atoi(argv[1]);
    int m = 0;

    for (int i = 0; i < n; ++i) {
        printf("%d", i);
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        //m = i;
        printf("\n");
    }

    return 0;
}