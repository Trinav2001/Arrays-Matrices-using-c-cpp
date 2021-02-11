#include<stdio.h>
#include<stdlib.h>
struct symmetric
{
	int *A;
	int n;
};

void set(struct symmetric *m, int i, int j, int x)
{
	if(i<=j)
	{
		m->A[(j*(j-1)/2) + (i-1)] = x; 
	}
}
void Display(struct symmetric m)
{
	int i,j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			if(i<=j)
			{
				printf("%d ", m.A[(j*(j-1)/2)+(i-1)]);
			}
			else
			{
				printf("%d ", m.A[(i*(i-1)/2)+(j-1)]);
			}
			
		}
		printf("\n");
	}
}
int main()
{
	int i,j,x;
	struct symmetric s;
	printf("Enter the dimensions of the matrix : ");
	scanf("%d", &s.n);
	s.A = (int *)malloc(s.n*(s.n+1)/2 * sizeof(int));
	printf("\nEnter the elements ");
	for(i=1;i<=s.n;i++)
	{
		for(j=1;j<=s.n;j++)
		{
			scanf("%d",&x);
			set(&s,i,j,x);
		}
	}
	printf("\n");
	
	Display(s);
	return 0;
}
