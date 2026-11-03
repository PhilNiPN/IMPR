#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *flertal(char *ord);
char *strconcat (char *ord, char *str1);

int main (void) {
    char *ord[] = {"chair", "dairy", "boss", "circus", "fly", "dog", "church", "clue", "dish"};
    // char str[] = "ies";
    int len = sizeof(ord) / sizeof(ord[0]);

    for (int i = 0; i < len; i++) {
        char *ord3 = flertal(ord[i]);
        printf("%s\n", ord3);
        free(ord3);
    }
    //char *ord3 = flertal(ord);
    //strconcat(ord, str);
    //printf("%s \n", ord3);
    //free(ord3);

    return 0;
}

char *flertal (char *ord) {
    int ord_len = strlen(ord);
    
    if (ord[ord_len - 1] == 'y') {
        //printf("yes\n");
        char copy_ord[ord_len+3];
        char str[] = "ies";
        strcpy(copy_ord, ord);
        copy_ord[ord_len - 1] = '\0';
        return strconcat(copy_ord, str);
        
        //printf("%s\n", ord); 
    } else if (ord[ord_len - 1] == 's' ||
               ord[ord_len - 2] == 'c' && ord[ord_len - 1] == 'h' ||
               ord[ord_len - 2] == 's' && ord[ord_len - 1] == 'h') {
        
        return strconcat(ord, "es");
    }

    return strconcat(ord, "s");
}

char *strconcat (char *ord1, char *ord2) {
    int ord_len = strlen(ord1) + strlen(ord2) + 1;
    char *str = malloc(ord_len * sizeof(char));

    strcpy(str, ord1);
    strcat(str, ord2);
    // printf("%d \n", ord_len);
    // printf("%s \n", str);
    // free (str);

    return str;
}