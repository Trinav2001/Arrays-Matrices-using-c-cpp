#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class UpperTri
{
	private:
		int *A;
		int n;
	public:
		UpperTri(int n)
		{
			this->n=n;
			A = new int[n];
		}
		void set(int i, int j, int x)
		{
			if(i<=j)
			{
				A[(j*(j-1)/2) + (i-1)] = x; 
			}
		}
		void Display()
		{
			int i,j;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(i<=j)
					{
						cout<<A[(j*(j-1)/2)+(i-1)]<<" ";
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
	UpperTri ut(3);
	cout<<("\nEnter the elements ");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cin>>(x);
			ut.set(i,j,x);
		}
	}
	cout<<("\n");
	
	ut.Display();
	return 0;
}
