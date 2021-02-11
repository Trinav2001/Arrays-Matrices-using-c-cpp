#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[5]={};
	int *p;
	p=(int *)malloc(5*sizeof(int));
	p[0]=0;
	p[1]=1;
	p[2]=2;
	p[3]=3;
	p[4]=4;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d ", p[i]);
	}
}
