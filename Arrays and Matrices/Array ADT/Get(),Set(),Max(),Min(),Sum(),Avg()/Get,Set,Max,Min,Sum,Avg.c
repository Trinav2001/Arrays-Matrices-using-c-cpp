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

int Get(struct Array arr, int index)
{
	if(index>=0 && index<arr.length)
		return arr.A[index];
	return -1;
}

void Set(struct Array *arr, int x, int index)
{
	if(index>=0 && index<arr->length)
	{
		arr->A[index] = x;
	}
}

int Max(struct Array arr)
{
	int i,max;
	max = arr.A[0];
	for(i=1;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		{
			max = arr.A[i];
		}
	}
	return max;
}

int Min(struct Array arr)
{
	int i,min;
	min = arr.A[0];
	for(i=1;i<arr.length;i++)
	{
		if(arr.A[i]<min)
		{
			min = arr.A[i];
		}
	}
	return min;
}

int Sum(struct Array arr)
{
	int sum=0, i;
	for(i=0;i<arr.length;i++)
	{
		sum+=arr.A[i];
	}
	return sum;
}

float Avg(struct Array arr)
{
	int sum=0, i;
	for(i=0;i<arr.length;i++)
	{
		sum+=arr.A[i];
	}
	float avg = 0.0;
	avg = (float)sum/arr.length; 
	return avg;
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
	printf("\n%d",Get(arr, 2));
	Set(&arr, 10, 3);
	Display(arr);
	printf("\n\n Max = %d", Max(arr));
	printf("\n\n Min = %d", Min(arr));
	printf("\n\n Sum of the elements = %d", Sum(arr));
	printf("\n\n Average of the elements = %f", Avg(arr));
	return 0;
}
