#include <stdio.h>

void main(){
	int base, height,area ;
	
	printf("Enter base of triangle: ");
	scanf("%d", &base);
	printf("Enter height of Triangle: ");
	scanf("%d", &height);
	
	area = 0.5 * base * height ;
	
	printf("%d",area);
}