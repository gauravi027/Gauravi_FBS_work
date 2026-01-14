-------------------------------------------------------------Question 1 ---------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j;
	int n;
	
	printf("Enter number to draw a pattern:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}

-----------------------------------------------------------Question 2----------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j;
	int n;
	
	printf("Enter num to print right angle triangle pattern:");
	scanf("%d",&n);
	
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= i ; j++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
}
--------------------------------------------------------Question 3 --------------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j;
	int n;
	
	printf("Enter num to get invt right angle triangle pattern: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
}
------------------------------------------------------Question 4 ---------------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i , j;
	int n;
	
	printf("Enter num for pyramid:");
	scanf("%d",&n);
	
	for(i=1; i <= n; i++)
	{
		for( j = 1; j<=n-i ;j++)
		{
			printf(" ");
		}
			
			for( j = 1; j <= i; j++)
			{
				printf("* ");
			}
		
		printf("\n");
	}
}

-----------------------------------------------------Question 5 -----------------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i , j;
	int n;
	
	printf("Enter num for pyramid:");
	scanf("%d",&n);
	
	for(i = 1; i<=n ;i++) 
	{
		for(j=1; j<=i-1 ; j++)
		{
			printf(" ");
		}
			
			for( j = 1; j<=n-i+1; j ++)
			{
				printf("* ");
			}
		
		printf("\n");
	}
}

-----------------------------------------------------Question 6 .1 -----------------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j;
	int n;
	
	printf("Enter number to print pyramid of numbers :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

-----------------------------------------------------Question 6.2 ---------------------------------------------------------------------------------------------

#include<stdio.h>
void main(){
	int i , j;
	int n;
	
	printf("Enter number to print pyramid of same number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
			
		}
	    printf("\n");
	}
}

//differrence here is we print i for pyramid of same numbers & we print j for pyramid of numbers in sequence//
----------------------------------------------------Question 7 -------------------------------------------------------------------------------------------------

#include<stdio.h>
void main(){
	int i,j;
	int n,rows;
	n=1;
	
	printf("Enter number of rows to print floyds triangle: ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
---------------------------------------------------Question 8 -------------------------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j,k;
	int n;
	
	printf("Enter num to print diamond shape:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		    printf("* ");
		}	    
		
		printf("\n");
	}
	
	for(i=n-1 ; i>=1 ; i--)
			{
				for(j=1;j<=i;j++)
				{
					printf("* ");
				}
				printf("\n");
			}
			
		
	}
	
--------------------------------------------------------------------Question 9 -------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int i,j;
	int n;
	
	printf("Enter the number to print hollow square:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||j==n)
			{
				printf("* ");
			}
			else
			{
				printf("# ");
			}
		}
		printf("\n");
	}
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
