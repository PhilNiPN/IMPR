#include <stdio.h>

int main(int argc, char **argv) {

    double ph;
    printf("Enter pH value: ");
    scanf("%lf", &ph);

    if (ph > 7){
        if (ph < 12) {
            printf("Alkaline\n");
        } else {
            printf("Very Alkaline\n");
        }
    } else if (ph == 7) {
        printf("Neutral\n");
    } else if ( ph > 2) {
        printf("Acidic\n");
    } else {
        printf("Very Acidic\n");
    }

/*
    if (ph <= 2) printf("Very Acidic");   // range = (-inf to 2]
    else if (ph < 7) printf("Acidic");    // range = (2 to 7)
    else if (ph == 7) printf("Neutral");  // range = [7 to 7]
    else if (ph < 12) printf("Alkaline"); // range = (7 to 12)
    else printf("Very Alkaline");         // range = [12 to inf)
*/

    return 0;
}