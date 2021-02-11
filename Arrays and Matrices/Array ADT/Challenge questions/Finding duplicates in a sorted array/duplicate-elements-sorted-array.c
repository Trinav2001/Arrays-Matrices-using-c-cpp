#include<stdio.h>

void create(int *A, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("\n%d", &A[i]);
	}
}

void duplicates(int A[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		if(A[i]==A[i+1])
		{
			j=i+1;
			while(A[j]==A[i])
			{
				j++;
			}
			printf("\n%d is present %d times",A[i], j-i);
			i=j-1;	
		}
		
	}
}
int main()
{
	int A[15],n;
	printf("Enter number of elements in the array : ");
	scanf("%d", &n);
	create(&A, n);
	duplicates(A,n);	
}
