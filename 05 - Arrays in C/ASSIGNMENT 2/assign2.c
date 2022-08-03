#include <stdio.h>

/* Global variables Definition */
int Arr[30] ;
int Class1[10] = {84,64,62,89,10,58,66,71,94,64} ,
    Class2[10] = {81,66,11,84,75,62,78,91,58,42} , 
	Class3[10] = {55,40,50,95, 4,27,74,65,87,54} ;

/* Sorting Function Prototype */
void Sort(void);

/* main Function */
void main(void)
{
	int n , Pass = 0, Fail = 0, AVG = 0 ;
	printf("\n\n");
	
	for(n = 0 ; n < 30 ; n++)
	{
		if(n < 10)
		{
			Arr[n] = Class1[n];
		}
		else if(n < 20)
		{
			Arr[n] = Class2[n-10];
		}
		else if(n < 30)
		{
			Arr[n] = Class3[n-20];
		}
	}
	
	/* Sorting Function Calling */
	Sort();
	
	/* Find the Number of Passed And Failed Students */
	for(n = 0 ; n < 30 ; n++)
	{
		if(Arr[n] >= 50)
		{
			Pass++;
		}
		else
		{
			Fail++;
		}
	}
	
	/* Find the Average Grade of Students */
	for(n = 0 ; n < 30 ; n++)
	{
		AVG += Arr[n]; 
		printf("\t  %d  \n", Arr[n]);
	}
	
	AVG /= 30 ; 
	
	/* Display the Number of Passed Students */
	printf("The Number of PASSED Students = %d \n",Pass);
	/* Display the Number of Passed Students */
	printf("The Number of FAILED Students = %d \n",Fail);
	/* Display the Highest Grade of Students */
	printf("The HIGHEST Grade of Students = %d \n",Arr[29]);
	/* Display the Lowest Grade of Students */
	printf("The LOWEST Grade of Students = %d \n",Arr[0]);
	/* Display the Average Grade of Students */
	printf("The AVERAGE Grade of Students = %d \n",AVG);
	
	printf("\n\n");

}


/* Sorting Function Implementation */
void Sort(void)
{
	int iteration , Step , Temp ;
	
	/* Sort Array in the Acessending order */
	/* iterations  =  Array_Size - 1  */
	for(iteration = 0; iteration < 29 ; iteration++)
	{
		/* Step = Array_Size - 1 - iteration_number */
		for(Step = 0; Step < 29 - iteration ; Step++)
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