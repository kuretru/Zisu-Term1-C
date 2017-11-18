#include <stdio.h>
int main()
{
	int i, j, k;
	int kk, m, n;
	int x, y;
	int result[20][31], data[30][30];
	scanf("%d", &kk);
	for(i = 0; i < kk; i++)
	{
		scanf("%d %d", &m, &n);
		result[i][30] = m;
		for(j = 0; j < m; j++)
			for(k = 0; k < n; k++)
				scanf("%d", &data[j][k]);
		x = 0;
		y = 0;
		for(j = 0; j < m; j++)
		{
			x = 0;
			for(k = 1; k < m; k++)
			{
				if(data[j][k] > data[j][x])
					x = k;
			}
			//printf("x %d\n", x);
			y = 0;
			for(k = 1; k < n; k++)
			{
				if(data[x][k] > data[x][y])
					y = k;
			}
			//printf("y %d\n", y);
			result[i][j] = data[x][y];
			//printf("result %d\n", result[j]);
		}
	}
	for(i = 0; i < kk; i++)
	{
		n = -2000000000;
		for(j = 0; j < result[i][30]; j++)
		{
			if(result[i][j] != n)
			{
				if(j != 0)
					printf(" ");
				n = result[i][j];
				printf("%d", n);
			}
		}
		printf("\n");
	}
	return 0;
}
