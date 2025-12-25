
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