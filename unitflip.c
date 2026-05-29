#include <stdio.h>
double ratio,unit;

int main() {
    printf("\nTo convert your unit to your target unit, enter how many \ntarget units equal to 1 of the unit you want to convert from.\n\nFor example:\n   USD to Euro  : 1 USD = 0.86 EUR, enter 0.86\n   KM to Miles  : 1 KM  = 0.62 MI,  enter 0.62\n   KG to Pounds : 1 KG  = 2.20 LBS, enter 2.20\n\n   Otherwise, the result will be incorrect!\n\nEnter any non-numerical key to terminate the program!\n\n=> ");
    if (scanf("%lf",&ratio)>0) {
        printf("=> Now, enter the unit you want to convert from.\n");
        for (;;) {
            printf("=> ");
            if (scanf("%lf",&unit)>0) {
                double result=unit*ratio;
                int rounded=(int)result;
                if (rounded==result) {
                    printf("=> %d UNIT\n",rounded);
                } else printf("=> %.4lf UNIT\n",result);
            } 
            else {
                printf("Invalid Input! Exiting...\n");
                return 0;
            }
        }
        
    } else {printf("Invalid input! Exiting...\n"); return 0; }
}
