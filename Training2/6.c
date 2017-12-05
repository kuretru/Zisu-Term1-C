#include <stdio.h>

int max(int x, int y)
{
	int max, i;
	for(i = 1; i <= x; i++)
	{
		if(x % i == 0 && y % i == 0)
			max = i;
	}
	return max;
}

int min(int x, int y)
{
	return x * y / max(x, y);
}

int main()
{
	int x, y, tmp;
	scanf("%d %d", &x, &y);
	if(x > y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	printf("%d %d", max(x, y), min(x, y));
}
