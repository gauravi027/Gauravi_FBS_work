-------------------------------------------------------------------- QUESTION 1 ---------------------------------------------------------------

#include<stdio.h>
void evenodd(int*n);
void main()
{
	int num;
	printf("Enter number to identify whether even or odd : ");
	scanf("%d",&num);
	
	evenodd(&num);
	
}
void evenodd(int*n)
{
	if((*n) % 2 == 0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is Odd");
	}
}

-------------------------------------------------------------------- QUESTION 2 ---------------------------------------------------------------

#include<stdio.h>
void check(int *n);
void main()
{
	int num;
	printf("Number to check positive , negative or 0 : ");
	scanf("%d",&num);
	
	check(&num);
}
void check(int *n)
{
	if((*n) > 0)
	{
		printf("Number is positvie");
	}
	else
	{
		if((*n) < 0)
		{
		   printf("Number is negative");
		}
		else
		{
			printf("Number is 0");
		}
	}
}
-------------------------------------------------------------------- QUESTION 3 ---------------------------------------------------------------

#include<stdio.h>
void arearectangle(int *l,int *b);
void main()
{
	int length;
	printf("Enter length of Rectangle : ");
	scanf("%d",&length);
	
	int breadth;
	printf("Enter the breadth of rectangle : ");
	scanf("%d",&breadth);
	
	arearectangle(&length,&breadth);

}
void arearectangle(int *l,int *b)
{
	int area;
	area = (*l) * (*b);
	printf("Area of rectangle is : %d ",area);
}
-------------------------------------------------------------------- QUESTION 4 ---------------------------------------------------------------

#include<stdio.h>
void trianglearea(float *b,float *h);
void main()
{
	float base;
	printf("Enter base of triangle : ");
	scanf("%f",&base);
	
	float height;
	printf("Enter the height of triangle : ");
	scanf("%f",&height);
	
	trianglearea(&base , &height);

}
void trianglearea(float *b,float *h)
{
	float area;
	area = 0.5 * (*b) * (*h);
	printf("Area of Triangle is : %.2f ",area);
}
-------------------------------------------------------------------- QUESTION 5 ---------------------------------------------------------------

#include<stdio.h>
void average(int* a;int* b;int* c;int* d;int* e);
void main()
{
	int avg;
	int a;
	printf("Enter number a: ");
	scanf("%d",&a);
	int b;
	printf("Enter number b: ");
	scanf("%d",&b);
	int c;
	printf("Enter number c: ");
	scanf("%d",&c);
	int d;
	printf("Enter number d: ");
	scanf("%d",&d);
	int e;
	printf("Enter number e: ");
	scanf("%d",&e);
	
	average(&avg);
	
}
void average(int* a;int* b;int* c;int* d;int* e)
{
     avg = (a + b + c + d + e)/s;
     printf("Average is : %d",avg)
}

-------------------------------------------------------------------- QUESTION 6 ---------------------------------------------------------------
#include<stdio.h>
void circlearea(float *radius);
void main()
{
	float radius;
	printf("Enter Radius of circle : ");
	scanf("%f",&radius);
	

	circlearea(&radius);

}
void circlearea(float *radius)
{
	float area;
	area = 3.14 * (*radius) * (*radius);
	printf("Area of circle is : %.2f ",area);
}
