#include <stdio.h>

int FN_ADD(int n1 , int n2);
int FN_SUB(int n1 , int n2);
int FN_MUL(int n1 , int n2);
int FN_DIV(int n1 , int n2);
int FN_AND(int n1 , int n2);
int FN_OR (int n1 , int n2);
int FN_XOR(int n1 , int n2);
int FN_REM(int n1 , int n2);
int FN_NOT(int n1 );
int FN_INC(int n1 );
int FN_DEC(int n1 );


void main(void)
{
	int Operation , Num1 , Num2 , Result;
	
	printf("\n\n" );
	printf("Please Select an Operation :\n\n" );
	printf("ADD       ------------>  1 \n" );
	printf("SUBTRACT  ------------>  2 \n" );
	printf("MULTIPLY  ------------>  3 \n" );
	printf("DIVIDE    ------------>  4 \n" );
	printf("AND       ------------>  5 \n" );
	printf("OR        ------------>  6 \n" );
	printf("NOT       ------------>  7 \n" );
	printf("XOR       ------------>  8 \n" );
	printf("REMAINDER ------------>  9 \n" );
	printf("INCREMENT ------------>  10 \n" );
	printf("DECREMENT ------------>  11 \n\n" );
	printf(">>>>>Your Choice : " );
	
	scanf("%d",&Operation);
	
	printf("\n");
	
	switch(Operation)
	{
		case 1:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_ADD(Num1,Num2);
		printf("\n");
		printf("Result of the Add is = %d",Result);	
		break;
		
		case 2:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_SUB(Num1,Num2);
		printf("\n");
		printf("Result of the Subtraction is = %d",Result);	
		break;
		
		case 3:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_MUL(Num1,Num2);
		printf("\n");
		printf("Result of the Multiplication is = %d",Result);	
		break;
		
		case 4:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_DIV(Num1,Num2);
		printf("\n");
		printf("Result of the Division is = %d",Result);	
		break;
		
		case 5:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_AND(Num1,Num2);
		printf("\n");
		printf("Result of the AND is = %d",Result);	
		break;
		
		case 6:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_OR(Num1,Num2);
		printf("\n");
		printf("Result of the OR is = %d",Result);	
		break;
		
		case 7:
		printf("Enter the Number : ");
		scanf("%d",&Num1);
		Result = FN_NOT(Num1);
		printf("\n");
		printf("Result of the NOT is = %d",Result);	
		break;
		
		case 8:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_XOR(Num1,Num2);
		printf("\n");
		printf("Result of the XOR is = %d",Result);	
		break;
		
		case 9:
		printf("Enter the First Number : ");
		scanf("%d",&Num1);
		printf("Enter the Second Number : ");
		scanf("%d",&Num2);
		Result = FN_REM(Num1,Num2);
		printf("\n");
		printf("Result of the Remainder is = %d",Result);	
		break;
		
		case 10:
		printf("Enter the Number : ");
		scanf("%d",&Num1);
		Result = FN_INC(Num1);
		printf("\n");
		printf("Result of the Increment is = %d",Result);	
		break;
		
		case 11:
		printf("Enter the Number : ");
		scanf("%d",&Num1);
		Result = FN_DEC(Num1);
		printf("\n");
		printf("Result of the Decrement is = %d",Result);	
		break;
	}
	printf("\n\n" );
	
}



int FN_ADD(int n1 , int n2)
{
	int Res = n1 + n2 ;
	return Res;
}
int FN_SUB(int n1 , int n2)
{
	int Res = n1 - n2 ;
	return Res;
}
int FN_MUL(int n1 , int n2)
{
	int Res = n1 * n2 ;
	return Res;
}
int FN_DIV(int n1 , int n2)
{
	int Res = n1 / n2 ;
	return Res;
}
int FN_AND(int n1 , int n2)
{
	int Res = n1 & n2 ;
	return Res;
}
int FN_OR (int n1 , int n2)
{
	int Res = n1 | n2 ;
	return Res;
}
int FN_XOR(int n1 , int n2)
{
	int Res = n1 ^ n2 ;
	return Res;
}
int FN_REM(int n1 , int n2)
{
	int Res = n1 % n2 ;
	return Res;
}
int FN_NOT(int n1 )
{
	int Res = ~n1  ;
	return Res;
}
int FN_INC(int n1 )
{
	int Res = ++n1 ;
	return Res;
}
int FN_DEC(int n1 )
{
	int Res = --n1 ;
	return Res;
}