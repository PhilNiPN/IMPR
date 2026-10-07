# Goldbachs Formodning
xDette  er en forkortet udgave af Kurt Nørmaks opgave https://people.cs.aau.dk/%7Enormark/impr-c/functions-par-ex-2-slide-exercise-2.html

Goldbachs formodning udtrykker en påstand om at alle lige heltal større end to er summen af to primtal. Denne formodning er hverken bevist eller modbevist. I denne opgave vil vi beskæftige os med følgende variation af påstanden:

- Ethvert lige heltal større end 6 kan udtrykkes som summen af to ulige primtal.

Skriv et program der beviser denne formodning for alle lige heltal mellem to givne grænser. Eksempelvis for alle lige heltal mellem 7 og 2.000.000. Hvis du er i stand til at finde et modeksempel, er berømmelsen måske lige om hjørnet...

Det foreslås at funktionen is_prime fra en tidligere opgave bruges ved løsningen af denne opgave. Funktionsprototyper er placeret i `lib/include/primes.h` og implementationen i `lib/src/primes.c`. 

Det er for stor en mundfuld at løse dette problem uden opdeling i mindre delproblemer. Det foreslås derfor at I skriver en funktion (`check_goldbach`), som undersøger påstanden for et bestemt lige heltal, n. Denne funktion kan så kaldes for alle lige heltal n mellem f.eks. 7 og 2.000.000. Funktionsprototypen for `check_goldbach` er placeret i `lib/include/goldbach.h` og dens implementation skal placeres i `lib/src/goldbach.c`. 

Hint: Når I skal bevise påstanden for et tal, n, anbefales det at gennemløbe alle mulige summer (n-i) + i, og dermed undersøge om I kan finde et i så både n-i og i er ulige primtal.


## Opgaveplacering
Løsninger til disse opgaver skal placeres i mappen `goldbach`
# Functioner til tidligere opgave
Dette oprindeligt en af Kurt Nørmarks del-opgaver https://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-3.html. 

I lektionen om iterative kontrolstrukturer arbejdede vi med en opgaver, som vi nu vil tage op igen med det formål at indføre abstraktion med funktioner.

I opgave programmeringsopgave 1 side 267 (i Problem Solving and Program Design in C, eighth edition) summerede vi alle heltal fra 1 til n, og vi sammenlignede værdien af denne sum med (n + 1)* n / 2. Skriv nu følgende to funktioner:

- En funktion `sum_iter` med én int parameter n. Funktionen skal addere alle heltal fra 1 til n. Funktionen skal returnere denne sum.
- En funktion `sum_formula` med én int parameter n som indkapsler beregningen af (n + 1)* n / 2, og som returnerer værdien af dette udtryk.

Dine funktionsprototyper skal places i `lib/include/sum.h` og dine funktionsimplementationer skal placers i `lib/src/sum.c`. I denne opgave er der allerede skrevet `main.c` med en main funktion der kalder dine funktioner. Du behøver altså ikke skrive en main-funktion, men du skal naturligvis kompilere både  `sum.c` og `main.c`. Husk at sætte din include path :-) 


## Opgaveplacering
Løsninger til disse opgaver skal placeres i mappen `funktioner_til_gamle_opgaver`
# Beregning af Primtal
Denne opgave giver dig blandt andet træning i programmering af et C program, der anvender en header file (.h fil) og en tilhørende .c fil. I denne opgaven kalder vi en funktion, som allerede er skrevet. I senere opgaver skal du selv i gang med at skrive dine funktioner.

Du skal skrive et program med en main funktion der udskriver de første n primtal. Skriv dit program i en filen der hedder `test-primes.c`. Der ønskes følgende output hvis n er 100:

  prime 1: 2
  prime 2: 3
  prime 3: 5
  prime 4: 7
  prime 5: 11
  prime 6: 13
  prime 7: 17
  prime 8: 19
  prime 9: 23
  prime 10: 29
  ...
  prime 99: 523
  prime 100: 541

I din main funktion skal du - ganske enkelt - gennemløbe så mange positive heltal, som det er nødvendigt, for at finde de første n primtal.

For at få alt dette til at virke skal du lave følgende `lib/include/primes.h` fil:

```
/* Return if i is a prime number */
int is_prime(int i);
```

Endvidere skal du placere følgende programlinier i filen `lib/src/primes.c`, og oversætte denne c fil separat.

```
#include "primes.h"
#include <math.h>
#include <assert.h>

/* Return if i is a prime number. 
   It is assumed as a precondition that the parameter i is non-negative */
int is_prime(int i){
   assert(i >= 0);

   if (i == 1) 
     return 0;
   else if (i == 2) 
     return 1;
   else if (i % 2 == 0)
     return 0;
   else{
     int k, limit;
     limit = (int)(ceil(sqrt(i)));
     for (k = 3; k <= limit; k += 2)
        if (i % k == 0)
           return 0;
     return 1;
   }
}
```

Compilering af programmet: 

```
gcc -o primes.o -c  -I lib/include lib/src/primes.c
gcc -o test-primes -I lib/include  test-primes.c primes.o -lm
```

Læs og forstå også funktionen is_prime.

Inspirationen til denne opgave er fra bogen C by Dissection - anvendt med tilladelse fra forlaget.

## Opgaveplacering
Løsninger til disse opgaver skal placeres i mappen `primes`
# newton
Dette er en af Kurt Nørmarks opgaver https://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-2.html

Bibliotektet math.h indholder som bekendt funktionen sqrt, som beregner kvadratroden af et tal i typen double.

Programmer din egen kvadratrodsfunktion my_sqrt med brug af Newtons metode. Newtons metode gør det muligt for os at finde denne rod. Se f.eks. denne video (lavet Oscar Veliz) om hvordan dette virker. (Se formlen for rækkeudviklingen ved tid 2:23). Bemærk venligst at forfatteren af videoen laver en fejl i den nederste formel ved tid 2:26. Den korrekte formel er xn+1 = 1/2(xn + a/xn). Regn selv efter.

Vær sikker på at du programmerer en funktion, som tager en double som parameter, og som returnerer en double som resultat.

Hvordan vil du håndtere en situation, hvor der overføres et negativt input?

Udskriv en table over a, my_sqrt(a) og sqrt(a) for alle heltal a mellem 0.0 og 25.0, og check dermed om din nye funktion leverer gode resultater.

## Opgaveplacering
Løsninger til disse opgaver skal placeres i mappen `newton`
