#include <stdio.h>
int main()
{
	int i, j, k;
	for(i = 2; i <= 100; i++)
	{
		printf("%d=", i);
		int num = i;
		while(num > 1)
		{
			for(j = 2; j <= num; j++)
			{
				for(k = 2; k <= j; k++)
				{
					if(k == j && num % k == 0)
					{
						printf("%d", j);
						if(num / k != 1)
							printf("*");
						num /= j;
						j = num;
					}
					if(j % k == 0)
					{
						break;
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}
