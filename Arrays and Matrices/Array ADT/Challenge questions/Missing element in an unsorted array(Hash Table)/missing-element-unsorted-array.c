#include<stdio.h>
#include<stdlib.h>
void read(int *A, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}

int ma(int *A, int n)
{
	int max=A[0],i;
	for(i=1;i<n;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
		}
	}
	return max;
}

int mi(int *A, int n)
{
	int min=A[0],i;
	for(i=1;i<n;i++)
	{
		if(A[i]<min)
		{
			min = A[i];
		}
	}
	return min;
}

void multipleMissing(int *A, int n, int *H, int max, int min)          // More generalized method
{
	int i;
	for(i=0;i<n;i++)
	{
		H[A[i]]++;
	}
	for(i=min;i<=max;i++)
	{
		if(H[i]==0)
		{
			printf("\n%d", i);
		}
	}
}
int main()
{
	int max,min,A[10],n;
	printf("Enter size of the array : ");
	scanf("%d", &n);
	read(&A,n);
	max = ma(&A,n);
	min = mi(&A,n);
	printf("\nmax = %d", max);
	printf("\nmin = %d", min);
	int H[100]={0};
	multipleMissing(A,n,H,max,min);
	return 0;
}
