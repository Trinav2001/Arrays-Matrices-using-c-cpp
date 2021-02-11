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

void duplicate(int *A, int n)         
{
	int i,j,count=0;
	for(i=0;i<n-1;i++)
	{
		count = 1;
		if(A[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(A[i]==A[j])
				{
					count++;
					A[j]=-1;
				}
			}
			if(count>1)
			{
				printf("\n%d has %d duplicates",A[i],count);
			}
		}
	}
}
int main()
{
	int A[10],n;
	printf("Enter size of the array : ");
	scanf("%d", &n);
	read(&A,n);
	duplicate(A,n);
	return 0;
}
