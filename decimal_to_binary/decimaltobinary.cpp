#include<stdio.h>    
#include<stdlib.h>

int main()
{  
	int array[10], number, i;    
	printf(" Enter the number to convert : ");    
	scanf("%d", &number);    
	
	for(i = 0; number > 0; i++)    
	{    
		array[i] = number % 2;    
		number = number / 2;    
	}    
	
	printf("\n Binary of Given Number is :");    
	
	for(i = i - 1; i >= 0; i--)    
	{    
		printf(" %d", array[i]);    
	}
	
	return 0;  
}  
