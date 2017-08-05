/* Program 2.9 More round tables */
#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    
    printf("Input the diameter of a table:\n");
    scanf("%f", &diameter);
    
    radius = diameter / 2.0f;
    circumference = 2.0f * PI * radius;
    area = PI * radius * radius;
    
    printf("\n The circumferenece is %.2f\n", circumference);
    printf("\n The area is %.2f\n", area);
    
    return 0; 
}
