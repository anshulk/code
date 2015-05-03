// http://www.codechef.com/DEC14/problems/CAPPLE
#include<stdio.h>
//#include<limits.h>

unsigned find_min( unsigned *array, unsigned size)
{
	unsigned i, min;
	min = array[0];	
	for(i = 1; i < size; i++)
	{
		if(min > array[i])
			min = array[i];
	}

	return min;
}

long find_max( long *array,long size)
{
	long i, max;
	max = array[0];	
	for(i = 1; i < size; i++)
	{
		if(max < array[i])
			max = array[i];
	}

	return max;
}

int main()
{
	int testCases, case_no, appleLeft, time;
	long apples[1000001], tree, no_trees, min, max, max2, diff;
	scanf("%d", &testCases);
	
	for( case_no = 0; case_no < testCases; case_no++)
	{
		time = 0;
		appleLeft = 1;
		scanf("%ld\n", &no_trees);
		
		for(tree = 0; tree < no_trees; tree++)
		{
			scanf("%ld", &apples[tree]);
			if( tree == 0)
			{
				min = apples[tree];
				max = apples[tree];
			}
			else
			{
				if ( min > apples[tree])
					min = apples[tree];
				if ( max < apples[tree])
					max = apples[tree];
			}
		}
			
		while(appleLeft)
		{
			//max = find_max(apples, no_trees);

			if( min == max )
			{
				time++;
				appleLeft = 0;
			}
			else
			{
				for(tree = 0; tree < no_trees; tree++)
				{
					if(tree == 0)
					{
						diff = max - apples[tree];
						max2 = apples[tree];
					}
					else 
					{
						if ( (apples[tree] != max) && ((max - apples[tree]) < diff))
						{
							diff = max - apples[tree];
							max2 = apples[tree];
						}
					}
						 
					if(apples[tree] == max)
						apples[tree] = min;
				}
				time++;
			}

			max = max2;
		}

		printf("%d\n", time);
	}
	return 0;
} 
