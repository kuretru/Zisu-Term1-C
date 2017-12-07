#include <stdio.h>

int xcount, ycount;
int data[101][101][2];//0 -> number,1 -> distance

int calc(int x, int y, int sum)
{
	int i;
	int max;
	int distance[4] = {0};
	if(y > 0 && data[x][y][0] > data[x][y - 1][0])
	{
		distance[0] = calc(x, y - 1, 1);
	}
	if(x > 0 && data[x][y][0] > data[x - 1][y][0])
	{
		distance[1] = calc(x - 1, y, 1);
	}
	if(y < ycount - 1 && data[x][y][0] > data[x][y + 1][0])
	{
		distance[2] = calc(x, y + 1, 1);
	}
	if(x < xcount - 1 && data[x][y][0] > data[x + 1][y][0])
	{
		distance[3] = calc(x + 1, y, 1);
	}
	max = distance[0];
	for(i = 1; i < 4; i++)
		if(distance[i] > max)
			max = distance[i];
	return max + sum;
}

int main()
{
	int i, j, k;
	int m, max;
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d %d", &xcount, &ycount);
		for(j = 0; j < xcount; j++)
		{
			for(k = 0; k < ycount; k++)
			{
				scanf("%d", &data[j][k][0]);
				data[j][k][1] = 0;
			}
		}
		for(j = 0; j < xcount; j++)
		{
			for(k = 0; k < ycount; k++)
			{
				data[j][k][1] = calc(j, k, 1);
			}
		}
		max = data[0][0][1];
		for(j = 0; j < xcount; j++)
		{
			for(k = 0; k < ycount; k++)
			{
				if(j == 0 && k == 0)
					continue;
				if(data[j][k][1] > max)
					max = data[j][k][1];
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
