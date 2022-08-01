#include <stdio.h>

int X = 10 , Y = 20;

/* Swap Function Prototype */
void Swap(void);

/* main Function */
void main(void)
{
	
	
	printf("\n\n");
	printf("X before Swap = %d\n",X);

	printf("Y before Swap = %d\n",Y);
	
	/* Swap Function call */
	Swap();
	
	printf("\n");
	
	/* print the result */
	printf("X After Swap = %d\n",X);

	printf("Y After Swap = %d\n",Y);
	
	printf("\n\n");
}

/* Swap Function Implementation */
void Swap(void)
{
	
	int temp ;
	
	temp = X ;
	X    = Y ;
	Y    = temp ;
}