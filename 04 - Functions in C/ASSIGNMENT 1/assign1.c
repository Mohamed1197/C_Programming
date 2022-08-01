#include <stdio.h>

int Get_Max(int n1 , int n2 , int n3 , int n4);

int Get_Min(int n1 , int n2 , int n3 , int n4);

void main(void)
{
	int Num1 , Num2 , Num3 , Num4;
	
	printf("\n\n");
	
	printf("Please Enter Number 1 : ");
	scanf("%d",&Num1);
	
	printf("Please Enter Number 2 : ");
	scanf("%d",&Num2);
	
	printf("Please Enter Number 3 : ");
	scanf("%d",&Num3);
	
	printf("Please Enter Number 4 : ");
	scanf("%d",&Num4);
	
	int Maximum = Get_Max(Num1 , Num2 , Num3 , Num4);
	int Minimum = Get_Min(Num1 , Num2 , Num3 , Num4);
	
	printf("\n");
	printf("The Maximum Value is \"%d\" and the Minimum is \"%d\" ", Maximum , Minimum);
	
	printf("\n\n");
}

int Get_Max(int n1 , int n2 , int n3 , int n4)
{
	int Max = 0 ;
	
	if((n1>=n2) && (n1>=n3) && (n1>=n4))
	{
		Max =  n1;
	}
	else if((n2>=n1) && (n2>=n3) && (n2>=n4))
	{
		Max =  n2;
	}
	else if((n3>=n2) && (n3>=n1) && (n3>=n4))
	{
		Max =  n3;
	}
	else if((n4>=n2) && (n4>=n3) && (n4>=n1))
	{
		Max =  n4;
	}
	return Max;
}

int Get_Min(int n1 , int n2 , int n3 , int n4)
{
	int Min = 0 ;
	
	if((n1<=n2) && (n1<=n3) && (n1<=n4))
	{
		Min =  n1;
	}
	else if((n2<=n1) && (n2<=n3) && (n2<=n4))
	{
		Min =  n2;
	}
	else if((n3<=n2) && (n3<=n1) && (n3<=n4))
	{
		Min =  n3;
	}
	else if((n4<=n2) && (n4<=n3) && (n4<=n1))
	{
		Min =  n4;
	}
	return Min ;
}