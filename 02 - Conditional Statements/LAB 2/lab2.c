#include <stdio.h>

void main(void)
{
	int Work_hrs = 0 , Salary = 0 , Salary_Rate = 50; 
	/* Display a message to the user to enter the Working Hours */
	printf("\nPlease Enter the number of Worked Hours : ");
	/* Wait for the user to enter the value */
	scanf("%d",&Work_hrs);
	
	Salary = (Work_hrs * Salary_Rate) ;
	
	if(Work_hrs < 40)
	{
		Salary = Salary * 0.9 ; 
	}

	/* Display The Salary */
	printf("Your Salary is =  %d",Salary);
	

}