#include <stdio.h>

void main(void)
{
	/* Declaration of the variables */
	int Num , i  , Factorial ;
	
	printf("\n\n");
	/* Ask the user to Enter a number */
	printf("Enter the Number to Display its Factorial : ");
	scanf("%d",&Num);
	i = Num - 1 ;
	Factorial = Num ;
	
	printf("\n");
	/* using while loop to get the Factorial */
	while(i > 0)
	{
		Factorial = Factorial * i ;
		
		i--;
	}
	printf("Factorinal = %d ", Factorial );
	
	printf("\n\n");
	
}