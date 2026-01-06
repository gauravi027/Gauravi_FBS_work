 **Assignment No:** 01
- **Title:** Decision making statements if-else
- **Date:** 25 December 2025


🟡********** Question 1 **********
//even odd number//


#include <stdio.h>
void main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if (n % 2 == 0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number entered is odd");
	}
}

🟡/********** Question 2 **********/
//to check whether digits are palindrome or not//

#include <stdio.h>

void main(){
	int digit;
	printf("Digits to check palindrome are: ");
	scanf("%d",&digit);
	int n;
	printf("The number is: ");
	scanf("%d",&n);
	int temp,rev;
	
	temp = n;
	rev = 0;
	
	digit = n % 10;
	rev = rev*10+digit;
	n= n/10;
	
	if (temp == rev){
		printf("Number is palindrome");
	}
	else{
		printf("number is not a palindrome");
	}
}

🟡********** Question 3 **********
//Year is leap or not//

#include <stdio.h>

void main(){
	int year;
	printf("Year is: ");
	scanf("%d", &year);
	
	if(year%4==0){
		printf("year is leap");
	
	}
	else {
		printf("Year is not a leap year");
	}
}

🟡********** Question 4 **********
// Character or letter is vowel or not //

#include <stdio.h>

void main(){
	char ch;
	printf("Enter a char:");
	scanf("%c", &ch );
	
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
	{
		printf("Charachter is a vowel");
	}
	else {
	
			printf("charachter entered is not a vowel");
		}
}

🟡********** Question 5 **********
//Chcek eligiblity to vote//

#include <stdio.h>
void main(){
	int age;
printf("Enter Age= ");
scanf("%d",&age);
if (age>=18)
{
	printf("Candidate is eligible to Vote");
}
else 
{
	printf("Not Eligible to vote");
}
}

🟡********** Question 6 **********

//Identify whether character is uppercase or lowercase//

#include<stdio.h>
void main (){
	char alphabet;
	printf("Alphabet is: ");
	scanf("%c",&alphabet);
	
	if(alphabet>='A' && alphabet<='Z')
	{
		printf("Alphabet is Uppercase");
		
	}
	else
	{
		printf("Alphabet is Lowercase");
	}	
}

🟡********** Question 7 **********
//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.//

#include<stdio.h>

void main(){
	int salary,da,ta,hra,total;
	printf("Enter salary: ");
	scanf("%d",&salary);
	
	if(salary<=5000){
		da=salary * 0.10;
		ta=salary * 0.20;
		hra=salary* 07.25;
	}
	else
	{
		da=salary * 0.15;
		ta=salary * 0.25;
		hra=salary * 0.30;
	}
	
	total= salary + da + ta + hra;
	printf("Total = %d",total);
}
