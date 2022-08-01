#include <stdio.h>


void main(void)
{
	/* Definition of the Variable */
	int ID = 1234 , Password = 1212;
	
	printf("\n");
	/* Display a message to the user to enter the User ID */
	printf("Please enter your User ID : ");
	/* wait for the user to Enter the Value */
	scanf("%d",&ID);
	
	/* Check the ID Entered using Switch Case */
	switch(ID)
	{
		/* if the user ID is 1234 Ask For Password*/
		case 1234:
		/* Display a message to the user to enter his Password */
		printf("Please enter your Password : ");
		/* wait for the user to Enter the Password */
		scanf("%d",&Password);
		printf("\n");
		switch(Password)
		{
			/* if the password is 1212 Print His Name*/
			case 1212:
			printf("Welcome Mohamed \n");
			break;
			/* if a wrong Password is entered */
			default:
			printf("Incorrect Password !!! \n");
			break;
		}
		break;
		/* if a wrong ID Entered */
		default:
		printf("\n");
		printf("Incorrect ID !!! \n");
		break;
		
	}
	
	
}