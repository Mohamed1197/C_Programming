#include <stdio.h>

/* Factorial Function Prototype */
int Factorial(int num1);

/* main Function */
void main(void)
{
	int num , Res;
	printf("\n");
	printf("Please enter an number to get its Factorial : ");
	scanf("%d",&num);
	
	Res = Factorial(num);
	
	printf("Factorial of %d is %d \n",num,Res);
	printf("\n");
}

int Factorial(int num1)
{
	if(num1 > 1)
	{
		
		return (num1 * Factorial(num1-1));
	}
	else
	{
		return 1;
	}
	
	
}