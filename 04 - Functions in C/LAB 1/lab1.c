#include <stdio.h>

/* Get_Max Function Prototype */
int Get_Max(int num1 , int num2);

/* main Function */
void main(void)
{
	int val1 , val2 , Max_no;
	
	printf("\n\n");
	printf("please enter value 1 : ");
	scanf("%d",&val1);
	
	printf("please enter value 2 : ");
	scanf("%d",&val2);
	
	/* Get_Max Function call */
	Max_no = Get_Max(val1 , val2);
	
	/* print the result */
	printf("The Maximum Value is %d",Max_no);
	
	printf("\n\n");
}

/* Get_Max Function Implementation */
int Get_Max(int num1 , int num2)
{
	int Max ;
	
	if(num1 > num2)
	{
		Max = num1;
	}
	else
	{
		Max = num2;
	}
	
	return Max;
}