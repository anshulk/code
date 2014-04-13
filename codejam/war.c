#include<stdio.h>

typedef struct
{
	int s, e;
	double v[1001];
}block;

void sort(block *a)
{
	int i, j;
	double t;

	for(i=a->s; i<a->e; i++ )
	{
		for(j=a->s; j<a->e-(i-a->s);j++)
		{
			if(a->v[j] > a->v[j+1])
			{
				t = a->v[j+1];
				a->v[j+1] = a->v[j];
				a->v[j] = t;
			}
		}
	}
}

double max(block a)
{
	return a.v[a.e];
}

double min(block a)
{
	return a.v[a.s];
}

void dx(block *a)
{	a->e--;
}

void dn(block *a)
{	a->s++;
}

int main()
{
	block n,k;
	int t, i, j, dw=0, w=0, m;
	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		dw=0; w=0;
		scanf("%d", &m);
		n.s = k.s = 1;
		n.e = k.e = m;

		for(j=0; j<m; j++)
			scanf("%lf", &n.v[j+1]);
		for(j=0; j<m; j++)
			scanf("%lf", &k.v[j+1]);

		sort(&n);
		sort(&k);

		for(j=0; j<m; j++)
		{
			if(max(n) > max(k))
			{
				dx(&n); 
				dw++;
			}
			else
			{
				dn(&n);
			}

			dx(&k);
		}

		n.s = k.s = 1;
		n.e = k.e = m;

		for(j=0; j<m; j++)
		{
			if(max(k) > max(n))
			{
				dx(&k);
			}
			else
			{
				dn(&k); 
				w++;
			}
			
			dx(&n);
		}

		printf("Case #%d: %d %d\n", i+1, dw, w);
		
		/*
		printf("\nn.s = %d, n.e = %d\n", n.s, n.e);

		for(j=0; j<m; j++)
			printf("%lf ", n.v[j+1]);
		printf("\nk.s = %d, k.e = %d\n", k.s, k.e);
		for(j=0; j<m; j++)
			printf("%lf ", k.v[j+1]);
		*/
	}
	return 0;
}
		
