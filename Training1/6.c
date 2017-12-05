#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, n;
	scanf("%d", &n);
	for(i = 1; i <= n * 2 - 1; i++)
	{
		for(j = 0; j < abs(n - i) * 2; j++)
		{
			printf(" ");
		}
		for(j = 0; j < (n - abs(n - i)) * 2 - 1; j++)
		{
			printf("*");
			if(j != (n - abs(n - i)) * 2 - 1 - 1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
