#include <stdio.h>

/* Global variables Definition */
int Arr[10] ;

/* Sorting Function Prototype */
void Sort(void);

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
	
	/* Sorting Function Calling */
	Sort();
	printf("Values After Sorting Are : \n");
	
	/* Print the Array Elements */
	for(n = 0 ; n < 10 ; n++)
	{
		printf("\t%d\n",Arr[n]);
	}
	
	printf("\n\n");

}


/* Sorting Function Implementation */
void Sort(void)
{
	int iteration , Step , Temp ;
	
	/* Sort Array in the Acessending order */
	/* iterations  =  Array_Size - 1  */
	for(iteration = 0; iteration < 9 ; iteration++)
	{
		/* Step = Array_Size - 1 - iteration_number */
		for(Step = 0; Step < 9 - iteration ; Step++)
		{
			if(Arr[Step] > Arr[Step + 1]) 
			{
				/* if the Previous element is Greater than the Next */
				Temp          = Arr[Step]    ;
				Arr[Step]     = Arr[Step + 1];
				Arr[Step + 1] = Temp         ;
			}
		}
	}
	
}