#include <stdio.h>

int main(int argc, char **argv) {
    int m, n, k;
    int sum = 0;

    printf("indtast lave interval: ");
    scanf("%d", &m);
    printf("indtast høje interval: ");
    scanf("%d", &n);
    printf("indtast hvad det skal gå op i: ");
    scanf("%d", &k);

    for (int i = m; i <= n; i++) {
        if (i % k == 0) {
            sum = sum + i;
            printf("tal: %d\n", i);
        }
    }
    printf("sum: %d\n", sum);

    return 0;
}