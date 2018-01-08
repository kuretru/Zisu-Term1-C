#include <stdio.h>
int main()
{
	int num[100], sort[100];
	int count = 0;
	while (1)
	{
		int tmp;
		scanf("%d", &tmp);
		if (tmp < 0)
			break;
		num[count] = tmp;
		sort[count] = count + 1;
		count++;
	}
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				tmp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < count; i++)
	{
		printf("%d(%d)", num[i], sort[i]);
		if (i != count - 1)
			printf(" ");
	}
	return 0;
}
