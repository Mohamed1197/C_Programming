#include <stdio.h>

void main(void)
{
	/* Define Int Variables */
	int x = 7 , y = 4 , AND , OR , XOR , R_SHIFT , L_SHIFT ;
	/* Display a the value of X and Y */
	printf("\n***************\n");
	printf("*   X = %d     *",x);  printf("     <<--  Variables \n");
	printf("*   Y = %d     *\n",y);
	printf("***************\n");
	
	/* Apply AND Operator to x & y */
	AND = x & y ;
	
	/* Apply OR Operator to x & y */
	OR = x | y ;
	
	/* Apply XOR Operator to x & y */
	XOR = x ^ y ;
	
	/* Apply R_SHIFT Operator to x & y */
	R_SHIFT = x >> 1 ;

	/* Apply L_SHIFT Operator to x & y */
	L_SHIFT = y << 2;

	/* Print the Values above */
	printf("#####################\n");
	printf("#    x & y = %d      #\n" , AND);		
	printf("#    x | y = %d      #\n" , OR);
	printf("#    x ^ y = %d      #" , XOR);      printf("     <<-- BitWise Operations \n");
	printf("#    x >> 1 = %d     #\n" , R_SHIFT);
	printf("#    y << 2 = %d    #\n" , L_SHIFT);
	printf("#####################\n");

	
	
}