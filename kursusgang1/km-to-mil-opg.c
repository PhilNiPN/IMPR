#include <stdio.h>

int main (int argc, char** argv) {
  double miles;
  double km;

  printf ("Skriv et antal mil");
  
  /* Indlæs mil fra terminalen med scanf. Gem resultatet i miles */
  scanf("%lf", &miles);

  /* Konverter mil til km. Gem resultatet i km */
  
  const float km_pr_mile = 1.609;

  km = km_pr_mile * miles;

  printf ("Konverteret til mil: %.2lf",km);
  
  return 0;
}