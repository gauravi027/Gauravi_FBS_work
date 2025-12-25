
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