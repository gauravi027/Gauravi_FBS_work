#include <stdio.h>

int main(){
	int n1,n2,n3,n4,n5;
	int sum;
	float avg;
	
	printf("Enter numbers : ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	sum = n1 + n2 + n3 + n4 + n5 ;
	avg = sum / 5.0;
	printf("Average = %.2f",avg);
	
}