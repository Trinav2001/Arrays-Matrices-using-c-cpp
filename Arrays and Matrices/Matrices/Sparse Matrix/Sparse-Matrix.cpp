#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class Element
{
	public:
	int i;
	int j;
	int x;
};

class Sparse
{
	private:
		int m;             //row 
		int n;			   //column
		int num;           //element
 		Element *e;
	public:
		Sparse(int m, int n, int num)
		{
			this->m = m;
			this->n = n;
			this->num = num;
			e = new Element[this->num];
		}
		
		~Sparse()
		{
			delete []e;
		}
		void read()
		{
			int i;
			cout<<("\nEnter non-zero elements");
			for(i=0;i<num;i++)
			{
				cin>>e[i].i>>e[i].j>>e[i].x;         //row, column, element
			}
		}

		void Display()
		{
			int i,j,k=0;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					if(i==e[k].i && j==e[k].j)
					{
						cout<<e[k++].x<< " ";	
					}
					else
					{
						cout<<("0 ");
					}
				}
			printf("\n");
			}
		}
};


/*struct Sparse * Add(struct Sparse *s1, struct Sparse *s2)
{
	int i=0, j=0, k=0;
	struct Sparse *sum;
	if(s1->m != s2->m || s1->n !=  s2->n)
	{
		return NULL;
	}
		sum = (struct Sparse *)malloc(sizeof(struct Sparse));
		sum->e = (struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));
	while(i<s1->num && j<s2->num)
	{
		if(s1->e[i].i < s2->e[j].i)
		{
			sum->e[k++] = s1->e[i++];
		}
		else if(s1->e[i].i > s2->e[j].i)
		{
			sum->e[k++] = s1->e[j++];
		}
		else
		{
			if(s1->e[i].j < s2->e[j].j)
			{
			sum->e[k++] = s1->e[i++];
			}
			else if(s1->e[i].j > s2->e[j].j)
			{
				sum->e[k++] = s1->e[j++];
			}
			else
			{
				sum->e[k] = s1->e[i];
				sum->e[k++].x = s1->e[i++].x + s2->e[j++].x ;
			}
			
		}
	}
	for(;i<s1->num;i++)
		sum->e[k++] = s1->e[i];
	for(;j<s2->num;j++)
		sum->e[k++] = s2->e[j];
	
	sum->m = s1->m;
	sum->n = s1->n;
	sum->num = k;
	return sum;
}*/
int main()
{
	Sparse s(3,3,4);
	s.read();
	s.Display();
	return 0;
}
