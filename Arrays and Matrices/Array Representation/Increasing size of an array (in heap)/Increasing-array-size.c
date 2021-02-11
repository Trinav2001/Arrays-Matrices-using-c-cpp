#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*p,*q;
	p=(int *)malloc(5*sizeof(int));     //Array of size=5 will be created in heap
	p[0]=0;
	p[1]=1;
	p[2]=2;
	p[3]=3;
	p[4]=4;
	q=(int *)malloc(10*sizeof(int));    //Array of size=10 will be created in heap
	for(i=0;i<5;i++)
	{
		printf("%d ",p[i]);
		q[i]=p[i];
	}
	printf("\n");
	free(p);     //Dealloating p
	p=q;         //pointing p to the new array
	/* Now both p and q are pointing to the same array   */
	q=NULL;      //Only p is pointing to the new array
	printf("New array : \n ");
	for(i=0;i<10;i++)
	{
		if(i>=5)
		{
			p[i]=0;
		}
		printf("%d ",p[i]);
	}
	return 0;
}
