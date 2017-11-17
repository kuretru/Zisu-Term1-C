#include <stdio.h>
int main()
{
	int i, n, count = 0, list[1000] = {0};
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		if(i % 7 == 0 || i % 11 == 0)
		{
			if(!(i % 7 == 0 && i % 11 == 0))
			{
				list[count] = i;
				count++;
			}
		}
	}
	printf("%d\n", count);
	for(i = 0; i < count; i++)
	{
		printf("%d", list[i]);
		if(i != count - 1)
			printf(" ");
	}
	return 0;
}
