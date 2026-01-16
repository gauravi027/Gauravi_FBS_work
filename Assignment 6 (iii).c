----------------------------------------------------------------Assignment 6 -------------------------------------------------------------------------------------------------------------------------
Type 3 = Without parameter Without return type 

---------------------------------------------------------------- Question 1 --------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
void square();
void rectangle();
void triangle();
void circle();
void main()
{
	square();
	rectangle();
	triangle();
	circle();
}
void square()
{
	int side,area;
	printf("Enter side:");
	scanf("%d",&side);
	area = side * side;
	printf("Area is : %d\n",area);
	
}
void rectangle()
{
	int length;
	printf("Enter length: ");
	scanf("%d",&length);
	int breadth;
	printf("Enter breadth: ");
	scanf("%d",&breadth);
	int area;
	area = length * breadth ;
	printf("Area of rectangle: %d\n",area);	
}
void triangle()
{
	int base;
	printf("Enter base: ");
	scanf("%d",&base);
	int height;
	printf("Enter height: ");
	scanf("%d",&height);
	float area;
	area = 0.5 * base * height ;
	printf("Area of triangle: %.2f\n",area);	
}
void circle()
{
	float r;
	float area;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area = 3.14 * r * r;
	printf("Area of circle is : %.2f\n",area);
	
}

------------------------------------------------------------------------- Question 2 ----------------------------------------------------------------------------------------------------------------------
// without parameter without return type//
#include<stdio.h>
void avg();
void main()
{
	avg();
}
void avg()
{
	int avg;
	int a;
	printf("Enter no:");
	scanf("%d",&a);
	int b;
	printf("Enter no:");
	scanf("%d",&b);
	int c;
	printf("Enter no:");
	scanf("%d",&c);
	int d;
	printf("Enter no:");
	scanf("%d",&d);
	int e;
	printf("Enter no:");
	scanf("%d",&e);
	
	avg = (a + b + c + d + e) / 5 ;
	printf("Average is : %d",avg);
}

---------------------------------------------------------------------------------------- Question 3 ---------------------------------------------------------------------------------------------------
// without parameter and without return type//
#include<stdio.h>
void add();//declaration//
void main()
{
	add();//function call//
}
void add()//definition//
{
	int a;
	printf("Enter no:");
	scanf("%d",&a);
	int b;
	printf("Enter no:");
	scanf("%d",&b);
	int sum;
	sum = a + b;
	printf("The Addition of these two numbers is : %d",sum);
}
