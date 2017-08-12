#include <stdio.h> // preprocessor directives to able the printf and scanf

int main(void) // the function main
{              // the beginning of the function main 
    double n_pol, yards_per_inches = 0.0278, foots_per_inches = 0.083333;
    
    printf("Type a distance in inches: ");  
    scanf("%lf", &n_pol);
    
    printf("The distance in yards: %lf", yards_per_inches * n_pol);
    printf("The distance in foots: %lf", foots_per_inches * n_pol);
    printf("The distance in inches: %.4lf", n_pol);
    
    return 0;
}
