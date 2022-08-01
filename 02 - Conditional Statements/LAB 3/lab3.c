#include <stdio.h>

void main(void)
{
	int Num ; 
	
	/* Display a message to the user to enter Number */
	printf("\nPlease Enter the number : ");
	/* Wait for the user to enter the value */
	scanf("%d",&Num);
	
	/* Check if Number remainder is zero '0' */
	if((Num % 2) == 0)   
	{
	/* Display The Number is EVEN */
	printf("Number is \'EVEN\' \n");
	}
	else
	{
	/* Display The Number is ODD */
	printf("Number is \'ODD\' \n");
	}
	
}