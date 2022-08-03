#include <stdio.h>

/* Global variables Definition */
int Arr[101] = {8,4,6,7,5,9,1,2,3,0,14,12,15,11,10,16,17,81,13,18,19,24,21,25,26,
                20,22,23,28,27,29,39,38,37,36,35,34,31,32,33,30,40,49,48,47,44,45,
				46,41,42,43,50,51,55,54,52,56,53,57,58,59,68,69,67,66,64,65,63,61,
				62,60,79,78,75,76,77,74,71,72,73,70,80,88,87,89,84,85,86,81,82,83,
				99,90,98,97,95,96,92,94,93,91} , 
    Elmt[100] ;

/* Searching Function Prototype */
void Search(void);

/* main Function */
void main(void)
{
	int n;
	printf("\n\n");
	

	printf("\n");
	
	/* Searching Function Calling */
	Search();
	
	printf("\n");

	/* for loop to get the numbers exists how many times */
	for(n = 0 ; n < 100 ; n++)
	{
		if(Elmt[n] > 1)
		{
			printf("the Repeated Value is  %d \n",n);
		}
	}	
	
	printf("\n\n");

}


/* Searching Function Implementation */
void Search(void)
{
	int iteration , n ;
	
	/* For loop to chec the 101 Elements of the Array */
	for(iteration = 0; iteration < 101 ; iteration++)
	{
		/* check the numbers repeated how many times  */
		/* and use array Elmt[] to represent each number repeated times */
		
		for(n = 0 ; n < 100 ; n ++)
		{
			
			if(Arr[iteration] == n )
			{
				Elmt[n] ++;
			}
		}

	}	
}