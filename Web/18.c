#include <stdio.h>
int main()
{
	int groups;
	scanf("%d", &groups);
	while (groups--)
	{
		int n, p, result = 0;
		scanf("%d %d", &n, &p);
		for (int i = p + 1; i <= n; i++)
			result += i;
		result += p * 2;
		printf("%d\n", result);
	}
	return 0;
}
