//codedam 2014 Magic Trick anshul
#include<stdio.h>

int card;

struct d
{
	int r;
	int c[4][4];
}x[2];

int match(struct d x, struct d y)
{
	int i, j, k, m=0;
	x.r--;y.r--; 

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(x.c[x.r][i] == y.c[y.r][j])
			{
				m++;
				card = x.c[x.r][i];
			}
		}
	}

	return m;
}

int main()
{

	int t,i,j,k,l,m;

	scanf("%d", &t);

	for(k=0; k<t; k++)	//case k
	{
		m=0;		//number of matches

		for(l=0; l<2; l++)	//arrangement l
		{
			scanf("%d", &x[l].r);	//row l

			for(i=0; i<4; i++)
			{
				for(j=0; j<4; j++)
				{
					scanf("%d", &x[l].c[i][j]);	//input arrangement
				}
			}

		}

		printf("Case #%d: ", k+1);

		m = match(x[0], x[1]);
		if(m == 0)
			printf("Volunteer cheated!\n");
		else if(m == 1)
			printf("%d\n",card);
		else if(m>1)
			printf("Bad magician!\n");
	}

	return 0;
}



