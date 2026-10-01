#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {

    srand(time(NULL));
    int tal = rand() % 20 +1;
    int gaet = 0;

    int antal_forsoeg = 0;

    //printf("Lav et gaet: ");
    //scanf("%d", &gaet);

    do {
        printf("Lav et gaet: ");
        scanf("%d", &gaet);
        if (gaet <= 20 && gaet >=1){
            antal_forsoeg++;     
        } else {
            printf("Du er udenfor range, gæt igen");
        }
    } while (gaet != tal);

    printf("Du gættetde tallet og brugte %d forsøg", antal_forsoeg);
}