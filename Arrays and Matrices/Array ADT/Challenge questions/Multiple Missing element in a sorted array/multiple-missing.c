#include<stdio.h>
#include<stdlib.h>
void read(int A[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}

int singleMissing1(int *A, int n)
{
	int i, sum=0, s=0;
	for(i=0;i<n;i++)
	{
		sum = sum + A[i];
	}
	s = A[n-1]*(A[n-1]+1)/2;
	if(s==sum)
	{
		return 0;
	}
	return s-sum;
}

void multipleMissing(int *A, int n)          // More generalized method
{
	int i, diff;
	diff = A[0]-0;
	for(i=0;i<n;i++)
	{
		if(A[i]-i != diff)
		{
			while(diff<A[i]-i)
			{
				printf("\n%d", i+diff);
				diff++;
			}
		}
	}
	return 0;
}
int main()
{
	int A[10],n;
	printf("Enter size of the array : ");
	scanf("%d", &n);
	read(&A,n);
	multipleMissing(A,n);
	
}
