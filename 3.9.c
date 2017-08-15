/* Program 3.9 Testing cases */
#include <stdio.h>

int main(void)
{
    char answer = 0;
    
    printf("Enter Y or N: ");
    scanf("%c", &answer);
    
    switch(answer)
    {
        case 'Y':
        case 'y':
            printf("\nYou responded in the affirmative.");
            break;
            
        case 'N':
        case 'n':
            printf("\nYou responded in the negative.");
            break;
        
        default:
            printf("\nYou did not resposnd correctly...");
            break; 
    }
    
    return 0;
}
