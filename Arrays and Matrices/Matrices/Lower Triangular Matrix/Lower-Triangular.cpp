#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class LowerTri
{
	private:
		int *A;
		int n;
	public:
		LowerTri(int n)
		{
			this->n=n;
			A = new int[n];
		}
		void set(int i, int j, int x)
		{
			if(i>=j)
			{
				A[(i*(i-1)/2) + (j-1)] = x; 
			}
		}
		void Display()
		{
			int i,j;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(i>=j)
					{
						cout<<A[(i*(i-1)/2)+(j-1)]<<" ";
					}
					else
						cout<<"0 ";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	int i,j,x;
	LowerTri lt(3);
	cout<<("\nEnter the elements ");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cin>>(x);
			lt.set(i,j,x);
		}
	}
	cout<<("\n");
	
	lt.Display();
	return 0;
}
