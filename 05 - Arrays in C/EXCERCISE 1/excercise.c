#include <stdio.h>

/* Global variables Definition */
int Arr[20], Elmt[20] ;
int Counter = 0 , Number ;

/* Searching Function Prototype */
void Search(void);

/* main Function */
void main(void)
{
	int n;
	printf("\n\n");
	
	/* Get 20 Numbers from the user */	
	for(n = 0 ; n < 20 ; n++)
	{
		printf("Please Enter Number %d : ",n);
		scanf("%d",&Arr[n]);
		/* if entered a number greater than 9 or less than 0 */
		if((Arr[n] > 9) || (Arr[n] < 0))
		{
			/* Display a message to the user and decrement 1 step */
			printf("Please Enter Numbers Between 0 and 9 ONLY!!! \n");
			n-- ;
		}
		
	}
	printf("\n");
	
	/* Searching Function Calling */
	Search();
	
	printf("\n");

	/* for loop to get the numbers exists how many times */
	for(n = 0 ; n < 10 ; n++)
	{
		printf("Value %d  Exists %d times \n",n , Elmt[n]);
	}	
	
	printf("\n\n");

}


/* Searching Function Implementation */
void Search(void)
{
	int iteration , n = 0 ;
	
	/* For loop to chec the 20 Elements of the Array */
	for(iteration = 0; iteration < 20 ; iteration++)
	{
		/* check the numbers repeated how many times  */
		/* and use array Elmt[] to represent each number repeated times */
		switch(Arr[iteration])
		{
			case 0:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 1:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 2:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 3:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 4:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 5:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 6:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 7:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 8:
			Elmt[Arr[iteration]] ++;
			break;
			
			case 9:
			Elmt[Arr[iteration]] ++;
			break;
			
		}

	}	
}