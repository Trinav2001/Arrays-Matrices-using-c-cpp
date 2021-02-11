#include<stdio.h>
#include<stdlib.h>

struct Term
{
	int coef;
	int exp;
};

struct Polynomial
{
	int n;
	struct Term *t;
};

void create(struct Polynomial *p)
{
	printf("How many term ?");
	scanf("%d", &p->n);
	p->t = (struct Term *)malloc(p->n*sizeof(struct Term));
	int i;
	for(i=0;i<p->n;i++)
	{
		scanf("%d%d", &p->t[i].coef, &p->t[i].exp);     
	}
}

void display(struct Polynomial p)
{
	int i;
	for(i=0;i<p.n;i++)
	{
		printf("%dx%d + ", p.t[i].coef, p.t[i].exp);             // coef*x*exp
	}
	
}

struct Polynomial * add(struct Polynomial *p1, struct Polynomial *p2)
{
	int i,j,k;
	struct Polynomial *sum;
	sum = (struct Polynomial *)malloc(sizeof(struct Polynomial));
	sum->t = (struct Term *)malloc((p1->n+p2->n)*sizeof(struct Term));
	i=j=k=0;
	while(i<p1->n && j<p2->n)
	{
		if(p1->t[i].exp > p2->t[j].exp)
		{
			sum->t[k++] = p1->t[i++];
		}
		else if(p1->t[i].exp < p2->t[j].exp)
		{
			sum->t[k++] = p2->t[j++];
		}
		else
		{
			sum->t[k].exp = p1->t[i].exp;
			sum->t[k++].coef = p1->t[i++].coef + p2->t[j++].coef;
		}
	}
	
	for(;i<p1->n;i++)
	{
		sum->t[k++] = p1->t[i];
	}
	for(;j<p2->n;j++)
	{
		sum->t[k++] = p2->t[j];
	}
	sum->n = k;
	return sum;
}

int main()
{
	struct Polynomial p1,p2, *p3;
	create(&p1);
	create(&p2);
	
	p3 = add(&p1, &p2);
	
	printf("\n");
	display(p1);
	printf("\n");
	display(p2);
	printf("\n");
	display(*p3);
	return 0;
}
