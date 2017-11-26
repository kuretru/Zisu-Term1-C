#include <stdio.h>
int main()
{
	int i, j, k;
	int m, n;
	int max;
	int array[10000], sequence[10000];
	int result[20];
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &n);
		for(j = 0; j < n; j++)
			scanf("%d", &array[j]);
		for(j = 0; j < n; j++)
		{
			sequence[j] = 1;
			for(k = 0; k < j; k++)
			{
				if(array[j] > array[k] && sequence[k] + 1 > sequence[j])
					sequence[j] = sequence[k] + 1;
			}
		}
		max = sequence[0];
		for(j = 1; j < n; j++)
		{
			if(sequence[j] > max)
				max = sequence[j];
		}
		result[i] = max;
	}
	for(i = 0; i < m; i++)
		printf("%d\n", result[i]);
	return 0;
}
