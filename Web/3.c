#include <stdio.h>
int main()
{
	int num[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int len = sizeof(num) / sizeof(num[0]);
	int i, b;
	for(i = 4; i <= 100; i = i + 2)
	{
		int j, k;
		for(j = 0; j < len; j++)
		{
			for(k = 0; k < len; k++)
			{
				if(num[j] + num[k] == i)
				{
					printf("%d=%d+%d\n", i, num[j], num[k]);
					b = 1;
					break;
				}
			}
			if(b == 1)
			{
				b = 0;
				break;
			}
		}
	}
	return 0;
}
