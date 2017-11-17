#include <stdio.h>
int main()
{
	int n, m, i, j, count[10], result[100], num, max;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 10; j++)
			count[j] = 0;
		scanf("%d", &m);
		for(j = 0; j < m; j++)
		{
			scanf("%d", &num);
			count[num]++;
		}
		max = count[0];
		result[i] = 0;
		for(j = 1; j < 10; j++)
		{
			if(count[j] > max)
			{
				max = count[j];
				result[i] = j;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}
