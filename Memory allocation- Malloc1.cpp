#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ptr = (int*)malloc(20);
	*ptr= 5;
	printf("Value of the integer %d\nThe address of the integer is %d",*ptr,ptr);
	*ptr++;
	printf("\nEnter new integer","%d");
	scanf("%d",ptr);
	printf("Value of the new integer %d\nThe address of the new integer is %d",*ptr,ptr);
	return 0;
	
}

