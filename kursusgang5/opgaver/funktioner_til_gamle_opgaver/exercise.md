Dette oprindeligt en af Kurt Nørmarks del-opgaver https://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-3.html. 

I lektionen om iterative kontrolstrukturer arbejdede vi med en opgaver, som vi nu vil tage op igen med det formål at indføre abstraktion med funktioner.

I opgave programmeringsopgave 1 side 267 (i Problem Solving and Program Design in C, eighth edition) summerede vi alle heltal fra 1 til n, og vi sammenlignede værdien af denne sum med (n + 1)* n / 2. Skriv nu følgende to funktioner:

- En funktion `sum_iter` med én int parameter n. Funktionen skal addere alle heltal fra 1 til n. Funktionen skal returnere denne sum.
- En funktion `sum_formula` med én int parameter n som indkapsler beregningen af (n + 1)* n / 2, og som returnerer værdien af dette udtryk.

Dine funktionsprototyper skal places i `lib/include/sum.h` og dine funktionsimplementationer skal placers i `lib/src/sum.c`. I denne opgave er der allerede skrevet `main.c` med en main funktion der kalder dine funktioner. Du behøver altså ikke skrive en main-funktion, men du skal naturligvis kompilere både  `sum.c` og `main.c`. Husk at sætte din include path :-) 

