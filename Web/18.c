#include <stdio.h>
int main()
{
	int n, m, p, result[100] = {0};
	int i, j;
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d %d", &n, &p);
		for(j = p + 1; j <= n; j++)
			result[i] += j;
		result[i] += p * 2;
	}
	for(i = 0; i < m; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;
}
