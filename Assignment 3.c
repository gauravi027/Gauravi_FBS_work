Assignment = 3
Date = 01 January 2026

*********************************** Question 1 ******************************************
  
Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10
_________________________________________________________________________________________  
  
#include<stdio.h>

void main(){
	for(int a=1; a<=10 ; a++)
	{
		printf("%d\n",a);
	}
}
______________________________________________________________________________________

*********************************** Question 2 ******************************************
  
Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50
_________________________________________________________________________________________  

#include<stdio.h>
void main(){
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
}

______________________________________________________________________________________

*********************************** Question 3 ******************************************
  
Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15
_________________________________________________________________________________________  

#include<stdio.h>
void main(){
	int start,end,i;
	int sum =0;
	
	printf("Enter starting num:");
	scanf("%d",&start);
	printf("Enter ending num:");
	scanf("%d",&end);
	
	
	for( i = start;i<=end;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	
}

______________________________________________________________________________________

*********************************** Question 4 ******************************************
  
Check the given number is prime or not.
Input: n = 7
Output: Prime
_________________________________________________________________________________________  

#include<stdio.h>
void main(){
	int n , i;
	printf("ENTER THE NUMBER TO CHECK WHETHER IT IS PRIME OR NOT: ");
	scanf("%d",&n);
	
	if(n<=1){
		printf("NUMBER IS NOT PRIME:");
		
	}
	for(i=2; i<=n/2 ;i++)
	{
		if (n%i==0){
			printf("The number is not prime");
		}
	}
	
	printf("Prime");
}

______________________________________________________________________________________

*********************************** Question 5 ******************************************

Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong 
_________________________________________________________________________________________  

#include<stdio.h>
#include<math.h>
void main()
{
	int n,temp,digit;
	int count = 0;
	int sum = 0;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(temp=n;temp>0;temp = temp/10){
		count++;
		
	}
	for(temp=n;temp>0;temp = temp/10){
		digit = temp % 10;
		sum = sum + pow(digit,count );
	}
	if(sum==n){
		printf("ARMSTRONG");
	}
	else
	{
		printf("Not Armstrong number");
	}
}

______________________________________________________________________________________

*********************************** Question 6 ******************************************

Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect 
_________________________________________________________________________________________ 

#include<stdio.h>

void main(){
	int n,i ;
	int sum=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i = 1;i < n; i++)
	{
		if( n%i==0) //check that i is divisor of n//
		{
			sum= sum  + i; //add divisor to the number//
			
		}
	}
	
	if(sum==n){
		printf("Number is Perfect");
		
	}
	else
	{
		printf("Number is not perfect");
	}
}

______________________________________________________________________________________

*********************************** Question 7 ******************************************
Find factorial of given number.
Input: n = 5
Output: 120
_________________________________________________________________________________________ 

#include<stdio.h>
void main(){
	int i,n;
	int fact=1;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is:",fact);
}

______________________________________________________________________________________

*********************************** Question 8 ******************************************
Check the given number is Strong number or not.
Input: n = 145
Output: Strong
_________________________________________________________________________________________ 

#include<stdio.h>
void main(){
	int n,digit,temp;
	int sum = 0;
	int fact,i;
	
	printf("enter number:");
	scanf("%d",&n);
	
	temp=n;
	
	for(;n>0; n=n/10)
	{
		digit = n%10;
	}
	
	fact=1;
	for(i=1; i<=digit ; i++)
	{
		fact=fact*i;
	}
	sum = sum + fact;
}

if (sum == temp)
{
	printf("Strong num");
}
else
{
	printf("Not strong num");
}

______________________________________________________________________________________

*********************************** Question 9 ******************************************
Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome
_________________________________________________________________________________________ 

#include<stdio.h>

void main(){
	int n;
	int temp,rev,digit4;
	printf("Enter number:");
	scanf("%d",&n);
	
	temp=n;
	rev=0;
	
	for(n=n;n>0;n/=10)
	{
		digit = n% 10;
		rev = rev * 10 + digit;
	}
	
	if(rev==temp)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not a palindrome");
		
	}
}

______________________________________________________________________________________

*********************************** Question 10 ******************************************
Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)
_________________________________________________________________________________________ 

#include<stdio.h>
void main(){
	int n;
	int temp,first,last,sum;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	temp=n;
	
	last=n%10;
	
	for(;n>9;){
		n/=10;//HERE INITIALIZATION is empty and UPDATE is done on next line//
	
	}
	first=n;
	sum= first+last;
	
	printf("%d",sum);
	
}

___________________________________________________________________________________________
