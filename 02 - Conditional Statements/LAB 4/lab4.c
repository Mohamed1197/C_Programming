#include <stdio.h>
#include <windows.h>

void main(void)
{
	int Grade ; 
	
	/* Display a message to the user to enter Number */
	printf("\nPlease Enter the Result : ");
	/* Wait for the user to enter the value */
	scanf("%d",&Grade);
	
	/* Check if Grade is 85 or greater */
	if((100 >= Grade ) && (Grade >= 85))   
	{
	/* Display EXCELLENT Grade*/
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\'EXCELLENT!\' \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
    /* Check if Grade is greater than or equal 75  and less than 85*/
	else if((85 > Grade ) && (Grade >= 75))   
	{
	/* Display Very Good Grade*/
	printf("\'VERY GOOD!\' \n");
	}
	/* Check if Grade is greater than or equal 65 and less than 75 */
	else if((75 > Grade ) && (Grade >= 65))   
	{
	/* Display Good Grade*/
	printf("\'GOOD!\' \n");
	}
	/* Check if Grade is greater than or equal 50 and less than 65 */
	else if((65 > Grade ) && (Grade >= 50))   
	{
	/* Display Normal Grade*/
	printf("\'NORMAL!\' \n");
	}
	/* Check if Grade is less than 50 */
	else if((50 > Grade) && (Grade >= 0))   
	{
	/* Display Failed Grade*/
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\'FAILED!!\' \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else
	{
	/* Display The Number is ODD */
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf(" ERROR !! Please Enter a Correct Number Between 0 and 100 \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	}
	
/* 		 for (int i = 0; i < 256; ++i)
		{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		printf("the test Color in use is = %d \n" , i);
		} */
	
}