#include <stdio.h>


void main(void)
{
	/* Definition of the Variables */
	int N1 = 0 , N2 = 0 , N3 = 0 , N4 = 0 , N5  = 0 ,
	    N6 = 0 , N7 = 0 , N8 = 0 , N9 = 0 , N10 = 0 ;
		
	int Search = 0 , Counter = 0 , Result = 0;
	
	printf("\n \n \n");
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 1 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N1);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 2 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N2);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 3 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N3);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 4 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N4);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 5 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N5);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 6 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N6);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 7 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N7);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 8 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N8);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 9 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N9);
	/* Display a message fro the user to enter Numbers  */
	printf("Please Enter Number 10 : ");
	/* wait for the user to enter the value */
	scanf("%d",&N10);
	
	printf("\n");
	printf("-------------------------------\n");
	/* Display a message fro the user to enter the value to Search  */
	printf("Please Enter Value to Search : ");
	/* wait for the user to enter the value */
	scanf("%d",&Search);
	
	/* use If statement to Check the Search Value and its location */
	if(Search == N1)
	{
		Counter = 1;
	}
	else if(Search == N2)
	{
		Counter = 2;
	}
	else if(Search == N3)
	{
		Counter = 3;
	}
	else if(Search == N4)
	{
		Counter = 4;
	}
	else if(Search == N5)
	{
		Counter = 5;
	}
	else if(Search == N6)
	{
		Counter = 6;
	}
	else if(Search == N7)
	{
		Counter = 7;
	}
	else if(Search == N8)
	{
		Counter = 8;
	}
	else if(Search == N9)
	{
		Counter = 9;
	}
	else if(Search == N10)
	{
		Counter = 10;
	}
	else
	{
		Counter = 0;
	}
	
	printf("\n");
	
	/* Counter is Zero When the Searched Value is Not Found */
	if(Counter == 0)
	{
		printf("Value not Found ! ");
	}
	else
	{
		printf("Value Exists at element number %d " , Counter);
	}
	printf("\n-------------------------------");
	printf("\n \n \n");
	
}