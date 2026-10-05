xDette  er en forkortet udgave af Kurt Nørmaks opgave https://people.cs.aau.dk/%7Enormark/impr-c/functions-par-ex-2-slide-exercise-2.html

Goldbachs formodning udtrykker en påstand om at alle lige heltal større end to er summen af to primtal. Denne formodning er hverken bevist eller modbevist. I denne opgave vil vi beskæftige os med følgende variation af påstanden:

- Ethvert lige heltal større end 6 kan udtrykkes som summen af to ulige primtal.

Skriv et program der beviser denne formodning for alle lige heltal mellem to givne grænser. Eksempelvis for alle lige heltal mellem 7 og 2.000.000. Hvis du er i stand til at finde et modeksempel, er berømmelsen måske lige om hjørnet...

Det foreslås at funktionen is_prime fra en tidligere opgave bruges ved løsningen af denne opgave. Funktionsprototyper er placeret i `lib/include/primes.h` og implementationen i `lib/src/primes.c`. 

Det er for stor en mundfuld at løse dette problem uden opdeling i mindre delproblemer. Det foreslås derfor at I skriver en funktion (`check_goldbach`), som undersøger påstanden for et bestemt lige heltal, n. Denne funktion kan så kaldes for alle lige heltal n mellem f.eks. 7 og 2.000.000. Funktionsprototypen for `check_goldbach` er placeret i `lib/include/goldbach.h` og dens implementation skal placeres i `lib/src/goldbach.c`. 

Hint: Når I skal bevise påstanden for et tal, n, anbefales det at gennemløbe alle mulige summer (n-i) + i, og dermed undersøge om I kan finde et i så både n-i og i er ulige primtal.

