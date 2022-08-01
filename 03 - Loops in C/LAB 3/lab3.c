#include <stdio.h>

void main(void)
{
	int i , num , sum = 0;
	float avg = 0;
	
	printf("\n");
	printf("Please Enter the 10 Numbers ");
	printf("\n");
	/* using for Loop to print the first 10 Numbers */
	for(i = 1 ; i <= 10; i++)
	{
		printf("Number %d : " , i);
		scanf("%d",&num);
		sum += num;
	}
	printf("\n");
	
	avg = ((float)sum / 10);
	
	printf("The Sum of The 10 Numbers is = %d \n",sum);
	
	printf("The Average of The 10 Numbers is = %f \n",avg);
	
}
