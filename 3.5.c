/* Program 3.5 Testing letters the easy way */
#include <stdio.h>

int main(void)
{
    char letter = 0;
    
    printf("\nEnter an upper case letter:");
    scanf("%c", &letter);
        
    if((letter >= 'A')&&(letter <= 'Z'))
    {
        letter += 'a'-'A';
        printf("\nYou entered an uppercase %c", letter);
    }
    else
        printf("\nYou did not enter an uppercase letter.");
        
    return 0;
}
