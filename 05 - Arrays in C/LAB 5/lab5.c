#include <stdio.h>

/* Global variables Definition */
int Arr[10], Elmt[10] ;
int Counter = 0 , Number ;

/* Sorting Function Prototype */
void Sort(void);

/* Searching Function Prototype */
void Binary_Search(void);

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
	while(1)
	{	
		/* ask the user to enter the number he wants to look for */
		printf("Please Enter Number to Search : ");
		scanf("%d",&Number);
	
		/* Searching Function Calling */
		Binary_Search();
	
		printf("\n");
		/* Check if the number is found */
		if(Counter != 0)
		{
			printf("Value Exists %d times in elements : \n",Counter);
		}
		else
		{
			printf("Value NOT found ! ");
		}
		/* Print the Array Elements */
	
	
		printf("\n\n");
	}
}


/* Searching Function Implementation */
void Binary_Search(void)
{
	int iteration , n = 0 , Position = 0 ,Left = 0 , Right = 9 ;
	
	/* Step 1 -> Sort the Array */
	/* Sorting Function Prototype */
	/* Searching Function Calling */
    Sort();
	
	while((Left < Right) && (Arr[Position] != Number))
	{
		/* Postion where we will search */
		Position = ((Right + 1) + Left ) / 2;
		printf(" TEST 2 \n");
		
		if(Arr[Position] < Number)
		{
			Left = (Position + 1) ;
			printf(" TEST 3 LEFT \n");
		}
		else if(Arr[Position] > Number)
		{	
			Right = (Position - 1) ;
			printf(" TEST 4 RIGHT \n");
		}
		
			printf(" ************   RIGHT   %d ===== LEFT   %d ***************** \n", Right , Left);
	}	
	/* if the Number is Found in the Array  */
	/* we will find how many times the number is present and its location */
	if(Left == Right) 
	{
		Position = Left + (((Right + 1) - Left ) / 2) ;
		if(Arr[Position] == Number)
		{
			Counter = 1 ;
		}
		else
		{
			Counter = 0;
		}
	}
	else if(Arr[Position] == Number)
	{
		Counter = 1 ;
	}
	else
	{
		Counter = 0;
	}
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
	printf(" TEST 1 \n");
	
}