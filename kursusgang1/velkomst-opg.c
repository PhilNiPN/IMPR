#include <stdio.h>

int main(int argc, char** argv) {
    char name[255];
    int year;

    printf("Name, Yours: ");
    scanf("%s", name);

    printf("Born, When?: ");
    scanf("%d", &year);
    
    int age = 2026 - year;

    printf("Hello world!\n This is %s!\n", name);
    printf("Age: %d", age);

    return 0;
}