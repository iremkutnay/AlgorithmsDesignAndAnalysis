#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	
	printf(" Size of array : ");
	scanf("%d", &n);
	
	int array[n];
	int i = 0, j = 0;
	
	for(i = 0; i < n; i++)
	{
		printf(" Number %d : " ,i+1);
		scanf("%d", &array[i]);
	}	
	
	for(i = 0; i < n-1 ;i++)
	{
		for(j = i+1; j <n; j++)
		{
			if(array[i] < array[j])
			{
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			}
		}
	}
	

	for(i = 0;i < n; i++)
	{
		printf(" %d \t", array[i]);
		
	}
	
	
	
	printf("\n Greatest number is : %d  \n", array[0]);
	
	int diff = array[0];
	
	for (i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(abs(array[i]-array[j])<diff)
			{
				diff = abs(array[i]-array[j]);
			}
		}
	}
	printf(" Difference between 2 closest number : %d", diff);
	
	
	
	
}
