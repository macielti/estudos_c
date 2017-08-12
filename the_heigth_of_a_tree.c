/* The Program calculate the hight of a tree*/
/*The inclusion os the libraries*/
#include <stdio.h>
#include <math.h>

/*the function main*/
int main(void)
{
	float shorty_to_lofty = 0.0f;
	float lofty_to_the_tree = 0.0f;
	float lofty = 0.0f;
	float shorty = 0.0f;
	float hight_tree = 0.0f;  
	
	printf("\nType the heigth of Shorty: ");
	scanf("%f", &shorty);
	
	printf("\nType the height of Lofty: ");
	scanf("%f", &lofty);
	
	printf("\nType the distance between sorty and lofty: ");
	scanf("%f", &shorty_to_lofty);
	
	printf("\nType the distance of lofty to the tree: ");
	scanf("%f", &lofty_to_the_tree);
	
	hight_tree = shorty + (shorty_to_lofty + lofty_to_the_tree) * (lofty - shorty) / shorty_to_lofty;
	
	printf("\nThe height of the tree is: %.2f", hight_tree);

	return 0;	
}
