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