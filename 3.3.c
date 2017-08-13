/* Program 3.3 Using nested ifs to analize numbers */
#include <stdio.h>
#include <limits.h>

int main(void)
{
    long test = 0L;
    
    printf("\nEnter a interger less than %ld: \n", LONG_MAX);
    scanf("%ld", &test);
    
    if(test % 2L == 0L)
    {
        printf("\nThe number %ld is even.\n", test);
        
        if( (test / 2L) % 2L == 0L );
        {
            printf("\nHalf of %ld is also even.\n", test);
            printf("\nThat's interesting isn't it?\n");
        }
    }
    
    else
        printf("\nThe number %ld is odd\n", test);
    
    return 0;
}
