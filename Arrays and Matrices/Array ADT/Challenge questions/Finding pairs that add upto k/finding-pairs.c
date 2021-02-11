#include<stdio.h>

void pairsum1(int *A, int n, int k)          //Method-1
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]+A[j]==k)
			{
				printf("\n(%d,%d)",A[i],A[j]);
			}
		}
	}
}

void pairsum2(int *A, int n, int k)          //Using Hash table
{
	printf("\n\n");
	int max,min,i;
	max=min=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]<min)
		{
			min=A[i];
		}
		else if(A[i]>max)
		{
			max=A[i];
		}
	}
	printf("max = %d\nmin = %d",max,min);
	int H[100]={0};
	for(i=0;i<=max;i++)
	{
		if(H[k-A[i]]!=0)
		{
			printf("\n(%d,%d)",A[i], k-A[i]);
		}
		H[A[i]]++;
	}
}
int main()
{
	int A[20],n,k;
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&A[i]);
	}
	printf("\nk = ");
	scanf("%d",&k);
	pairsum1(A,n,k);
	pairsum2(A,n,k);
	return 0;
}
