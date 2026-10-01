#include <stdio.h>

int main(){
    double length;
    double width;

    printf("Length of your room: ");
    scanf("%lf", &length);

    printf("Width of your room: ");
    scanf("%lf", &width);

    float area = length * width;

    printf("Your room is %lf m2\n", area);
}