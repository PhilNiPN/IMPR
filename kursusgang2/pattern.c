#include <stdio.h>

int main (int argc, char** argv) {
  for (int i = 0; i < 10; ++i) { /* loop henover hver linje der skal udskrives */
    printf ("|");                /* Udskriv den indledende "|" på linjen */
    
    /* Du skal indsætte koden her for at udskrive det antal  *'er der skal være på den i't linje */
    for (int j = 1; j <= i; j++){
        printf("*");
    }
    printf ("\n");               /* Lav et linje-skift */
  }
}
