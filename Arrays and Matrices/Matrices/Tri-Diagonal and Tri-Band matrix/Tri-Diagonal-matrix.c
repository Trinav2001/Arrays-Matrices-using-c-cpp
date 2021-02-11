#include<stdio.h>
#include<stdlib.h>
struct TriDiagonal
{
	int *A;
	int n;      //size of the array
};

void set(struct TriDiagonal *m, int i, int j, int k)
{
	if(i==j)
	{
		m->A[m->n-1+i-1] = k;
	}
	else if(i-j==1)
	{
		m->A[i-2] = k;
	}
	else if(j-i==1)
	{
		m->A[m->n+m->n-1+i-1] = k;
	}
}
void display(struct TriDiagonal m)
{
	printf("\n");
	int i,j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			if(i==j)
			{
				printf("%d ",m.A[m.n-1+i-1]);
			}
			else if(i-j==1)
			{
				printf("%d ",m.A[i-2]);
			}
			else if(j-i==1)
			{
				printf("%d ",m.A[m.n+m.n-1+i-1]);
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
	struct TriDiagonal td;
	printf("Enter dimensions ");
	scanf("%d",&td.n);
	int i,j,x;
	td.A = (int *)malloc(((3*td.n)-2)*sizeof(int));
	for(i=1;i<=td.n;i++)
	{
		for(j=1;j<=td.n;j++)
		{
			scanf("%d", &x);
			set(&td,i,j,x);
		}
	}
	display(td);
	return 0;
}
