#include<stdio.h>
#include<stdlib.h>
struct Diagonal
{
	int A[10];
	int n;      //size of the array
};

void set(struct Diagonal *m,int i,int j,int k)
{
	if(i==j)
	{
		m->A[i-1]=k;
	}
}
int get(struct Diagonal m, int i, int j)
{
	if(i==j)
	{
		return m.A[i-1];
	}
	else
	{
		return 0;
	}
}
void display(struct Diagonal m)
{
	printf("\n");
	int i,j;
	for(i=0;i<m.n;i++)
	{
		for(j=0;j<m.n;j++)
		{
			if(i==j)
			{
				printf("%d ",m.A[i]);
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
	struct Diagonal m;
	m.n=4;
	set(&m,1,1,4);
	set(&m,2,2,1);
	set(&m,3,3,6);
	set(&m,4,4,9);
	printf("%d ",get(m,2,2));
	display(m);
	return 0;
}
