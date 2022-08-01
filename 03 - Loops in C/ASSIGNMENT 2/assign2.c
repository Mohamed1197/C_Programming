#include <stdio.h>


void main(void)
{
	/* Definition of the Variable */
	int ID , Password , Tries = 3 , Counter = 0 , Flag = 0;
	
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
		/* Loop for 3 times if wrong password */
		while(Counter < Tries)
		{
			/* wait for the user to Enter the Password */
			scanf("%d",&Password);
			printf("\n");
			switch(Password)
			{
				/* if the password is correct Print His Name*/
				case 7788:
				printf("Welcome Ahmed \n");
				Counter = Tries ;
				Flag = 1;
				break;
				/* if a wrong Password is entered */
				default:
				Counter ++;	
				if(Counter < 3)
				{
				printf("Incorrect Password !!! \n");
				printf("Try Again : ");
				}
				break;
			}
		}
		break;

		
		/* if the user ID is 5678 Ask For Password*/
		case 5678:
		/* Display a message to the user to enter his Password */
		printf("Please enter your Password : ");
		/* Loop for 3 times if wrong password */
		while(Counter < Tries)
		{
			/* wait for the user to Enter the Password */
			scanf("%d",&Password);
			printf("\n");
			switch(Password)
			{
				/* if the password is correct Print His Name*/
				case 5566:
				printf("Welcome Amr \n");
				Counter = Tries ;
				Flag = 1;
				break;
				/* if a wrong Password is entered */
				default:
				Counter ++;	
				if(Counter < 3)
				{
				printf("Incorrect Password !!! \n");
				printf("Try Again : ");
				}
				break;
			}
		}
		break;
		
		/* if the user ID is 1234 Ask For Password*/
		case 9870:
		/* Display a message to the user to enter his Password */
		printf("Please enter your Password : ");
		/* Loop for 3 times if wrong password */
		while(Counter < Tries)
		{
			/* wait for the user to Enter the Password */
			scanf("%d",&Password);
			printf("\n");
			switch(Password)
			{
				/* if the password is correct Print His Name*/
				case 1122:
				printf("Welcome Wael \n");
				Counter = Tries ;
				Flag = 1;
				break;
				/* if a wrong Password is entered */
				default:
				Counter ++;	
				if(Counter < 3)
				{
				printf("Incorrect Password !!! \n");
				printf("Try Again : ");
				}
				break;
			}
		}
		break;
		/* if a wrong ID Entered */
		default:
		printf("\n");
		printf("You are not Registered \n");
		Flag = 1;
		break;
	}
	
	if(Flag == 0)
	{
		printf("\nIncorrect Password for 3 times , no more tries \n\n");
	}
	
	
}