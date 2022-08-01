#include <stdio.h>

void main(void)
{
	/* Define Int Variables */
	int a , b , AND , OR , XOR , SUM , SUB ;
	
    /* Display a message to the user to enter a value */
	printf("Please enter number a: ");
	/* wait for the user to enter the value */
	scanf("%d",&a);
	/* Display a message to the user to enter a value */
	printf("Please enter number b: ");
	/* wait for the user to enter the value */
	scanf("%d",&b);

	/* Apply SUM Operation to a & b */
	SUM = a + b ;

	/* Apply SUB Operation to a & b */
	SUB = a - b ;

	/* Apply AND Operator to a & b */
	AND = a & b ;
	
	/* Apply OR Operator to a & b */
	OR = a | b ;
	
	/* Apply XOR Operator to a & b */
	XOR = a ^ b ;
	

	/* Print the Values above */
	printf("#####################\n");
	printf("#    a + b = %d      #\n" , SUM);
	printf("#    a - b = %d      #\n" , SUB);
	printf("#    a & b = %d      #\n" , AND);		
	printf("#    a | b = %d      #\n" , OR);
	printf("#    a ^ b = %d      #\n" , XOR);      
	printf("#####################\n");
}