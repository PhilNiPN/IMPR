#include <stdio.h>
#include <stdlib.h>

int checker(int n, int c) {
    while (n >= 1) {
        if (n % 10 == c) {
            return 1;
        }
        n = n / 10;
    } 
    return 0;
}

int main(int argc, char **argv){
    int n, c;
    /*
    if (argc < 2) {
        printf("Missing argument");
        return -1;
    }

    int n = atoi(argv[1]);
    int c = atoi(argv[2]);
    */
    printf("intast et n og et c med denne struktur x y: \n");
    scanf("%d %d", &n, &c);

    if (c < 0 || c > 9 || n < 1){
        printf("error - ugyldig inputs");
        return -1;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + checker(i, c);
    }

    printf("%d\n", sum);
    return 0;
}
