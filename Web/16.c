#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, max, mid;
	scanf("%d", &max);
	mid = max / 2;
	if(max % 2 != 0)
		mid++;
	for(i = 1; i <= max; i++)
	{
		int x, y;
		x = mid - abs(mid - i);
		if(max % 2 == 0 && i > mid)
			x++;
		for(j = 1; j <= max; j++)
		{
			y = mid - abs(mid - j);
			if(max % 2 == 0 && j > mid)
				y++;
			if(y > x)
				y = x;
			printf("%d", y);
			if(j != max)
				printf(" ");
			else
				printf("\n");
		}
	}
	return 0;
}
