#include <stdio.h>
#include <stdlib.h>

int weight[5] = {1, 3, 9, 27, 81};
int left[5];
int right[5];
int lcount, rcount;
int suml, sumr;

void findWeight(int value)
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += weight[i];
		if (sum >= value)
		{
			if (suml > sumr)
			{
				right[rcount++] = weight[i];
				sumr += weight[i];
			}
			else if (suml < sumr)
			{
				left[lcount++] = weight[i];
				suml += weight[i];
			}
			if (suml == sumr)
				return;
			findWeight(abs(value - weight[i]));
			break;
		}
	}
}

int main()
{
	int groups;
	scanf("%d", &groups);
	while (groups--)
	{
		int value;
		scanf("%d", &value);
		if (value > 121 || value <= 0)
			printf("no answer\n");
		else
		{
			lcount = rcount = 0;
			suml = value;
			sumr = 0;
			findWeight(value);
			printf("left:");
			for (int i = lcount - 1; i >= 0; i--)
				printf(" %d", left[i]);
			printf(" right:");
			for (int i = rcount - 1; i >= 0; i--)
				printf(" %d", right[i]);
			printf("\n");
		}
	}
	return 0;
}
