#include <stdio.h>
#include <math.h>

// prototyper
void scan_data();
void do_next_op(char operator, double operand, double *Akkumulatoren);
double run_calculator();

int main(void) {
    double slut_result;
    
    slut_result = run_calculator();

    printf("Final result is: %lf \n", slut_result);

    return 0;

}

void scan_data(char *operator, double *operand){
    printf("Enter operator: ");
    scanf("%s", &*operator);
    
    if (*operator == '#' || *operator == '%' || *operator == '!' || *operator == 'q' ) {
        *operand = 0;
    } else {
        printf("Enter operand: ");
        scanf("%lf", &*operand);
    }
    
}

void do_next_op(char operator, double operand, double *Akkumulatoren) {
    switch(operator) {
        case '+':
            *Akkumulatoren += operand;
            break;
        case '-':
            *Akkumulatoren -= operand;
            break;
        case '*':
            *Akkumulatoren *= operand;
            break;
        case '/':
            if(operand != 0) {
                *Akkumulatoren /= operand;
            } else {
                *Akkumulatoren;
            }
            break;
        case '^':
            *Akkumulatoren = pow(*Akkumulatoren, operand);
            break;
        case '#':
            if(*Akkumulatoren >= 0) {
                *Akkumulatoren = sqrt(*Akkumulatoren);
            } else {
                *Akkumulatoren;
            }
            break;
        case '%':
            *Akkumulatoren = -1 * *Akkumulatoren;
            break;
        case '!':
            if (*Akkumulatoren == 0) {
                *Akkumulatoren;
            } else {
                *Akkumulatoren = 1 / *Akkumulatoren;
            }
            break;
        default:
            break;
    }
}

double run_calculator(void) {
    double Akkumulatoren = 0;
    char operator;
    double operand;

    while(1) {
        scan_data(&operator, &operand);
        
        if (operator == 'q') {
            break;
        }

        do_next_op(operator, operand, &Akkumulatoren);

        printf("Result so far is %lf.\n", Akkumulatoren);

    }

    return Akkumulatoren;
}