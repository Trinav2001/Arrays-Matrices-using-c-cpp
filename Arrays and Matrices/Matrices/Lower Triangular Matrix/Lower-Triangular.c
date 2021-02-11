#include<stdio.h>
#include<stdlib.h>
struct LowerTri
{
	int *A;
	int n;
};

void set(struct LowerTri *m, int i, int j, int x)
{
	if(i>=j)
	{
		m->A[(i*(i-1)/2) + (j-1)] = x; 
	}
}
void Display(struct LowerTri m)
{
	int i,j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			if(i>=j)
			{
				printf("%d ", m.A[(i*(i-1)/2)+(j-1)]);
			}
			else
			printf("0 ");
		}
		printf("\n");
	}
}
int main()
{
	int i,j,x;
	struct LowerTri lt;
	printf("Enter the dimensions of the matrix : ");
	scanf("%d", &lt.n);
	lt.A = (int *)malloc(lt.n*(lt.n+1)/2 * sizeof(int));
	printf("\nEnter the elements ");
	for(i=1;i<=lt.n;i++)
	{
		for(j=1;j<=lt.n;j++)
		{
			scanf("%d",&x);
			set(&lt,i,j,x);
		}
	}
	printf("\n");
	
	Display(lt);
	return 0;
}
