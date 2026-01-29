--------------------------------------------------------------------------------Question 1 -----------------------------------------------------------------------------------------------
//finding length of string//
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string : ");
	scanf("%s",&str);
	int len =strlen(str);
	
	printf("Length if the string is : %d",len);
}

--------------------------------------------------------------------------------Question 2 -----------------------------------------------------------------------------------------------
//copy array from source to destination//

#include<stdio.h>
#include<string.h>
void main()
{
	char src[100];
	printf("Enter the source:  ");
	scanf("%s",src);//& is not required for arrays//
	
	char dest[100];
	
	strcpy(dest,src);//according to syntax destination coms first here//
	
	printf("Actual source is :%s ",src);
	printf("The destination is:%s",dest);
	printf("\n");
}

--------------------------------------------------------------------------------Question 3 -----------------------------------------------------------------------------------------------
// strncpy copies first n characters //
#include<stdio.h>
#include<string.h>

void main()
{
	char src[100];
	printf("Enter the string : ");
	scanf("%s",src);
	
	char dest[100];
	
	strncpy(dest,src,6);
	dest[6]='\0';
	
	printf("%s",dest);
	
}

--------------------------------------------------------------------------------Question 4 -----------------------------------------------------------------------------------------------
//strcat concatenates two strings//
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	printf("Enter the first string : ");
	scanf("%s",s1);
	char s2[100];
	printf("Enter second string : ");
	scanf("%s",s2);
	
	strcat(s1,s2);
	
	printf("%s",s1);
}

--------------------------------------------------------------------------------Question 5 -----------------------------------------------------------------------------------------------
//strcmp compares the strings
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	printf("enter strung : ");
	scanf("%s",s1);
	char s2[100];
	printf("Enter string : ");
	scanf("%s",s2);
	
	strcmp(s1,s2);
	
	if( s1 == s2) //here 0 is equal and any non zero is not equal//
	{
		printf("String is equal");
	}
	else
	{
		printf("String is unequal");
	}
}
  
--------------------------------------------------------------------------------Question 6 -----------------------------------------------------------------------------------------------
//strcmp compares first n characters in strings//
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100];
    printf("Enter the string s1: ");
    scanf("%s",s1);
    char s2[100];
    printf("Enter the string s2: ");
    scanf("%s",s2);
    
    int size;
    printf("Enter the letters you want to be same: ");
    scanf("%d",&size);
    
    if(strncmp(s1,s2,size)==0)
    {
    	printf("FIRST %d LETTERS ARE EQUAL IN BOTH SRINGS ",size);
	}
	else
	{
		printf("NO %d LETTERS ARE EQUAL IN BOTH STRINGS ",size);
	}
    
}


--------------------------------------------------------------------------------Question 7 -----------------------------------------------------------------------------------------------
//strchr 
#include<stdio.h>
#include<string.h>

void main()
{
	char s1[100];
	printf("String is:");
	scanf(" %s",s1);
	
	char ch;
	printf("Enter the character to be searched:");
	scanf(" %c",&ch);
	
	char* ptr;
	
	ptr = strchr(s1,ch);
	
	
	if(ptr != NULL)//NULL is written in capital because null is macro not  a variable
	{
		printf("Charachter %c found at location %ld ",ptr,ptr-s1);
	}
	else
	{
		printf("character not found ",ptr);
	}
}

--------------------------------------------------------------------------------Question 8 -----------------------------------------------------------------------------------------------
//strrchr last occurence of charachter from the string//
#include<stdio.h>
#include<string.h>
void main()
{
	
	char str[100];
	printf("The string is :");
	scanf("%s",str);
	
	char ch;
	printf("Enter the charachter to be searched for occurence from string: ");
	scanf(" %c",&ch); // give space before %c otherwise it reads \n, not the character you type.
	
	char* ptr = strrchr(str,ch);
	
	if( ptr != NULL)
	{
		printf("The charachter %c found at position %ld from the string",ch, ptr-str );
	}
	else
	{
		printf("The charachter %c not found in the string",ch);
	}
	
}
--------------------------------------------------------------------------------Question 9 -----------------------------------------------------------------------------------------------
//strstr  to find the substring//
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter the string: ");
	scanf(" %s",str);
	
	char str2[100];
	printf("Enter the substring to search in string 1 : ");
	scanf(" %s",str2);
	
	if(strstr(str,str2)!=NULL)
	{
		printf("Substring found");
		
	}
	else
	{
		printf("Substring not found");
	}
}
--------------------------------------------------------------------------------Question 10 -----------------------------------------------------------------------------------------------
//STRTOK() SPLITS THE STRING INTO TOKENS//
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter string string:");
	scanf("%s",str);
	
	char * token =strtok(str,",");
	
	while(token != NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL,",");
	}
}
--------------------------------------------------------------------------------Question 11 -----------------------------------------------------------------------------------------------
//strspn() -  finds lenght of matching charachters 
#include<stdio.h>
#include<string.h>
void main()
{
	int length;
	char s1[100];
	printf("Enter the string s1: ");
	scanf("%s",s1);
	
	char s2[100];
	printf("Enter the string s2: ");
	scanf("%s",s2);
	
    length = strspn(s1,s2);
	
	if(length > 0)
	{
		printf("The length of matching charachters is: %d ",length);
	}
	else
	{
		printf("There are no matching charachters in both the strings");
		
	}
}
--------------------------------------------------------------------------------Question 12 -----------------------------------------------------------------------------------------------
//strcspn() - gives the length before any match meanssssss Count until characters MATCH
#include<stdio.h>
#include<string.h>
void main()
{
	int length;
	char s1[100];
	printf("Enter the string s1:");
	scanf("%s",s1);
	
	char s2[100];
	printf("Enter the string s2:");
	scanf("%s",s2);
	
	length=strcspn(s1,s2);	
	

	printf("The length of string before match is : %d",length);

}
--------------------------------------------------------------------------------Question 13 -----------------------------------------------------------------------------------------------
//strlwr() - converts whole string into lowercase
//strupr() - converts the whole string into uppercase
#include<stdio.h>
#include<string.h>
void main()
{
	
	char str[100];
	printf("Enter the string : ");
	scanf("%s",str);
	
	
	printf("The string in lowercase is :%s\n",strlwr(str));
	printf("The string in uppercase is :%s\n",strupr(str));
}
--------------------------------------------------------------------------------Question 14 -----------------------------------------------------------------------------------------------
//strrev() - reverses the string // 
#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	printf("Enter the string :");
	scanf("%s",str);
	
	printf("The reverse of the string is:%s\n",strrev(str));
}
--------------------------------------------------------------------------------Question 15 -----------------------------------------------------------------------------------------------
//strdup() - duplicates the string // 
#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	printf("Enter the string :");
	scanf("%s",str);
	
	printf("The duplicate string is:%s\n",strdup(str));
}
