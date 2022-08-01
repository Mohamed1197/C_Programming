#include <stdio.h>

void main(void)
{
	/* Declaration of the variables */
	int num1 , num2 , sum = 0;
	
	/* infinite Loop */
	while(1)
	{
		printf("\n\n");
		
		/* Take two Numbers From the User */
		printf("Please Enter the First Number  : ");
		scanf("%d",&num1);
		printf("Please Enter the Second Number : ");
		scanf("%d",&num2);
		
		sum = num1 + num2 ;
		printf("\n");
		
		/* Print the Result */
		printf("The Result is %d ",sum);
	}
}