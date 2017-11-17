#include <stdio.h>
#include <string.h>
int main()
{
	int result[10] = {0};
	int i, num, cur;
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		cur = i;
		while(cur > 9)
		{
			result[cur % 10]++;
			cur /= 10;
		}
		result[cur % 10]++;
	}
	for(i = 0; i < 10; i++)
		printf("%d\n", result[i]);
	return 0;
}
