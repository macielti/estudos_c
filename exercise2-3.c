#include <stdio.h>

int main(void)
{ 
    float total_price, n_products;
    int option;
    float price;
    _Bool the_kind_1;
    _Bool the_kind_2;
     
    printf("\n---Choose a version of the product---\n\t\t1-standard version\n\t\t2-deluxe version\nchoise= ");
    scanf("%d", &option);
    
    printf("\nHow many products you want? ");
    scanf("%f", &n_products);
    
    the_kind_1= (option == 1);
    the_kind_2= (option == 2);
    
    total_price = (the_kind_1 * (n_products * 3.50)) + (the_kind_2 * (n_products * 5.50));
    
    printf("\nTotal Price: %.2f", total_price);
    
    return 0;
}
