#include<stdio.h>

void main(){
	int salary,da,ta,hra,total;
	printf("Enter salary: ");
	scanf("%d",&salary);
	
	if(salary<=5000){
		da=salary * 0.10;
		ta=salary * 0.20;
		hra=salary* 0.25;
	}
	else
	{
		da=salary * 0.15;
		ta=salary * 0.25;
		hra=salary * 0.30;
	}
	
	total= salary + da + ta + hra;
	printf("Total = %d",total);
}