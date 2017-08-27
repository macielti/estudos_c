/* Exercise 3-1 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    double C, F;
    int OPT;
    
    printf("\n##Convert Temps##\n");
    printf("\t1 for Celcius to Fahrenheit.\n");
    printf("\t2 for Fahrenheit to Celsius.\n");
    printf("Option: ");
    scanf("%d", &OPT);
    
    switch(OPT){
        case 1: 
            printf("\nEnter the Celsius degrees: ");
            scanf("%lf", &C);
            
            F= (C * 1.8) + 32.0;
            
            printf("\nFahrenheit: %lf\n", F);
        break;
        
        case 2:
            printf("\nEnter the Fahrenheit: ");
            scanf("%lf", &F);
            
            C= ((F - 32) * 5) / 9;
            
            printf("\nCelsius: %lf\n", C);
        break;
        
        default: 
            printf("\nInvalid Option!\n");
        break;
    }
    
    return 0;
}
