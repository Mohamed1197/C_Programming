#include <stdio.h>

void main(void)
{
	/* Declaration of the variables */
	int Num , i = 1 , Res = 1 ;
	
	printf("\n\n");
	/* Ask the user to Enter a number */
	printf("Enter the Number to Display its Multiplication Table : ");
	scanf("%d",&Num);
	
	printf("\n");
	/* using while loop to get the multiplication table */
	while(Num >= i)
	{
		Res = Num * i ;
		
		printf("%d X %d = %d \n", Num , i , Res );
		i++;
	}
	printf("\n\n");
	
}