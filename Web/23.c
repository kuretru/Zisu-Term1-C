#include <stdio.h>
#include <stdlib.h>

int weight[5] = {1, 3, 9, 27, 81};
int left[5];
int right[5];
int l, r;
int suml, sumr;

void findWeight(int value)
{
	int i;
	int sum = 0;
	for(i = 0; i < 5; i++)
	{
		sum += weight[i];
		if(sum >= value)
		{
			if(suml > sumr)
			{
				right[r++] = weight[i];
				sumr += weight[i];
			}
			else if(suml < sumr)
			{
				left[l++] = weight[i];
				suml += weight[i];
			}
			if(suml == sumr)
				return;
			findWeight(abs(value - weight[i]));
			break;
		}
	}
}

int main()
{
	int i, j, n;
	int value;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &value);
		if(value > 121 || value <= 0)
			printf("no answer\n");
		else
		{
			l = 0;
			r = 0;
			suml = value;
			sumr = 0;
			findWeight(value);
			printf("left:");
			for(j = l - 1; j >= 0; j--)
				printf(" %d", left[j]);
			printf(" right:");
			for(j = r - 1; j >= 0; j--)
				printf(" %d", right[j]);
			printf("\n");
		}
	}
	return 0;
}
