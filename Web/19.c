#include <stdio.h>
int main()
{
	int n, m, i, j, result[10];
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &n);
		result[i] = 1;
		for(j = 2; j <= n; j++)
		{
			result[i] *= j;
		}
	}
	for(i = 0; i < m; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}
