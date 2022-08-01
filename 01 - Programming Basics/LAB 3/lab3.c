#include <stdio.h>

void main(void)
{
	/* Define Int Variables without initialization */
	int n1 , n2 , sum , mul ;
	/* Display a message to the user to enter a value */
	printf("\nPlease Enter Number 1 : ");
	/* wait for the user to enter the value */
	scanf("%d",&n1);
	/* Display a message to the user to enter a value */
	printf("Please Enter Number 2 : ");
	/* wait for the user to enter the value */
	scanf("%d",&n2);
	
	/* Add the two numbers N1 & N2 */
	sum = n1 + n2 ;
	
	/* Multiply the two numbers N1 & N2 */
	mul = n1 * n2 ;
	
	/* Print the sum and multiplication */
	printf("n1 + n2 = %d \n" , sum);		
	printf("n1 x n2 = %d \n" , mul);	
}