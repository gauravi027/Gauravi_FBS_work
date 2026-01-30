---------------------------------------------------------------------------Question 1 -------------------------------------------------------------------------------------------
//memcpy()- copies memory
#include<stdio.h>
#include<string.h>
void main()
{
	char src[100];
	printf("String source will be :");
	scanf("%s",src);
	
	char dest[100];
	memcpy(dest,src, strlen(src)+1);//to copy full string safely
	printf("The destination of copied memory will be:%s",dest);
	
	memcpy(dest,src,9);
	dest[9] ='\0';
	//copying only fist 9 lettrs of source-string to destination-string
	printf("The destination with specific string printed will be:%s",dest);
}

---------------------------------------------------------------------------Question 2 -------------------------------------------------------------------------------------------
//memmove()- safe memory copy
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	memmove(str+1,str,5);
	printf("%s",str);
}

---------------------------------------------------------------------------Question 3 -------------------------------------------------------------------------------------------
//memset() - fill memory
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter the string: ");
	scanf("%s",str);
	
	memset(str,'A',15);
	
	str[15] = '\0';
	
	printf("%s",str);
}

---------------------------------------------------------------------------Question 4 -------------------------------------------------------------------------------------------
//memcmp() - compares memory
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	printf("Enter the string s1:");
	scanf("%s",s1);
	
	char s2[100];
	printf("Enter the string s2:");
	scanf("%s",s2);
	
	printf("%d",memcmp(s1,s2,4));
		
}
// if first 4 charachters in the string are correct it will return 0 
//else it will return the difference according to the letters//

---------------------------------------------------------------------------Question 5 -------------------------------------------------------------------------------------------
  //sprintf(stores formatted output in string instead of printing it on screen
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int marks;
	printf("Enter the marks : ");
	scanf("%d",&marks);
	
	sprintf(str,"Marks obtained this semester = %d",marks);
	printf("%s",str);
}

---------------------------------------------------------------------------Question 6 -------------------------------------------------------------------------------------------
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
