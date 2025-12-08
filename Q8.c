#include <stdio.h>

void main(){
	int length, width, perimeter ;
	
	printf("Enter length : ");
	scanf("%d",&length);
	printf("Enter width: ");
	scanf("%d",&width);
	
	perimeter = 2*(length + width);
	printf("%d",perimeter);
}