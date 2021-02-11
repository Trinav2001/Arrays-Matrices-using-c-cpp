#include<stdio.h>
#include<stdlib.h>

struct Array 
{
	int *A;
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	printf("\nThe elements in the array are :");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

int binarySearch( struct Array arr,int key)
{
	int l=0 , u , mid;
	u = arr.length;
	while(l<=u)
	{
		mid = (l+u)/2;
		if(arr.A[mid]==key)
		{
			return mid;
		}
		else if(key<arr.A[mid])
		{
			u = mid-1;
		}
		else
		{
			l=mid + 1;
		}
	}
	return -1;
}

int RbinSearch(int A[], int l, int u, int key)
{
	int mid;
	if(l<=u)
	{
		mid = (l+u)/2;
		if(A[mid]== key)
		{
			return mid;
		}
		else if (key<A[mid])
		{
			return RbinSearch(A, l, mid-1,key);
		}
		else
		{
			return RbinSearch(A, l+1,u,key);
		}
	}
	return -1;
}



int main()
{
	struct Array arr;
	int n,i,key; 
	printf("Enter the size of the array ");
	scanf("%d",&arr.size);
	arr.A = (int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("\n\nEnter how many numbers you want to enter ");
	scanf("%d",&n);
	printf("\nEnter the numbers in ascending order : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length = n;
	Display(arr);
	printf("\nEnter the number to be searched ");
	scanf("%d",&key);
	printf("The element is found at location %d", binarySearch(arr,key));
	printf("\nUsing Recursive function, %d is found at location %d",key,RbinSearch(arr.A,0,arr.length-1,key));
	return 0;
}
