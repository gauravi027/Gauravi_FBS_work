----------------------------------------------------------------------Assignment 6 ---------------------------------------------------------------------------------


----------------------------------------------------------------------Question 1 -----------------------------------------------------------------------------------

#include<stdio.h>
void divisiblity(int num);
void main()
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	
	divisiblity(num);
	
}
void divisiblity(int num)
{
	if(num % 3==0 && num % 5==0)
	{
		printf("NUM n is divisible by both 3 and 5");
		
	}
	else
	{
		if(num % 3 != 0 && num % 5 == 0)
		{
			printf("NUM n is divisible by 5 but not by 3");
		}
		else
		{
			if(num % 5!= 0 && num % 3 == 0)
			{
				printf("NUM n is dividible by 3 but not by 5");
			}
			else
			{
				printf("NUM n is not divisible by 3 and 5");
			}
		}
	}
}

----------------------------------------------------------------------Question 2-----------------------------------------------------------------------------------

#include<stdio.h>
void eligibletovote(int age);

void main()
{
	int age;
	printf("Enter age to check whether the person is eligible to vote or not: ");
	scanf("%d",&age);
	
	eligibletovote(age);
	
}

void eligibletovote(int age)
{
	if(age < 18)
	{
		printf("Not eligible");
	}
	else
	{
		printf("Eligible");
	}
}

----------------------------------------------------------------------Question 3-----------------------------------------------------------------------------------
#include<stdio.h>
void greaternum (int i, int j , int k);

void main()
{
	int i,j,k;
	printf("Enter i :");
	scanf("%d",&i);
	printf("Enter j:");
	scanf("%d",&j);
	printf("Enter k:");
	scanf("%d",&k);
	
	greaternum(i,j,k);
	
}
void greaternum(int i,int j, int k)
{
	if(i>j)
	{
		printf("i is greatest");
		
	}
	else
	{
		if(j>k)
		{
			printf("j is greatest");
		}
		else
		{
			printf("k is greatest");
			
		}
	}
}

----------------------------------------------------------------------Question 4-----------------------------------------------------------------------------------

#include<stdio.h>
void leapyear( int year);

void main()
{
	int year;
	printf("Enter Year to check whether it is leap or not:");
	scanf("%d",&year);
	
	leapyear(year);
	
}
void leapyear(int year)
{
	if(year % 4 == 0)
	{
		printf("Leap year");
		
	}
	else
	{
		if(year % 100 == 0)
		{
		   printf("Not Leap year");	
		}
		else
		{
			if(year % 400 == 0)
			{
				printf("Leap year");
			}
			else
			{
				printf("Year is not leap");
			}
		}
		
	}
}

----------------------------------------------------------------------Question 5-----------------------------------------------------------------------------------
#include<stdio.h>
void result (int marks);
void main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	result(marks);
	
}
void result(int marks)
{
	if(marks>=75)
	{
		printf("Distinction");
		
	}
	else
	{
		if(marks>=65)
		{
			printf("First Class");
		}
		else
		{
			if(marks>=55)
			{
				printf("Second class");
				
			}
			else
			{
				if(marks>=40)
				{
					printf("Pass");
					
				}
				else
				{
					if(marks<40)
					{
						printf("Fail");
					}
					else
					{
						printf("Marks entered are wrong or out of range");
					}
				}
			}
		}
	}
}

----------------------------------------------------------------------Question 6-----------------------------------------------------------------------------------
#include<stdio.h>
void palindrome( int num);

void main(){
	int temp,rev,num;
	int digit;
	temp = num;
	rev = 0;
	printf("Enter num =");
	scanf("%d",&num);
	
	palindrome(num);
}
void palindrome(int num){
	int temp,rev;
	int digit;
	temp = num;
	rev = 0;
	
	while(num>0){
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	
	if(rev==temp)
	{
		printf("Palindrome");
		
	}
	else
	{
		printf("Not at all a palindrome number");
	}
}

----------------------------------------------------------------------Question 7-----------------------------------------------------------------------------------
#include<stdio.h>
void ageis(int age);
void main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	
	ageis(age);
	
}
void ageis(int age)
{
	if(age<=12)
	{
		printf("The person is child");
		
	}
	else
	{
		if(age<=19)
		{
			printf("The person is teenager");
		}
		else
		{
			if(age<=59)
			{
				printf("The person is Adult");
			}
			else
			{
				printf("The person is Senior");
			}
		}
	}
}

----------------------------------------------------------------------Question 8-----------------------------------------------------------------------------------
#include<stdio.h>
void triangle(int i,int j,int k);

void main()
{
	int sides;
	int i,j,k;
	printf("Enter side one i: ");
	printf("Enter side two j: ");
	printf("Enter side three k: ");
	
	scanf("%d",&i);
	scanf("%d",&j);
	scanf("%d",&k);
	
	triangle(i,j,k);
}
void triangle(int i,int j,int k)
{
	if(i==j && j== k )
	{
		printf("Triangle is Equilateral");
		
	}
	else
	{
		if(i == j || j == k || k == i)
		{
			printf("Triangle is isosceles");
			
		}
		else
		{
			printf("Triangle is is scalene");
		}
	}
}

----------------------------------------------------------------------Question 9-----------------------------------------------------------------------------------
#include<stdio.h>
void upplowcase(char ch);
void main()
{
	char ch;
	printf("Enter a charachter: ");
	scanf("%c",&ch);
	
	upplowcase(ch);
	
}
void upplowcase(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		printf("The character is Uppercase Character");
		
		
	}
	else
	{
		if(ch>='a' && ch<='z')
		{
			printf("The charachter is lower case charachter");
		}
		else
		{
			printf("This is NOT lowercase nor uppercase");
		}
	}
}
