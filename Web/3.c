#include <math.h>
#include <stdio.h>
int root(int n)
{
	return (int)sqrt((float)n);
}
int prime(int n)
{
	int i, bound;
	if (n % 2 == 0)
		return (n == 2);
	if (n % 3 == 0)
		return (n == 3);
	if (n % 5 == 0)
		return (n == 5);
	bound = root(n);
	for (i = 7; i <= bound; i = i + 2)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	for (int i = 4; i <= 100; i += 2)
	{
		for (int j = 2; j <= i; j++)
		{
			if (prime(j) && prime(i - j))
			{
				printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
		}
	}
	return 0;
}
