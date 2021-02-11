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

int singleMissing2(int *A, int n)          // More generalized method
{
	int i, diff;
	diff = A[0]-0;
	for(i=0;i<n;i++)
	{
		if(A[i]-i != diff)
		{
			return (diff+i);
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
	printf("%d",singleMissing1(A,n));
	printf("\n%d",singleMissing2(A,n));
	
}
