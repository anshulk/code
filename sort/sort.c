#include<stdio.h>
#include"insertionSort.h"

int main()
{
	int i;
	float a[] = {1,5,4,7,6,2,3,8,9,10};
	
	insertionSort(a,10);

	for(i = 0; i<10; i++)
	{
		printf("%.0f ", a[i]);
	}
	
	printf("\n");
	
	return 0;
}
