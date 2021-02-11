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

void append(struct Array *arr, int x)
{
	printf("\n\nAdding %d in the array ",x);
	arr->A[arr->length] = x;
	arr->length ++;
	printf("\n");
}

void inserting(struct Array *arr,int y, int index )
{
	int i;
	for(i=arr->length;i>index;i--)
	{
		arr->A[i]=arr->A[i-1];
	}
	arr->A[i] = y;
	arr->length ++;
	printf("\n\nAfter Inserting %d at %d location",y,index);
		
}

int deleting(struct Array *arr, int index)
{
	int i,a;
	a = arr->A[index];
	for(i=index;i<arr->length-1;i++)
	{
		arr->A[i] = arr->A[i+1];
	}
	arr->length--;
	return a; 
}
int main()
{
	struct Array arr;
	int n,i; 
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
	append(&arr, 10);
	Display(arr);
	inserting(&arr,5,2);
	Display(arr);
	printf("\n\nDeleted element is %d", deleting(&arr,4));
	Display(arr);
	return 0;
}
