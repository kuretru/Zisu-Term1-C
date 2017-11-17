#include <stdio.h>
#include <math.h>
int main()
{
	int max = 4, i, j;
	for(i = 1; i <= 2 * max - 1; i++)
	{
		for(j = 0; j < abs(max - i); j++)
		{
			printf(" ");
		}
		for(j = 0; j < (max - abs(max - i)) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
