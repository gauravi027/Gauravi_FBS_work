------------------------------------------------------------------------Question 1 ----------------------------------------------------------------------
//snprintf() is the safe version of sprintf() 
//it writes formatted output into a string with size limit
#include<stdio.h>
#include<string.h>
void main()
{
	char src[100];
	char dest[100];
	
	printf("Enter the string : ");
	scanf("%99s",src);
	
	snprintf(dest, 10 ,"%s", src );
	
	printf("%s",dest);
}
------------------------------------------------------------------------Question 2 ----------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	puts("hey how are you?");	
	puts("I am Fine dear");
}

------------------------------------------------------------------------Question 3 ----------------------------------------------------------------------
//find vowel-count using function//
#include<stdio.h>
#include<string.h>
int getVowelcount ( char * str);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	
	int vowelcount = getVowelcount(str);
	
	printf("Total vowels are : %d", vowelcount);
}
int getVowelcount ( char * str)
{
	int vowelcount = 0;
	int i = 0;
	while(str[i]!='\0')
	{
		
		char ch= str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			vowelcount++;
		}
		i++;
	}
	return vowelcount;
}
------------------------------------------------------------------------Question 4 ----------------------------------------------------------------------
//palindrome using string functions //

#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	printf("String is : ");
	scanf("%s",str);
	
	char org[100];
	
	strcpy(org,str);
	
	strrev(str);
	puts(str);
	
	int result = strcmp(str,org);
	
	if(result == 0)
	{
		printf("Palindrome");

	}
	else
	{
		printf("Not a pallindrome");
	}
}

------------------------------------------------------------------------Question 5 ----------------------------------------------------------------------

//find length of the string using function//
#include<stdio.h>
#include<stdio.h>
int mystrlen(char* str);
void main()
{
	
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	int length = mystrlen(str);
	printf("Length of string str is %d ",length);
}
int mystrlen(char* str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	
	return i;
}


------------------------------------------------------------------------Question 6 ----------------------------------------------------------------------
//find vowel-count using function//
// without putting  or in it like previous code
#include<stdio.h>
#include<string.h>
int getVowelcount ( char * str);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	
	int vowelcount = getVowelcount(str);
	
	printf("Total vowels are : %d", vowelcount);
}
int getVowelcount ( char * str)
{
	int vowelcount = 0;
	int i = 0;
	while(str[i]!='\0')
	{
		
		char ch= str[i];
		if(strchr("aeiouAEIOU",ch ) != '\0')
		{
			vowelcount++;
		}
		i++;
	}
	return vowelcount;
}

------------------------------------------------------------------------Question 7 ----------------------------------------------------------------------

// to check whether mail or any password or username is valid or not  //
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter the mail : ");
	scanf("%s", str);
	
	char* result1= strchr(str , '@'); //only one @ in mail makes it valid 
	char* result2= strchr(str , '@'); //only one @ in mail makes it valid
	
	if(result1 != NULL && result1 == result2 )
		printf("Mail is valid");
	else
		printf("Mail is not valid");
}
// so as an example built in functions are basically used to check whether mail is valid or not //


------------------------------------------------------------------------Question 8 ----------------------------------------------------------------------

//previously written code can also be written like this

#include<stdio.h>
#include<string.h>
int isMailValid(char* str);
void main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	if (isMailValid(str))
	{
	    printf("Mail is valid");
	}
	else
	{
		printf("Mail isn't valid");	
	}
	   
}
int isMailValid(char* str)
{
	if(strchr(str,'@') != NULL && strchr(str,'@') == strchr(str,'@'))
	    return 1;
	else
	    return 0;
}
