#include <stdio.h>

void main(void)
{
	/* Declaration of the variables */
	int Ans = 12 , Res  ;
	
	printf("\n\n");
	/* Display a message to the user to Answer the Following */
	printf("Enter the Result of 3 x 4 = ? \n");
	printf("Answer = ");
	scanf("%d",&Res);
	
	/* User will stay in the loop if the Result is inCorrect */
	while(Res != Ans)
	{
		printf("\n");
		printf("Incorrect Answer !! , Please Try Again \n");
		printf("Answer = ");
		scanf("%d",&Res);
	}
	/* User Exits the loop When a Correct Answer is given and Thanks Message is displayed */
	printf("Correct !  Thank You ");
	
	printf("\n\n");
	
}