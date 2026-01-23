------------------------------------Question 1---------------------------------------------------
//find min and max num in array using functions//
#include<stdio.h>
void main()
{
	int arr[100];
	int size;
	printf("size of array is:\n ");
	scanf("%d",&size);

	find(arr,size);
	
}
void find(int* ptr ,int size, int no)
{
	int min , max;
		printf("Elements in array are:\n");
	for(int i=0; i<size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Elements in array are:\n");
	for(int i=0; i<size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
	
	min = ptr[0];
	max = ptr[0];
	
	for(int i = 1; i< size ; i++)
	{
		if(ptr[i]>max)
			max=ptr[i];
		if(ptr[i]<min)
			min=ptr[i];
		
	}
	
		printf("maximum number is = %d\n",max);
		printf("minimum number is = %d\n",min);
}

-----------------------------------------------Question 2 ----------------------------------------------------
#include<stdio.h>
void main()
{
	int arr[100];
	int size ;
	printf("Enter the size of array :\n");
	scanf("%d",&size);
	
	storearray(arr,size);
	displayarray(arr,size);

	printf("\n");	
    printf("Enter number you want to search in an array:\n ");
    int no;
    scanf("%d",&no);
    int index = search(arr,10,no);
    if (index!=-1)
    {
    	printf("Found number at %d index",index);
	}
	else
	{
		printf("Index not found");
	}
	printf("\n");
	
}

void storearray(int* ptr, int size )
{
	printf("Enter elements of array:\n");
	for(int i=0 ; i<size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
}
void displayarray(int* ptr , int size)
{
	printf("Array is :\n ");
	for(int i = 0 ; i< size ; i++)
	{
		printf(" %d, ",ptr[i]);
	}
}

int search(int* ptr,int size,int no)
{
	for(int i=0; i< size ; i++)
	{
		if(ptr[i] == no)
		return i;
	}
	return -1;
}


--------------------------------------------------Question 3 -------------------------------------------------------
#include<stdio.h>
void displayarray(int* ptr, int size);
void addarray(int* ptr, int size);
void main()
{
	int arr[100];
	int size;
	printf("Enter size of array :\n ");
	scanf("%d",&size);
	displayarray(arr,size);
	addarray(arr,size);
	
}
void displayarray(int* ptr, int size)
{
	printf("Enter elements of array :\n ");
	for(int i=0 ; i<size ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Array is :\n");
	for(int i=0 ; i<size ; i++)
	{
		printf(" %d ",ptr[i]);
	}
	printf("\n");
	
}

void addarray(int* ptr,  int size)
{
	int sum = 0;
	for(int i=0 ; i<size ; i++)
	{
		sum = sum + ptr[i];
	}
	
	printf("The sum of arrray is : %d\n",sum);
}

-------------------------------------------------------Question 4 ----------------------------------------------------
#include<stdio.h>
void displayarray(int* ptr , int size);
void evenodd(int* ptr , int size);
void main()
{
	int arr[100];
	int size;
	printf("Enter the size of array :\n");
	scanf("%d",&size);
	
	displayarray(arr,size);
	evenodd(arr,size);
	
}
void displayarray(int* ptr , int size)
{
	
	printf("Elements of array are:\n");
	for(int i=0; i<size ;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Array is :\n");
	for(int i=0; i<size ; i++)
	{
		printf("%d",ptr[i]);
	}
	printf("\n");
}

void evenodd(int* ptr , int size)
{
	int even = 0;
	int odd = 0;
	for(int i=1;i<size;i++)
	if(ptr[i] % 2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	printf("\n");
	
	printf("Even numbers are :%d\n",even);
	printf("Odd numbers are :%d\n",odd);
}

------------------------------------------------------Question 5 ------------------------------------------------------------
#include<stdio.h>
void display(int* ptr, int size);
void alternate(int* ptr ,int size);
void main()
{
	int arr[100];
	int size;
	
	printf("Enter the size of array :\n");
	scanf("%d",&size);
	
	display(arr,size);
	alternate(arr,size);
}
void display(int* ptr, int size)
{
	printf("Enter the elements in array:\n");
	for(int i=0 ; i< size; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("array is:\n");
	for(int i = 0; i< size ;i++)
	{
		printf(" %d ",ptr[i]);
	}
	printf("\n");
}
void alternate(int* ptr ,int size)
{
	printf("Alternate elements of array are : \n");
	for(int i=0; i<size ;i = i+2)
	{
		printf("%d",ptr[i]);
	}
	
	printf("\n");
}
