------------------------------Question 1--------------------------------
#include<stdio.h>
void main()
{
	int arr[100],n,i;
	int min,max;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	printf("Enter elements of array :\n ");
	for(i=0; i<n ;i++)  //i=0 because elements start filling array from 0th index//
	{
	    scanf("%d",&arr[i]);
	}
	
	min = arr[0];
	max = arr[0];
	
	for(i=1; i< n ; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	printf("Minimum element of array is = %d\n",min);
	printf("Maximum element of array is = %d\n",max);
}

------------------------------Question 2--------------------------------
#include<stdio.h>
void main()
{
	int arr[100],n,i;
	int element;
	int found = 0; //flag variable//
	
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements in array:\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Element to search is : \n ");
	scanf("%d",&element);
	
	for(i=0 ; i<n ; i++)
	{
		if(arr[i] == element)
		{
			printf("Element Found at position %d \n",i);//if want its original position without starting index from 0 do i+1//
			found = 1; //set flag = 1 to stop the loop//
			break;
		}
    }
		if(found == 0)
		{
			printf("Element not yet found");
		}
	
}

------------------------------Question 3--------------------------------
#include<stdio.h>
void main()
{
	int arr[100],n,i;
	int sum = 0;
	
	printf("Enter size of array :\n ");
	scanf("%d",&n);
	
	printf("Enter the elements of array : \n");
	for(i=0 ; i <n ; i++)
	{
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	
	printf("Sum of array is : %d ",sum);
}

------------------------------Question 4--------------------------------
#include<stdio.h>
void main()
{
	int arr[100],n,i;
	int even=0;
	int odd = 0;
	
	printf("Enter size of array :\n ");
	scanf("%d",&n);
	
	printf("Enter the elements of array : \n");
	for(i=0 ; i <n ; i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i = 0 ; i<n ; i++)
	{
		if(arr[i] % 2 == 0)
		{
			printf("these Elements from array are even : %d\n",arr[i]);
			even++;
		}
		else
		{
			printf("these Elements from array are false : %d \n",arr[i]);
			odd++;
		}
	}
	
	printf("EVEN numbers of array are : %d\n ",even);
	printf("ODD numbers of array are : %d\n",odd);
}

------------------------------Question 5--------------------------------
#include<stdio.h>
void main()
{
	int arr[100];
	int n , i;
	
	printf("Enter the size of array:\n ");
	scanf("%d",&n);
	
	printf("Enter the Elements of array :\n");
	for(i= 0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate numbers of array are :\n ");
	for(i=0 ; i<n ; i = i+2)//to print alternate numbers i = i+2//
	{
		printf("%d",arr[i]);
	}
}

------------------------------Question 6--------------------------------
#include<stdio.h>

void main()
{
    int arr[100];
    int n, i, j;
    int Prime;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] <= 1)
        {
            printf("%d is Not Prime\n", arr[i]);
        }
        else
        {
            Prime = 1;   // assume prime

            for(j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    Prime = 0;
                    break;
                }
            }

            if(Prime == 1)
                printf("%d is Prime\n", arr[i]);
            else
                printf("%d is Not Prime\n", arr[i]);
        }
    }
}

------------------------------Question 7--------------------------------
#include<stdio.h>
void main()
{
    int n1, n2 ,n3 , i;
	int arr[100],brr[100];
	int crr[100];
		
	printf("Enter the size of array:\n ");
	scanf("%d",&n1);
	
	printf("Enter the Elements of array arr[] :\n");
	for(i= 0 ; i<n1 ; i++)
	{
		scanf("%d",&arr[i]);
	}

	int brrr[100];
		
	printf("Enter the size of array:\n ");
	scanf("%d",&n2);
	
	printf("Enter the Elements of array brr[] :\n");
	for(i= 0 ; i<n2 ; i++)
	{
		scanf("%d",&brr[i]);
	}
	
	if(n1 == n2 )
	{
		n3 = n2;
		for(i=0 ; i<n3 ; i++)
		{
			crr[i] = arr[i] + brr[i];
		}

	for(i=0 ; i<n3 ; i++)
	{
		printf("Sum is : %d\n",crr[i]);
	}
	}
	else
	{
		printf("Array sizes must be same ");
	}

}

------------------------------Question 8-------------------------------
#include<stdio.h>
void main()
{
	int arr[100],brr[100] , crr[100];
	int n1,n2 ,n3 ,i ;
	
	printf("Enter the size of array:\n ");
    scanf("%d",&n1);

    printf("Enter the Elements of array arr[] :\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the size of array:\n ");
    scanf("%d",&n2);

    printf("Enter the Elements of array brr[] :\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d",&brr[i]);
    }
    
    n3 = n1+n2;
    printf("SIZE OF MERGED ARRAY IS : %d\n",n3);
    
    for( i= 0; i<n1 ; i++)
    {
    	crr[i] = arr[i];
    	printf("The merged array is :\n");
    }
	    for(i=0; i<n2 ; i++)
	    {
	     	crr[n1 + i] = brr[i];
	    
		
	    }
	    printf("The merged array is :\n");
	    for(i=0; i<n3 ;i++)
	    {
	    	printf("%d",crr[i]);
		}
}

------------------------------Question 9(i)-------------------------------
//reverse using same array//
#include<stdio.h>
void main()
{
	int i ,  n;
	int temp;
	int arr[100];
	printf("ENTER THE SIZE OF ARRAY:\n");
		scanf("%d",&n);
	
	
	printf("Elements of array are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i<n/2 ; i++)
	{
		temp = arr[i];
		arr[i]=arr[n-1 -i];
		arr[n-1-i] = temp ;
		
	}
	
	printf("REVERSED ARRAY IS : \n ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}

------------------------------Question 9(ii)-------------------------------
//reverse using different way//
#include<stdio.h>
void main()
{
	int arr[100];
	int rev[100];
	int i ,  n;
	int j=0;
	int temp;

	printf("ENTER THE SIZE OF ARRAY:\n");
		scanf("%d",&n);
	
	 printf("Enter the Elements of array :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
	printf("Elements of array are:\n");
	for (i=0; i<n-1; i++)
	{
		rev[i] = arr[i];
	}
	
	printf("%d",rev[i]);
}
	
------------------------------Question 10-------------------------------
#include<stdio.h>
void main()
{
	int arr[100];
	int n, i ,j ,temp ;
	
	printf("Emter the size of array : \n ");
	scanf("%d",&n);
	
	printf("Enter elements of array :\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	//logic for sorting//
	//compare every array element with next element in it//
	
	for(i=0 ; i<n-1 ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\nSorted array in descended format is : \n");
	for(i=0; i<n ; i++)
	{
		printf("%d",arr[i]);
	}
	
		for(i=0 ; i<n-1 ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\nSorted array in ascending format is : \n");
	for(j=0; j<n ; j++)
	{
		printf("%d",arr[j]);
	}
}
