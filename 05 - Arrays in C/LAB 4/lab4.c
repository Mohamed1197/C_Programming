#include <stdio.h>

/* Global variables Definition */
int Arr[10], Elmt[10] ;
int Counter = 0 , Number ;

/* Searching Function Prototype */
void Search(void);

/* main Function */
void main(void)
{
	int n;
	printf("\n\n");
	
	/* Get 10 Numbers from the user */	
	for(n = 0 ; n < 10 ; n++)
	{
		printf("Please Enter Number %d : ",n);
		scanf("%d",&Arr[n]);
	}
	printf("\n");
	
	/* ask the user to enter the number he wants to look for */
	printf("Please Enter Number to Search : ");
	scanf("%d",&Number);
	
	/* Searching Function Calling */
	Search();
	
	printf("\n");
	/* Check if the number is found */
	if(Counter > 0)
	{
		printf("Value Exists %d times in elements : \n",Counter);
		/* for loop to get the elements where we the number exists */
		for(n = 0 ; n < Counter ; n++)
		{
			printf("  %d   -",Elmt[n]);
		}
	}
	else
	{
		printf("Value NOT found ! ");
	}
	/* Print the Array Elements */
	
	
	printf("\n\n");

}


/* Searching Function Implementation */
void Search(void)
{
	int iteration , n = 0 ;
	
	for(iteration = 0; iteration < 10 ; iteration++)
	{
		/* if the Number is Found in the Array  */
		/* we will find how many times the number is present and its location */
		if(Arr[iteration] == Number) 
		{
			Counter ++ ;
			Elmt[n] = iteration;
			n++ ;
		}

	}	
}