#include <stdio.h>

/* main Function */
void main(void)
{
	/* Define array without initialization */
	int Num[10];
	
	printf("\n\n");
	/* using a FOR loop we eill ask the user to enter the 10 values */
	for(int n = 0 ; n < 10 ; n++)
	{
		printf("please Enter number %d: ",n);
		scanf("%d",&Num[n]);
	}
	printf("\n");
	
	printf("the values in reversed order :-  \n");
	/* using another for loop to display the values entered Reversed */
	for(int n = 9 ; n >= 0 ; n--)
	{
		printf("%d\n",Num[n]);
	}
	printf("\n\n");
}