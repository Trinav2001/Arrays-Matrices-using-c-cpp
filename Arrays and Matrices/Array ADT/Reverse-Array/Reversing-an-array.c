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

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b= temp;
}

void Reverse1(struct Array *arr)
{
	int *B,i,j;
	B=(int *)malloc(arr->length*sizeof(int));
	for(i=0, j=arr->length-1;j>=0;i++,j--)
	{
		B[i] = arr->A[j];
	}
	for(i=0;i<arr->length;i++)
	{
		arr->A[i] = B[i];
	}
}

void Reverse2(struct Array *arr)
{
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
	}
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
	Reverse2(&arr);
	printf("\nAfter Reversing \n");
	Display(arr);
	return 0;
}
