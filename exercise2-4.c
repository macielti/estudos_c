#include <stdio.h>

int main(void)
{
    float weekly_pay;
    float hours_worked;
    float pay_per_hour;
    int   demals_output;
    
    printf("\nType the payment weekly: ");
    scanf("%f", &weekly_pay);
    
    printf("\nType how many hours you worked: ");
    scanf("%f", &hours_worked);
    
    pay_per_hour = weekly_pay / hours_worked;
    demals_output = (int)weekly_pay%(int)hours_worked;
    
    printf("\nYour avarage hourly pay rate in %.0f dollars and %d", pay_per_hour, demals_output);
    
    return 0;
}
