#include <stdio.h>
int main()
{
	int i;
	for(i = 2; i <= 1000; i++)
	{
		int sum = 0, j;
		for(j = 1; j < i; j++)
		{
			if(i % j == 0)
				sum += j;
		}
		if(sum == i)
			printf("%d\n", sum);
	}
	return 0;
}
