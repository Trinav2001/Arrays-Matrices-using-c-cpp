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

int linearSearch( struct Array arr,int key)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]==key)
		{
			return i;
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
	printf("\nEnter the numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	arr.length = n;
	Display(arr);
	printf("\n Enter the number to be searched ");
	scanf("%d",&key);
	printf("The element is found at location %d", linearSearch(arr,key));
	return 0;
}
