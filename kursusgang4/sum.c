#include <stdio.h>

int main(int argc, char **argv) {
    int n;
    int sum = 0;

    printf("skriv et n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    printf("sum: %d\n", sum);

    int formel = n * (n+1) / 2; 
    printf("formel sum: %d\n", formel);

    return 0;
} 