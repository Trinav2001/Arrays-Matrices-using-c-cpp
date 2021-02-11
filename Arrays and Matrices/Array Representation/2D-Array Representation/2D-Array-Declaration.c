#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Method - 1
	int j,A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}},i;    //  Stack
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	 printf("\n\n\n");
	
	//Method - 2
	int *B[3];     // Stack	
	B[0] = (int *)malloc(4*sizeof(int));   // Heap
	B[1] = (int *)malloc(4*sizeof(int));   // Heap
	B[2] = (int *)malloc(4*sizeof(int));   // Heap
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d ",&B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	
	// Method - 3
	int **C;
	C= (int **)malloc(3*sizeof(int *));         //Heap
	C[0] = (int *)malloc(4*sizeof(int));      //Heap
	C[1] = (int *)malloc(4*sizeof(int));      //Heap
	C[2] = (int *)malloc(4*sizeof(int));      //Heap
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d ",&C[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
