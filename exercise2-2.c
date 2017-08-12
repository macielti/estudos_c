#include <stdio.h>

int main(void)
{
    float lenght, width, lenght_inches, width_inches;
    
    printf("\nType the length of  a room in feet: ");
    scanf("%f", &lenght);    
    printf("\n... and then in inches: ");
    scanf("%f", &lenght_inches);
    
    printf("\nType the width of a room in feet: ");
    scanf("%f", &width);
    printf("\n... and then in inches: ");
    scanf("%f", &width_inches);
    
    printf("\nThe area of the room in square yards: %.2f", (width_inches * 0.0833) * (lenght_inches * 0.0833));
    
    return 0;
}
