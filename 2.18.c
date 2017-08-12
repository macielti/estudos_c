/* Program 2.18 Calculating the height of a tree */
#include <stdio.h>

int main(void)
{
	long shorty = 0L;
	long lofty = 0L;
	long feet = 0L;
	long inches = 0L;
	long shorty_to_lofty = 0L;
	long height_tree= 0L;
	long lofty_to_tree = 0L;

	const long inches_per_foot = 12L;
	
	printf("\nEnter Lofty's height to the top os his/her head, in whole feet: ");
	scanf("%ld", &feet);
	printf("\n... and then inches: ");
	scanf("%ld", &inches);
	lofty = feet * inches_per_foot + inches;

	printf("\nEnter Shorty's hetght up to his/her eyes, in whole feet: ");
	scanf("%ld", &feet);
	printf("\n... and then inches: ");
	scanf("%ld", &inches);
	shorty = feet * inches_per_foot + inches;  	

	printf("\nEnter the distance between Shorty and Lofty, in whole feet: ");
	scanf("%ld", &feet);
	printf("\n... and then inches: ");
	scanf("%ls", &inches);
	shorty_to_lofty = feet * inches_per_foot + inches;
	
	printf("\nFinally enter the distance to the tree to the nearest foot: ");
	scanf("%ld", &feet);
	lofty_to_tree= feet * inches_per_foot;
	
	height_tree = shorty + (shorty_to_lofty + lofty_to_tree)*(lofty-shorty) / shorty_to_lofty;

	printf("\nThe height of the tree is %ld feet and %ld inches.\n", height_tree / inches_per_foot, height_tree % inches_per_foot);
	
	return 0;
}
