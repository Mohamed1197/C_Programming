#include <stdio.h>

void main(void)
{
	int num1 , num2 , num3 , Max = 0;
	
	printf("\n");
	/* Ask the user to Enter all the three Numbers */
	printf("Please Enter Number 1 : ");
	scanf("%d",&num1);
	
	printf("Please Enter Number 2 : ");
	scanf("%d",&num2);
	
	printf("Please Enter Number 3 : ");
	scanf("%d",&num3);
	
	/* use if statement to check for the maximum Number */
	if(Max < num1)
	{
		Max = num1;
	}
	if(Max < num2)
	{
		Max = num2;
	}
	if(Max < num3)
	{
		Max = num3;
	}
	
	
	printf("\n");
	/* Print the Maximum Number */
	printf("The Maximum Number is : %d " ,Max);
	printf("\n");
	
}