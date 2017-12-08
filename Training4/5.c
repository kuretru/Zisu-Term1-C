#include <stdio.h>

int O2, N2, count;
int data[1000][3];
int result;

void calc(int index, int sumo, int sumn, int sumw)
{
	int i;
	int o = data[index][0] + sumo;
	int n = data[index][1] + sumn;
	int weight = data[index][2] + sumw;
	if(weight < result)
	{
		if(o >= O2 && n >= N2)
			result = weight;
		else
			for(i = index + 1; i < count; i++)
				calc(i, o, n, weight);
	}
}

int main()
{
	int i, j;
	int groups;
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		scanf("%d %d %d", &O2, &N2, &count);
		for(j = 0; j < count; j++)
			scanf("%d %d %d", &data[j][0], &data[j][1], &data[j][2]);
		result = 2000000000;
		for(j = 0; j < count; j++)
			calc(j, 0, 0, 0);
		if(result != 2000000000)
			printf("%d\n", result);
		else
			printf("-1\n");
	}
	return 0;
}
