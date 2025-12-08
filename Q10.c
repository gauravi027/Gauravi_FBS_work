#include <stdio.h>

void main(){
	int sub1 = 20;
	int sub2 = 30;
	int sub3 = 60;
	int sub4 = 70;
	int sub5 = 10;
	
	int total;
	float percentage;
	
	total = sub1 + sub2 + sub3 + sub4 + sub5 ;
	percentage = (total / 5.0);
	
    printf("Marks of 5 subjects: %d, %d, %d, %d, %d\n", sub1, sub2, sub3, sub4, sub5);
	printf ("Total marks are: %d",total);
	printf ("Percentage: %.2f",percentage);
}