#include <stdio.h>
int main()
{
	int groups;
	scanf("%d", &groups);
	while (groups--)
	{
		int number, result = 1;
		scanf("%d", &number);
		for (int i = 2; i <= number; i++)
			result *= i;
		printf("%d\n", result);
	}
	return 0;
}
