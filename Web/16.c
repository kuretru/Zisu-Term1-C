#include <stdio.h>
int abs(int number)
{
	if (number >= 0)
		return number;
	else
		return -number;
}
int main()
{
	int max, mid;
	scanf("%d", &max);
	mid = max / 2;
	if (max % 2 != 0)
		mid++;
	for (int i = 1; i <= max; i++)
	{
		int x, y;
		x = mid - abs(mid - i);
		if (max % 2 == 0 && i > mid)
			x++;
		for (int j = 1; j <= max; j++)
		{
			y = mid - abs(mid - j);
			if (max % 2 == 0 && j > mid)
				y++;
			if (y > x)
				y = x;
			printf("%d", y);
			if (j != max)
				printf(" ");
			else
				printf("\n");
		}
	}
	return 0;
}
