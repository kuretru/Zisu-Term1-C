#include <stdio.h>

int cmp(int x, int y);
int data[600][4];

int main()
{
	int i, j, k;
	int m, n;
	int a, b, c;
	int x, y, z;
	int max;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &n);
		for (j = 0; j < n; j++)
		{
			scanf("%d %d %d", &a, &b, &c);
			k = j * 6; //列出所有组合
			data[k][0] = a;	data[k][1] = b;	data[k][2] = c;	data[k++][3] = 0;
			data[k][0] = a; data[k][1] = c; data[k][2] = b; data[k++][3] = 0;
			data[k][0] = b;	data[k][1] = a;	data[k][2] = c;	data[k++][3] = 0;
			data[k][0] = b;	data[k][1] = c;	data[k][2] = a;	data[k++][3] = 0;
			data[k][0] = c;	data[k][1] = a;	data[k][2] = b;	data[k++][3] = 0;
			data[k][0] = c;	data[k][1] = b;	data[k][2] = a;	data[k++][3] = 0;
		}
		for (j = 0; j < n * 6 - 1; j++)
		{
			for (k = 0; k < n * 6 - j - 1; k++)
			{
				if (cmp(k, k + 1))
				{
					x = data[k][0];	y = data[k][1];	z = data[k][2];
					data[k][0] = data[k + 1][0];data[k][1] = data[k + 1][1];data[k][2] = data[k + 1][2];
					data[k + 1][0] = x;	data[k + 1][1] = y;	data[k + 1][2] = z;
				}
			}
		}
		for (j = 0; j < n * 6; j++) //最长不下降序列
		{
			data[j][3] = data[j][2];
			for (k = 0; k < j; k++)
			{
				if (data[j][0] > data[k][0] && data[j][1] > data[k][1])
				{
					if (data[k][3] + data[j][2] > data[j][3])
						data[j][3] = data[k][3] + data[j][2];
				}
			}
		}
		max = data[0][3];
		for (j = 1; j < n * 6; j++)
		{
			if (data[j][3] > max)
				max = data[j][3];
		}
		printf("%d\n", max);
	}
	return 0;
}

int cmp(int x, int y)
{
	int condition = 0;
	if (data[x][0] > data[y][0])
		condition = 1;
	else if (data[x][0] == data[y][0])
	{
		if (data[x][1] > data[y][1])
			condition = 1;
		else if (data[x][1] == data[y][1])
		{
			if (data[x][2] > data[y][2])
				condition = 1;
		}
	}
	return condition;
}
