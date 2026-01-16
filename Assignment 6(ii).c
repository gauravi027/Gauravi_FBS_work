-------------------------------------------------------------------Assignment 6 (ii) -------------------------------------------------------------------------------------------------

*************************** Type 2 : With parameter with return type ********************************************************

//with parameters and with return statement//
#include<stdio.h>
int evenodd(int a);
void main()
{
	int a,result;
	printf("Enter num :");
	scanf("%d",&a);
	
	result = evenodd(a);
	if(result == 1)
	{
		printf("Even");
		
	}
	else
	{
		printf("Odd");
		}	
}
int evenodd(int a)
{
	if(a % 2 ==0 )
	return 1;
	else
	return 0;
}
