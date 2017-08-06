/* Program 2.12 Finding the size of type */
#include <stdio.h>

int main(void)
{
    printf("\nVariable of type char occupy %d bytes", sizeof(char));
    printf("\nVariable of type short occupy %d bytes", sizeof(short));
    printf("\nVariable of type int occupy %d bytes", sizeof(int));
    printf("\nVariable of type long occupy %d bytes", sizeof(long));
    printf("\nVariable of type float occupy %d bytes", sizeof(float));
    printf("\nVariable of type double occupy %d byte", sizeof(double));
    printf("\nVariable of type long double occupy %d bytes", sizeof(long double));
    
    return 0;
}
