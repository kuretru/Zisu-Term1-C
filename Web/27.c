#include <stdio.h>
int main()
{
	int i, j, m, n, tmp, data[10000], result[20];
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &n);
		for(j = 0; j < n; j++)
		{
			scanf("%d", &tmp);
			data[j] = tmp;
		}
		result[i] = calc(n, data);
	}
	for(i = 0; i < m; i++)
	{
		printf("%d\n", result[i]);
	}
}

int calc(int count, int data[10000])
{
	int i, j, max = 0, tmp, last;
	for(i = 0; i < count; i++)
	{
		if(count - i < max)
			break;
		tmp = 1;
		last = data[i];
		for(j = i + 1; j < count; j++)
		{
			printf("a%d ", data[j]);
			if(data[j] > last)
			{
				printf("%d  ", last);
				tmp++;
				last = data[j];
			}
		}
		printf("\n");
		if(tmp > max)
			max = tmp;
	}
	return max;
}
