#include<stdio.h>
int main()
{
	int A[20],n,k;
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	int i;
	printf("\nEnter a sorted array");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&A[i]);
	}
	printf("\nk = ");
	scanf("%d",&k);
	i=0;
	int j=n-1;
	while(i<j)
	{
		if(A[i]+A[j]>k)
		{
			j--;
		}
		else if(A[i]+A[j]<k)
		{
			i++;
		}
		else
		{
			printf("\n(%d,%d)",A[i],A[j]);
			i++;
			j--;
		}
		
	}
	
	return 0;
}
