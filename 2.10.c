/* Program 2.10 Round tables again but shorter */
#include <stdio.h>

int main(void)
{
    float diameter = 0.0f;
    float radius = 0.0f;
    const float Pi = 3.14159f;
    
    printf("Input the diameter of the table:\n");
    scanf("%f", &diameter);
    
    radius = diameter / 2.0f; 
    
    printf("The circunference is %.2f", 2 * Pi * radius);
    printf("\nThe area is %.2f", Pi * radius * radius);
    return 0;
}
