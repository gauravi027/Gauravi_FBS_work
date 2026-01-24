-----------------------------------------Question 1 -------------------------------------------
//to print prime numbers from array
#include<stdio.h>
void main()
{
	int arr[100];
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);
	displayarray(arr,size);
	displayprime(arr,size);
	
}
void displayarray(int* ptr ,int size)
{
	printf("Enter the elements in array :\n");
	for(int i=0 ; i< size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Elements in array are :\n");
	for(int i=0 ; i< size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
}
void displayprime(int* ptr , int size)
{
	int isprime;
	printf("The prime numbers from array are:\n");
	for(int i=0; i<size; i++)
	{
		int num = ptr[i];
		isprime = 1;
		
		if(num<=1)
		{
			isprime=0;
		}
		else
		{
			for(int j=2; j*j<=num ;j++)
			{
				if (num % j == 0)
				{
					isprime=0;
					break;
				}
			}
		}
		if(isprime)
		{
			printf("Prime number is :%d",num);
		}
		else
		{
			printf("Number which is not from array prime is :%d",num);
		}
		printf("\n");
	}
}
-----------------------------------------Question 2 -------------------------------------------
//to display 2 arrays taking input and addition of both array in third array and display third array 
#include<stdio.h>
void display(int* ptr, int size);
void addarray(int* a ,int* b, int* c ,int size);
void main()
{
	int size;
	int arr[100], brr[100] , crr[100];
	printf("Enter the size of arrays:\n");
	scanf("%d",&size);
	printf("Enter elements of array arr[]:\n");
	for(int i=0; i<size ; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter elements of array brr[]:\n");
	for(int i=0; i<size ; i++)
	{
		scanf("%d",&brr[i]);
	}
	
	addarray( arr, brr , crr , size);
	
	printf("Array arr:\n");
	display(arr,  size);
	
	printf("\nArray brr:\n");
	display(brr, size);
	
	printf("\nArray crr:\n");
	display(crr,size);
}

void addarray(int* a, int* b, int* c ,int size)
{
	int crr[100];
	printf("Addition of array arr[] and brr[]:\n");
	for(int i=0; i< size ; i++)
	{
		c[i] = a[i] + b[i];
	}
	printf("\n");
}

void display(int* ptr, int size)
{
	printf("The elements of array arr[] are:\n");
	for(int i=0 ; i<size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
    printf("\n");
}

-----------------------------------------Question 3 -------------------------------------------
  //merge both array

#include<stdio.h>
void mergearray(int* a, int* b, int* c ,int size1 , int size2);
void display(int* ptr,  int size);
void main()
{
	int arr[100], brr[100],crr[100];

	int size1, size2;
	
	printf("Enter size of array arr[]:\n");
	scanf("%d",&size1);
	
	
	printf("Enter elements of array arr[]:\n");
	for(int i=0; i<size1 ; i++)
	{
		scanf("%d",&arr[i]);
	}

   	printf("Enter size of array brr[]:\n");
	scanf("%d",&size2);
    
	printf("Enter elements of array brr[]:\n");
	for(int i=0; i<size2 ; i++)
	{
		scanf("%d",&brr[i]);
	}
	
	mergearray( arr, brr , crr , size1 , size2);
		
	printf("Array arr:\n");
	display(arr,  size1);
	
	printf("\nArray brr:\n");
	display(brr,  size2);
	
	printf("\nMerged Array crr:\n");
	display(crr,size1+size2);
}

void mergearray(int* a, int* b, int* c ,int size1 , int size2)
{
	
	int k = 0;
	printf("Addition of array arr[] and brr[]:\n");
	for(int i=0; i< size1 ; i++)
	{
		c[k]= a[i];
		k++;
	}
	for(int i=0; i< size2 ; i++)
	{
		c[k]= b[i];
		k++;
	}
	printf("\n");
}

void display(int* ptr, int size)
{
	printf("The elements of array are:\n");
	for(int i=0 ; i<size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
	
    printf("\n");
}

-----------------------------------------Question 4 -------------------------------------------
//reverse array
#include<stdio.h>
void reversed(int* ptr, int size);
void main()
{
	int i ,  size;

	int arr[100];
	printf("ENTER THE SIZE OF ARRAY:\n");
	scanf("%d",&size);
	
	
	printf("Elements of array are:\n");
	for(int i=0; i<size ;i++)
	{
		scanf("%d",&arr[i]);
	}
	reversed(arr,size);
}
void reversed(int* ptr, int size)
{
	int temp;
	for(int i=0 ; i<size/2 ; i++)
	{
		temp = ptr[i];
		ptr[i]=ptr[size-1 -i];
		ptr[size-1-i] = temp ;	
	}
	
	printf("REVERSED ARRAY IS : \n ");
	for(int i=0;i<size;i++)
	{
		printf(" %d ",ptr[i]);
	}
} 

-----------------------------------------Question 5 -------------------------------------------
  #include<stdio.h>
void descending(int* ptr, int size);
void ascending(int* ptr, int size);
void main ()
{
	int arr[100];
	int size ;
	
	printf("Emter the size of array : \n ");
	scanf("%d",&size);
	
	printf("Enter elements of array :\n");
	for(int i=0 ; i<size ; i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("elements of array :\n");
	for(int i=0 ; i<size ; i++)
	{
		printf(" %d ",arr[i]);
		
	}
	descending(arr,size);
	ascending(arr, size);
}

void descending(int* ptr, int size)
{
	
	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j=i+1 ; j<size ; j++)
		{
			if(ptr[i] < ptr[j])
			{
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	
	printf("\nSorted array in descended format is : \n");
	for(int i=0; i<size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
}

void ascending(int* ptr, int size)
{	
	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j=i+1 ; j<size ; j++)
		{
			if(ptr[i] > ptr[j])
			{
				int  temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	
	printf("\nSorted array in ascending format is : \n");
	for(int j=0; j<size ; j++)
	{
		printf(" %d ",ptr[j]);
	}
}
