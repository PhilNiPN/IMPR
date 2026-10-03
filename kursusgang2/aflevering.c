#include <stdio.h>

int main (int argc, char** argv) {
  /* Skriv din løsning her */

  int input_sekunder;
  int minut_i_sek;
  int time_i_sek;
  int dag_i_sek;
  int uge_i_sek;
  int rest_min;

  minut_i_sek = 60;
  time_i_sek = minut_i_sek * 60;
  dag_i_sek = time_i_sek * 24;
  uge_i_sek = dag_i_sek * 7;


  printf("skriv et helt antal af sekunder som du ønsker konverteret:");
  scanf("%d", &input_sekunder);

  int total_uger = input_sekunder /  uge_i_sek;
  rest_min = input_sekunder % uge_i_sek;
  int total_dage = rest_min / dag_i_sek;
  rest_min = input_sekunder % dag_i_sek;
  int total_timer = rest_min / time_i_sek;
  rest_min = input_sekunder % time_i_sek;
  int total_min = rest_min / minut_i_sek;
  rest_min = input_sekunder % minut_i_sek;

  printf("uger: %d, dage: %d, timer: %d, minutter: %d, sekunder: %d\n", total_uger, total_dage, total_timer, total_min, rest_min);
  return 0;
}
