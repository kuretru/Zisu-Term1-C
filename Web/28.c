#include <stdio.h>

void sort(int *, int *, int *);

int main()
{
	int i, j, k, l;
	int m, n;
	int a, b, c;
	int x, y, z;
	int condition, max;
	int result[20], data[600][4];
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &n);
		for(j = 0; j < n; j++)
		{
			scanf("%d %d %d", &a, &b, &c);
			k = j * 6;//列出所有组合
			data[k][0] = a; data[k][1] = b; data[k][2] = c; data[k++][3] = 0;
			data[k][0] = a; data[k][1] = c; data[k][2] = b; data[k++][3] = 0;
			data[k][0] = b; data[k][1] = a; data[k][2] = c; data[k++][3] = 0;
			data[k][0] = b; data[k][1] = c; data[k][2] = a; data[k++][3] = 0;
			data[k][0] = c; data[k][1] = a; data[k][2] = b; data[k++][3] = 0;
			data[k][0] = c; data[k][1] = b; data[k][2] = a; data[k++][3] = 0;
		}
		for(l = 0; l < 3; l++)//从小到大排序
		{
			for(j = 0; j < n * 6 - 1; j++)
			{
				for(k = 0; k < n * 6 - j - 1; k++)
				{
					condition = 0;
					switch(l)
					{
					case 0:
						if(data[k][0] > data[k + 1][0])
							condition = 1;
						break;
					case 1:
						if(data[k][0] == data[k + 1][0] && data[k][1] > data[k + 1][1])
							condition = 1;
						break;
					case 2:
						if(data[k][0] == data[k + 1][0] && data[k][1] == data[k + 1][1] && data[k][2] > data[k + 1][2])
							condition = 2;
						break;
					}
					if(condition)
					{
						x = data[k][0]; y = data[k][1]; z = data[k][2];
						data[k][0] = data[k + 1][0];
						data[k][1] = data[k + 1][1];
						data[k][2] = data[k + 1][2];
						data[k + 1][0] = x; data[k + 1][1] = y; data[k + 1][2] = z;
					}
				}
			}
		}
		for(j = 0; j < n * 6; j++)//最长不下降序列
		{
			data[j][3] = data[j][2];
			for(k = 0; k < j; k++)
			{
				if(data[j][0] > data[j][1] && data[j][1] > data[k][1])
				{
					if(data[k][3] + data[j][2] > data[j][3])
						data[j][3] = data[k][3] + data[j][2];
				}
			}
		}
		max = data[0][3];
		for(j = 1; j < n * 6; j++)
		{
			if(data[j][3] > max)
				max = data[j][3];
		}
		result[i] = max;
	}
	for(i = 0; i < m; i++)
		printf("%d\n", result[i]);
	return 0;
}
