#include <stdio.h>

/* main Function */
void main(void)
{
	/* Define variables */
	int Sum = 0 ;
	float Avg ;
	/* Define array without initialization */
	int Num[10];
	
	printf("\n\n");
	/* using a FOR loop we eill ask the user to enter the 10 values */
	for(int n = 0 ; n < 10 ; n++)
	{
		printf("please Enter number %d: ",n);
		scanf("%d",&Num[n]);
		Sum += Num[n];
	}
	Avg = (float)Sum/10 ;
	printf("\n");

	printf("Sum of array elements = %d \n", Sum);
	printf("Average of array elements = %f \n", Avg);
	printf("\n\n");
}