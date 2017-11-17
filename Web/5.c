#include <stdio.h>
int main()
{
	int i, k, tmp, data[30][30];
	int xmax, ymax;
	scanf("%d", &k);
	for(i = 0; i < k; i++)
	{
		int xlen, ylen, x, y;
		scanf("%d %d", &xlen, &ylen);
		for(x = 0; x < xlen; x++)
		{
			for(y = 0; y < ylen; y++)
			{
				scanf("%d", &tmp);
				data[x][y] = tmp;
			}
			tmp = data[x][0];
			for(y = 1; y < ylen; y++)
			{
				if(data[x][y] > tmp)
					tmp = data[x][ y];
				else if(y == ylen - 1)
					tmp = -1;
			}
			xmax = tmp;
		}
		for(x = 0; x < xlen; x++)
		{
			tmp = data[0][x];
			for(y = 1; y < ylen; y++)
			{
				if(data[y][x] > tmp)
					tmp = data[y][x];
				else if(y == ylen - 1)
					tmp = -1;
			}
			ymax = tmp;
		}
	}
	for(i = 0; i < k; i++)
	{
		if(xmax != ymax)
			printf("%d %d\n", xmax, ymax);
		else if(xmax == ymax)
		{
			if(xmax != 0)
				printf("%d\n", xmax);
			else
				printf("NO\n");
		}
	}
	return 0;
}
