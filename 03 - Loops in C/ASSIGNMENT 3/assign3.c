#include <stdio.h>

void main(void)
{
	int i , j , k , height ;
	
	printf("Please Enter the Height of the Pyramid : ");
	scanf("%d",&height);
	
	for(i = 0 ; i < height ; i++)
	{
		for(j = (height -1 -i) ; j > 0 ; j--)
		{
			printf(" ");
		}
		for(k = 0 ; k < (2*i)+1 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}


/* 

---*
--***
-*****
*******

 */