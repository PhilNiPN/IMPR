#include <stdio.h>

int main (int argc, char** argv) {
  char name[255];
  int year;

  printf("What is your name?: ");
  scanf("%s", name);
  printf("Hello World, %s", name);
  
  return 0;
}
