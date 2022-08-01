#include <stdio.h>


void main(void)
{
	/* Definition of the Variable */
	int ID = 0;
	/* Display a message to the user to enter the User ID */
	printf("Please enter your User ID : ");
	/* wait for the user to Enter the Value */
	scanf("%d",&ID);
	
	printf("\n");
	/* Check the ID Entered using Switch Case */
	switch(ID)
	{
		/* if the user ID is 1234 Print Ahmed */
		case 1234:
		printf("Welcome Ahmed \n");
		break;
		/* if the user ID is 5678 Print Youssef */
		case 5678:
		printf("Welcome Youssef \n");
		break;
		/* if the user ID is 1145 Print Mina */
		case 1145:
		printf("Welcome Mina \n");
		break;
		/* if none of the above ID Entered */
		default:
		printf("Wrong ID !!! \n");
		
	}
	
	
}