/* Program 3.10 Exercising bitwise operators */
#include <stdio.h>

int main(void){
    unsigned int original = 0xABC;
    unsigned int result = 0;
    unsigned int mask = 0xF;
    
    printf("\n original= %X", original);
    
    result |= original&mask;
    
    original >>= 4;
    result <<= 4;
    result |= original&mask;
    
    original >>= 4;
    result <<= 4;
    result |= original&mask;
    printf("\t result = %X\n", result);
    
    return 0;
}
