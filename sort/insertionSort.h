void insertionSort(float arr[], int length)
{
	int i,j;
	float temp;

	for(i=1;i<length;i++)
	{
		temp = arr[i];
		j=i-1;
		while((arr[j]>temp)&&(j>=0))
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

