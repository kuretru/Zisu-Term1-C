#include <stdio.h>
int main()
{
	int len, i;
	scanf("%d", &len);
	for(i = 0; i < len; i++)
	{
		int num, result = 1, j;
		scanf("%d", &num);
		for(j = 1; j <= num; j++)
		{
			result *= j;
		}
		printf("%d\n", result);
	}
	return 0;
}
