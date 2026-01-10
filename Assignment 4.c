-------------------------------------------Assignment 4-----------------------------------------------
______________________________________________________________________________________________________

***************************************** Question 1 *************************************************
Print armstrong numbers in the given range 1 to n.
______________________________________________________________________________________________________
#include <stdio.h>

void main() {
    int n, i, num, temp, digit;
    int count, sum, power, k;

    printf("Enter the  n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        num = i;
        temp = i;
        count = 0;
        sum = 0;

      
        while(temp > 0) {
            count++;
            temp = temp / 10;
        }

        temp = num;

        
        while(temp > 0) {
            digit = temp % 10;
            power = 1;

            for(k = 1; k <= count; k++) {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d ", num);
        }
    }

}

______________________________________________________________________________________________________

***************************************** Question 2 *************************************************
Print prime numbers in the given range 1 to n.
______________________________________________________________________________________________________
#include<stdio.h>
void main(){
	int i,j,count;
	int n;
	
	printf("Enter number n:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		count=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count=count+1;
				
			}
		}
		
		if(count==2)
		{
			printf("%d",i);
			
		}
		printf("\n");
	}
}

______________________________________________________________________________________________________

***************************************** Question 3 *************************************************
Print perfect numbers in the given range 1 to n.
______________________________________________________________________________________________________
#include<stdio.h>
void main()
{
	int i, j , sum;
	int n;
	
	printf("Enter num to print perfect nos uptill range: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		
		for(j=1; j<=i-1; j++)
		{
			if(i%j==0)
			{
				sum = sum+i;
				
			}
		}
		
		if(sum==i)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
}

______________________________________________________________________________________________________

***************************************** Question 4 *************************************************
Print strong numbers in the given range 1 to n.
______________________________________________________________________________________________________
#include<stdio.h>
void main(){
	int i,j,k,sum,fact,temp,digit;
	int n;
	
	printf("Print strong numbers from no:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		temp = i;
		sum = 0;
		
		while(temp!=0)
		{
			digit= temp % 10;
			fact = 1;
			
			for(k=1;k<=digit;k++)
			{
				fact= fact*k;
				
			}
			sum = sum+fact;
			temp = temp/10;
			
			
		}
		
		if( sum == i)
		{
			printf("%d",i);
		}
	}
}

//here factorial is applied per digit//
______________________________________________________________________________________________________

***************************************** Question 5 *************************************************
5. Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.
______________________________________________________________________________________________________
#include<stdio.h>
void main()
{
	int temp,i,flag,digit;
	int num,sum,rev;
	printf("Enter number to check : ");
	scanf("%d",&num);
	int choice;
	
	printf("\n -----MENU-----");
	printf("\n1. Check Even or odd");
	printf("\n2. Check prime or not ");
	printf("\n3. Check whether num is palindrome or not");
	printf("\n4. check wether number is positive or negative or zero");
	printf("\n5. reverse the number");
	printf("\n6. Find the sum of digits");
	printf("\nEnter the choice: ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			if(num % 2 == 0)
			{
				printf("Number is even");
				
			}
			else
			{
				printf("Number is odd");
			}
			break;
			
		case 2:
			if(num<= 1)
			{
				printf("Not a prime number");
				break;
			}
			flag = 0;
			for(i = 2 ; i <= num/2 ; i++)
			{
				if(num % i == 0)
				{
					flag = 1;
					break;
				}
			}
			
			if (flag == 0)
			
				printf("Prime number");
				
			
			else
			
				printf("not prime");
			break;
			
		case 3:
			temp = num ;
			rev= 0;
			
			while ( num > 0)
			{
				digit = num % 10;
				rev = rev * 10 + digit;
				num = num / 10;
;			}
			if (temp==rev)
			  printf("Palindrome Number");
			else
			  printf("not palindrome");
			break;
			
		case 4:
		    if(num>0)
			{
				printf("Number is positive");
				
			  } 
			  else
			  {
			  	if(num<0)
			  	{
			  	  printf("Negative num");	
				  }
			  	else
			  	{
			  		printf("Num is 0");
				  }
			  	
			   }
			   
	    case 5:
		    rev = 0;

            while (num > 0)
            {
                digit = num % 10;
                rev = rev * 10 + digit;
                num = num / 10;
            }

            printf("Reversed Number is: %d", rev);
            
         case 6:   
            sum = 0;

            while (num > 0)
            {
                digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }
             printf("Sum of Digits is: %d", sum);
            break;

        default:
            printf("Invalid Choice");
			
			
	}
}
