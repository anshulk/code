//http://www.codechef.com/problems/CIELRCPT

#include<stdio.h>
#include<math.h>

int main()
{
	int t,i,ones,pos;
	long p;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		ones = 0;
		pos = 0;
		scanf("%ld", &p);
		while(p)
		{
			if(pos < 12)
				ones += p%2;
			if((pos > 11) && (p%2==1))
				ones += pow(2,(pos-11));
			pos++;
			p>>=1;
		}

		printf("%d\n", ones);
	}

	return 0;
}
