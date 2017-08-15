/* Program 3.6 Multiple discount levels */
#include <stdio.h>

int main(void)
{
    const double unit_price = 3.50;
    const double discount1 = 0.05;
    const double discount2 = 0.1;
    const double discount3 = 0.15;
    double total_price = 0.0;
    int quantity = 0;
    
    printf("\nEnter the number that you want buy: ");
    scanf("%d", &quantity);
    
    total_price = quantity * unit_price * (1.0 - (quantity > 50 ? discount3:(quantity>20 ? discount2: (quantity > 10 ? discount1 : 0.0))));
    
    printf("\nThe price for %d is $%.2f\n", quantity, total_price);
    
    return 0;
}

