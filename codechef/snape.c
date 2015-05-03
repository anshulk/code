//http://www.codechef.com/problems/SNAPE

#include<stdio.h>
#include<math.h>

int main()
{
	int t, b, l;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &b, &l);

		printf("%f %f\n", sqrt(pow(l,2) - pow(b,2)), sqrt(pow(l,2) + pow(b,2)));
	}
	return 0;
}
