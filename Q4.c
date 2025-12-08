#include <stdio.h>

void main(){
	int a = 5 , b = 50 , temp;
	
printf("BEFORE: a=%d , b=%d", a,b);

temp = a;
a = b;
b = temp;

printf("AFTER: a=%d , b=%d ", a,b);
}