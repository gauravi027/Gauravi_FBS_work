/*
Assignment 0
Date : 11 Dec 2025
  *

/***************************************************
Question No : 1

Problem Statement:
Write a C program to add two integers and display the result
****************************************************
#include <stdio.h>

void main() {
    int x = 2;
    int y = 3;

    printf("%d", x + y);
}
****************************************************

/***************************************************
Question No : 2

Problem Statement:
Write a C program to find the area of a circle.
****************************************************
#include <stdio.h>

#include <stdio.h>
void main(){
	int r = 5;
	int area = 2 * ( 22 * r * r)/7 ;
	printf("%d" , area);
	
}
****************************************************

/***************************************************
Question No : 3

Problem Statement:
Write a C program to convert temperature from Celsius to Fahrenheit using the
formula:
F = (C *9/5) + 32
****************************************************
# include <stdio.h>

void main(){
	int c = 20;
	int f = ( c * 9/5 )+32 ;
	
	printf ("%d" , f);
}
****************************************************

/***************************************************
Question No : 4

Problem Statement:
Write a C program to swap two numbers using a temporary third variable.
****************************************************
#include <stdio.h>

void main(){
	int a = 5 , b = 50 , temp;
	
printf("BEFORE: a=%d , b=%d", a,b);

temp = a;
a = b;
b = temp;

printf("AFTER: a=%d , b=%d ", a,b);
}
****************************************************

/***************************************************
Question No : 5

Problem Statement:
Write a C program to input five numbers and find their average.
****************************************************
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
****************************************************

/***************************************************
Question No : 6

Problem Statement:
Write a C program to find the square and cube of a given number.
****************************************************
#include <stdio.h>

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d" , &n);
	
	printf("Square of number is %d" ,n*n);
	printf("Cube is %d" , n*n*n);
}
****************************************************

/***************************************************
Question No : 7

Problem Statement:
Write a C program to convert given minutes into hours and remaining minutes.
****************************************************
#include <stdio.h>

void main() {
    int minutes, hours, remain;

    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;       
    remain = minutes % 60;      

    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d\n", remain);


}

****************************************************

/***************************************************
Question No : 8

Problem Statement:
Write a C program to input the length and width of a rectangle and find its perimeter.
****************************************************
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

****************************************************

/***************************************************
Question No : 9

Problem Statement:
Write a C program to input the base and height of a triangle and calculate its area.
****************************************************
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

****************************************************

/***************************************************
Question No : 10

Problem Statement:
Write a C program to input marks of five subjects, find the total marks, and calculate
the percentage.
****************************************************
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

****************************************************




