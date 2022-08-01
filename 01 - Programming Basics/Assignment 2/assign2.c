#include <stdio.h>

void main(void)
{
	/* Define Int Variables */
	int n1 , n2 , n3 ;
	/* Display a message to the user to enter a value */
	printf("Please enter number 1: ");
	/* wait for the user to enter the value */
	scanf("%d",&n1);
	/* Display a message to the user to enter a value */
	printf("Please enter number 2: ");
	/* wait for the user to enter the value */
	scanf("%d",&n2);
	/* Display a message to the user to enter a value */
	printf("Please enter number 3: ");
	/* wait for the user to enter the value */
	scanf("%d",&n3);
	
	/* Display values entered by the user inverted */
	printf("\nnumber 3: %d \n",n3);
	printf("number 2: %d \n",n2);
	printf("number 1: %d \n",n1);
}