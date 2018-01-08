#include <stdio.h>

int contains(int number);

int data[666667][2];
int dcount;

int main()
{
	int groups;
	scanf("%d", &groups);
	while (groups--)
	{
		int count;
		dcount = 0;
		scanf("%d", &count);
		for (int i = 0; i < count; i++)
		{
			int number, index;
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
		int max = 0;
		for (int i = 1; i < dcount; i++)
		{
			if (data[i][1] > data[max][1])
				max = i;
		}
		printf("%d\n", data[max][0]);
	}
	return 0;
}

int contains(int number)
{
	for (int i = 0; i < dcount; i++)
		if (data[i][0] == number)
			return i;
	return -1;
}
