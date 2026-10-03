#include <stdio.h>

int main(int argc, char **argv) {
    
    char spiller_1; 
    char spiller_2;
    int spiller_1_vandt, uafgjort;

    printf("Spiller 1s hånd (r, s, p)");
    scanf(" %c", &spiller_1);

    
    if (spiller_1 == 'r' || spiller_1 == 's' || spiller_1 == 'p'){
        printf("Spiller 2s hånd (r, s, p)");
        scanf(" %c", &spiller_2);
    } else {
        printf("Spiller 1s hånd (r, s, p)");
        scanf(" %c", &spiller_1);
    }

    if (spiller_2 == 'r' || spiller_2 == 's' || spiller_2 == 'p'){
        spiller_1_vandt = ((spiller_1 == 'r' && spiller_2 == 's') ||
                               (spiller_1 == 's' && spiller_2 == 'p') ||
                               (spiller_1 == 'p' && spiller_2 == 'r'));

        uafgjort = ((spiller_1 == 'r' && spiller_2 == 'r') ||
                        (spiller_1 == 's' && spiller_2 == 's') ||
                        (spiller_1 == 'p' && spiller_2 == 'p'));
    } else {
        printf("Spiller 2s hånd (r, s, p)");
        scanf(" %c", &spiller_2);
    }
    

    /*
    if (spiller_1 == 'rock'){
        if (spiller_2 == 'sissors')
         printf("spiller 1 vandt");
    }
    */
/*
    int spiller_1_vandt = ((spiller_1 == 'r' && spiller_2 == 's') ||
                           (spiller_1 == 's' && spiller_2 == 'p') ||
                           (spiller_1 == 'p' && spiller_2 == 'r'));

    int uafgjort = ((spiller_1 == 'r' && spiller_2 == 'r') ||
                    (spiller_1 == 's' && spiller_2 == 's') ||
                    (spiller_1 == 'p' && spiller_2 == 'p'));
*/

    if (spiller_1_vandt == 1){
        printf("spiller 1 vandt\n");
    } else if (uafgjort == 1){
        printf("Uafgjort\n");
    } else {
        printf("Spiller 2 vandt\n");
    }
    
    // printf("vandt spiller 1? %d\nblev det uafgjort? %d\n", spiller_1_vandt, uafgjort);
    return 0;
}