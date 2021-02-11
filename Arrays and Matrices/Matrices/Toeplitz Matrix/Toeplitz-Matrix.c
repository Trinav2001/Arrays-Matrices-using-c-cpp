#include<stdio.h>
#include<stdlib.h>
struct Toeplitz
{
	int *A;
	int n;      //size of the array
};

void display(struct Toeplitz m)
{
	printf("\n");
	int i,j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			if(i<=j)
			{
				printf("%d ",m.A[j-i]);
			}
			else if(i>j)
			{
				printf("%d ",m.A[m.n+i-j-1]);
			}
				else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
int main()
{
	struct Toeplitz tp;
	printf("Enter dimensions ");
	scanf("%d",&tp.n);
	int i;
	tp.A = (int *)malloc(((2*tp.n)-1)*sizeof(int));
	printf("\n Enter row 1 of the toeplitz matrix :");
	for(i=0;i<tp.n;i++)
	{
		scanf("%d", &tp.A[i]);
	}
	printf("\nEnter the column elements :");
	for(;i<(2*tp.n)-1;i++)
	{
		scanf("%d", &tp.A[i]);
	}
	display(tp);
	return 0;
}
