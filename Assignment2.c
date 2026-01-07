Assignment 2
Name : Gauravi Ravindra Ingle
Date : 27 Dec 2025
********************************* Question 1 ***********************************
  1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.
----------------------------------------------------------------------------------
  
#include<stdio.h>

void main(){
	int a,b;
	char opt;
	int add,sub,mult,mod;
	float div;
	printf("Enter num a:");
	scanf("%d",&a);
	printf("Enter num b:");
	scanf("%d",&b);
	printf("OPERATOR:");
	scanf(" %c",&opt);
	
	if(opt == '+'){
		add = a+b;
		printf("Ans = %d",add);
	}
	else {
		if (opt == '-'){
			sub = a-b;
			printf("Ans = %d",sub);
		}
		else 
		{
			if(opt == '*'){
				mult = a*b;
				printf("Ans = %d",mult);
			}
			else{
				if(opt == '/'){
					div =(float) a/b;
					printf("Ans = %.2f",div);
					
				}
				else{
					if(opt == '%'){
						mod = a%b;
						printf("Ans = %d",mod);
					}
					else{
						printf("Calculations not possible");
					}
				}
			}
		}
	}
	
}

----------------------------------------------------------------------------------
********************************* Question 2 *************************************
 2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.
----------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter Size a:");
	scanf("%d",&a);
		printf("Enter Size b:");
		scanf("%d",&b);
			printf("Enter Size c:");
			scanf("%d",&c);
			
			if (a==b && b==c)
			{
				printf("The triangle is equilateral ");
			}
			else
			{
				if(a==b||b==c||c==a)
				{
					printf("The triangle is isosceles");
				}
				else 
				{
					printf("the triangle is scalaene");
				}
			}
	
}

----------------------------------------------------------------------------------
********************************* Question 3 *************************************
 3. Write a program to find greatest of three numbers using nested if-else.
----------------------------------------------------------------------------------

#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter num a:");
	scanf("%d",&a);
	printf("Enter num b:");
	scanf("%d",&b);
	printf("Enter num c:");
	scanf("%d",&c);
	
	if(a > b)
	{
		printf("A is greater");
	}
	else
	 {
		if(b > c){
			printf("B is greater");
			
		}
			else{
				printf("C is greater");
			}
	}
}

----------------------------------------------------------------------------------
********************************* Question 4 *************************************
 4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 → show "Distinction"
If marks are more than 65 → show "First Class"
If marks are more than 55 → show "Second Class"
If marks are 40 or more → show "Pass Class"
If marks are less than 40 → show "Fail"
----------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	
	if(marks>75)
	{
		printf("Distinction");
	}
	else
	{
		if(marks>65)
		{
			printf("First Class");
		}
		else{
			if(marks>55)
			{
				printf("Second Class");
				
			}
			else
			{
				if(marks>40)
				{
					printf("Pass Class");
				}
				else
				{
					printf("fail");
				}
			}
	
		}
	}
}

----------------------------------------------------------------------------------
********************************* Question 5 *************************************
 5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.
----------------------------------------------------------------------------------
#include<stdio.h>

void main()
{
    float price, discount = 0;
    char ch;

    printf("Price is: ");
    scanf("%f", &price);

    printf("Are you student (Y/N): ");
    scanf(" %c", &ch);   
// space before %c is important for making choice//

    if (ch == 'Y' || ch == 'y')
    {
        if (price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    }
    else
    {
        if (price > 600){
        	discount = price * 0.15;
		}
            
        else
        {
        	 discount = 0;
        	
		}
           
    }

    printf("Discount = %.2f", discount);
}

----------------------------------------------------------------------------------
********************************* Question 6 *************************************
 6.Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)
----------------------------------------------------------------------------------
#include<stdio.h>
void main(){
	int num;
	printf("Enter the Number you want to check: ");
	scanf("%d", &num);

//here is a golden rule to check the combinations first and then check the numbers individually//
	
		if(num % 3 == 0 && num % 5 == 0)
			{
				printf("NUMBER IS DIVISIBLE BY BOTH 3 AS WELL AS 5");
				
			}
			else
			{
		if(num % 5 == 0)
		{
			printf("NUMBER IS DIVISIBLE BY 5");
		}
		else 
		{
			if(num % 3 == 0)
	{
		printf("NUMBER IS DIVISIBLE BY 3 ");
		
	}
			else
			{
				printf("Number is not divisible even by 3 nor by 5");
			}
		}
	}
}

----------------------------------------------------------------------------------
********************************* Question 7 *************************************
 7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
----------------------------------------------------------------------------------
#include<stdio.h>

void main(){
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("HE/SHE IS A CHILD");
		
	}
	else
	{
		if(age<19 && age>=12)
		{
			printf("HE/SHE IS TEENAGER");
		}
		else
		{
			if(age<59 && age>=19)
			{
				printf("HE/SHE IS ADULT");
				
			}
			else
			{
				printf("HE/SHE IS SENIOR");
			}
		}
  
    }
}
----------------------------------------------------------------------------------
