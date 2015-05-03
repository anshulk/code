//http://www.codechef.com/DEC14/problems/SANSKAR

#include<stdio.h>

int find_min_in( long *a, int s)
{
	int i, min = 0;
	for(i = 0; i<s; i++)
	{
		if( a[i] < a[min])
			min = i;
	}

	return min;
}

int main()
{
	int noCases, caseIn, noVal, noGrp, valIn, grpIn, j, minIn;
	long val[25], temp, grp[10];
	
	scanf("%d\n", &noCases);
	
	for(caseIn = 0; caseIn < noCases; caseIn++)
	{
		scanf("%d %d\n", &noVal, &noGrp);

		for( valIn = 0; valIn < noVal; valIn++)
		{
			//Insertion Sort
			
			j = valIn-1;
			// printf("index = %d, j= %d\n",valIn, j);
			scanf("%ld", &temp);

			while( (j>=0) && (val[j] < temp))
			{
				val[j+1] = val[j];
				j--;
			}
			//printf("j= %d\n", j);
			val[j+1] = temp;
		}

		for( grpIn = 0; grpIn < noGrp; grpIn++ )
		{
			grp[grpIn] = 0;
		}

		for( valIn = 0; valIn < noVal; valIn++ )
		{
			minIn = find_min_in(grp, noGrp);
			
			grp[minIn] += val[valIn];
		}

		for( grpIn = 0; grpIn < noGrp; grpIn++ )
		{
			//printf("grp[%d] = %ld\n", grpIn, grp[grpIn]);
			if( grpIn == 0)
				temp = grp[0];
			else if( grp[grpIn] != temp)
			{
				printf("no\n");
				break;
			}
		}
		if( grpIn >= noGrp )
			printf("yes\n");
	}
	return 0;
}
