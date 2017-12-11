#include <stdio.h>

int contains(int number);

int data[666667][2];
int dcount;

int main()
{
	int i, j;
	int n, m;
	int number, index, max;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		dcount = 0;
		scanf("%d", &m);
		for (j = 0; j < m; j++)
		{
			scanf("%d", &number);
			index = contains(number);
			if (index > -1)
				data[index][1]++;
			else
			{
				data[dcount][0] = number;
				data[dcount++][1] = 1;
			}
		}
		max = 0;
		for (j = 1; j < dcount; j++)
		{
			if (data[j][1] > data[max][1])
				max = j;
		}
		printf("%d\n", data[max][0]);
	}
	return 0;
}

int contains(int number)
{
	int i;
	for (i = 0; i < dcount; i++)
		if (data[i][0] == number)
			return i;
	return -1;
}
