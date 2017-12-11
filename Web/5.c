#include <stdio.h>

int findXMax(int row);
int findYMax(int column);

int data[30][30];
int xCount, yCount;

int main()
{
	int groups;
	scanf("%d", &groups);
	for (int i = 0; i < groups; i++)
	{
		int result[30][2];
		scanf("%d %d", &xCount, &yCount);
		for (int j = 0; j < xCount; j++)
			for (int k = 0; k < yCount; k++)
				scanf("%d", &data[j][k]);
		for (int j = 0; j < xCount; j++)
		{
			int column = findXMax(j);
			int row = -1;
			if (column > -1)
				row = findYMax(column);
			if (row != -1 && column != -1) //查重
			{
				for (int k = 0; k < j; k++)
				{
					if (result[k][0] == row && result[k][1] == column)
					{
						row = -1;
						column = -1;
						break;
					}
				}
			}
			result[j][0] = row;
			result[j][1] = column;
		}
		for (int j = 0; j < xCount; j++)
		{
			int x = result[j][0];
			int y = result[j][1];
			if (x > -1 && y > -1)
			{
				result[j][0] = 1;
				result[j][1] = data[x][y];
			}
			else
				result[j][0] = 0;
		}
		int zero = 0;
		for (int j = 0; j < xCount; j++)
		{
			if (result[j][0] == 1)
			{
				if (zero == 0)
					zero = 1;
				else
					printf(" ");
				printf("%d", result[j][1]);
			}
			if (j == xCount - 1)
			{
				if (zero == 0)
					printf("NO");
				printf("\n");
			}
		}
	}
	return 0;
}

int findXMax(int row)
{
	int max = 0;
	for (int i = 1; i < yCount; i++)
	{
		if (data[row][i] > data[row][max])
			max = i;
	}
	int count = 0;
	for (int i = 0; i < yCount; i++)
	{
		if (data[row][i] == data[row][max])
			count++;
	}
	if (count > 1)
		max = -1;
	return max;
}

int findYMax(int column)
{
	int max = 0;
	for (int i = 1; i < xCount; i++)
	{
		if (data[i][column] > data[max][column])
			max = i;
	}
	int count = 0;
	for (int i = 0; i < xCount; i++)
	{
		if (data[i][column] == data[max][column])
			count++;
	}
	if (count > 1)
		max = -1;
	return max;
}
