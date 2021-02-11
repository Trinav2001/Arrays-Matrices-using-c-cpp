#include<stdio.h>
int main()
{
	int A[10]={12,80,90,76,1,0,5,10,-1,7};
	int i,max,min;
	max=A[0];
	min=A[0];
	for(i=1;i<10;i++)
	{
		if(A[i]<min)
		{
			min=A[i];
		}
		else if(A[i]>max)
		{
			max=A[i];
		}
	}
	printf("\nmax = %d \nmin = %d",max,min);
	return 0;
}
