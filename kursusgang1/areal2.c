#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int length;
    int width;

    length = atoi(argv[1]);
    width = atoi(argv[2]);

    int areal = length * width;

    printf("room is %d m2\n", areal);
}