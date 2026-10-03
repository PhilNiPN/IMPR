#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv) {
  int x, y;
  int i;

  if (argc < 3) {
    printf("indtast x og y i format: x y\n");
    scanf("%d %d", &x, &y);
  } else {
    x = atoi(argv[1]);
    y = atoi(argv[2]);
  }

  for (i = x; i < y; i++){
    if (i%2 == 0) {
        printf("%d ", i);
    }
  }
  return 0;
}
