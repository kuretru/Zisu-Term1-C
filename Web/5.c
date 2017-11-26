#include <stdio.h>

int data[30][30];
int findRowMax(int row, int rowCount);
int findColumnMax(int column, int columnCount);

int main()
{
	int i, j, k;
	int x, y, group;
	int result[20][30][2], size[20][2];//0 for row(m) & 1 for column(n)
	scanf("%d", &group);
	for(i = 0; i < group; i++)
	{
		scanf("%d %d", &size[i][0], &size[i][1]);
		for(j = 0; j < size[i][0]; j++)
			for(k = 0; k < size[i][1]; k++)
				scanf("%d", &data[j][k]);

		//寻找峰值点坐标，并判断是否已存在
		for(j = 0; j < size[i][0]; j++)
		{
			y = findRowMax(j, size[i][0]);
			if(y != -1)
			{
				x = findColumnMax(y, size[i][1]);
				if(x != -1)
				{
					for(k = 0; k < j; k++)
					{
						if(result[i][k][0] == x && result[i][k][1] == y)
						{
							x = -1;
							y = -1;
							break;
						}
					}
				}
			}
			result[i][j][0] = x;
			result[i][j][1] = y;
		}

		//取出峰值点坐标值
		for(j = 0; j < size[i][0]; j++)
		{
			x = result[i][j][0];
			y = result[i][j][1];
			if(x == -1 || y == -1)
				result[i][j][1] = 0; //0 -> 该峰值点已存在或无峰值点
			else
			{
				result[i][j][0] = data[x][y];
				result[i][j][1] = 1; //1 -> 有峰值点
			}
		}
	}
	for(i = 0; i < group; i++)
	{
		k = 0;
		for(j = 0; j < size[i][0]; j++)
		{
			if(result[i][j][1] == 1)
			{
				if(k == 0)
					k = 1;
				else
					printf(" ");
				printf("%d", result[i][j][0]);
			}
		}
		if(k == 0)
			printf("NO");
		printf("\n");
	}
	return 0;
}

int findRowMax(int row, int rowCount)
{
	int i, index, count = 0;
	index = 0;
	for(i = 1; i < rowCount; i++)
	{
		if(data[row][i] > data[row][index])
			index = i;
	}
	for(i = 0; i < rowCount; i++)
	{
		if(data[row][i] == data[row][index])
			count++;
	}
	if(count > 1)
		return -1;
	else
		return index;
}

int findColumnMax(int column, int columnCount)
{
	int i, index, count = 0;
	index = 0;
	for(i = 1; i < columnCount; i++)
	{
		if(data[i][column] > data[index][column])
			index = i;
	}
	for(i = 0; i < columnCount; i++)
	{
		if(data[i][column] == data[index][column])
			count++;
	}
	if(count > 1)
		return -1;
	else
		return index;
}
