/* Program 2.13 Choosing the correct type for the job */
#include <stdio.h>

int main(void)
{
    const float Revenue_Per_150 = 4.5f;
    short JanSold = 23500;
    short FebSold = 12300;
    short MarSold = 21600;
    float RevQuarter = 0.0f;
    
    short QuarterSold = JanSold + FebSold + MarSold;
    
    printf("\nStock sold in\n Jan: %d\n Feb: %d\n Mar: %d", JanSold, FebSold, MarSold);
    
    printf("\nTotal stock sold in first quarter: %d", QuarterSold);
    
    RevQuarter = QuarterSold / 150 * Revenue_Per_150;
    printf("\nSales revenue this quarter is: $%.2f\n", RevQuarter);
    
    return 0;
}
