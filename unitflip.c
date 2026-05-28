#include <stdio.h>
double ratio,unit;

int main() {
    printf("\nTo convert your unit to your target unit, enter how many \ntarget units equal to 1 of the unit you want to convert from.\n\nFor example:\n   USD to Euro  : 1 USD = 0.86 EUR, enter 0.86\n   KM to Miles  : 1 KM  = 0.62 MI,  enter 0.62\n   KG to Pounds : 1 KG  = 2.20 LBS, enter 2.20\n\n   Otherwise, the result will be incorrect!\n\nEnter any non-numerical key to terminate the program!\n\n=> ");
    for(;;) {
    if (scanf("%lf",&ratio)) {
        printf("=> Now, enter the currency you want to convert from.\n");
        for (;;) {
            printf("=> ");
            if (scanf("%lf",&unit)) {
                double result=unit*ratio;
                int round=(int)result;
                if (round==result) {
                    printf("=> %d UNIT\n",round);
                } else printf("=> %.4lf UNIT\n",result);
            } 
            else {
                printf("Invalid Input! Try again...\n");
                return 0;
            }
        }
        
    } else {printf("Invalid input! Try again...\n"); return 0; }
}
}
