#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class Diagonal
{
	private:
		int *A;
		int size;
	public:
		Diagonal()
		{
			size=2;
			A= new int [2];
		}
		Diagonal(int sz)
		{
			this->size = sz;
			A = new int [size];
		}
		void set(int i,int j, int x)
		{
			if(i==j)
			{
				A[i-1] = x;
			}
		}
		int get(int i, int j)
		{
			if(i==j)
			{
				return A[i-1];
			}
			else
			{
				return 0;
			}
		}
		void Display()
		{
			int i,j;
			for(i=0;i<size;i++)
			{
				for(j=0;j<size;j++)
				{
					if(i==j)
					{
						cout<<A[i]<<" ";
					}
					else
					{
						cout<<"0 ";
					}
				}
				cout<<"\n";
			}
		}
};
int main()
{
	Diagonal m(4);
	m.set(1,1,4);
	m.set(2,2,1);
	m.set(3,3,8);
	m.set(4,4,6);
	cout<<m.get(3,3)<<endl;
	m.Display();
	return 0;
}
